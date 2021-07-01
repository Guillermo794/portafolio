const baseDeDatos = [
    {
        id: 1,
        nombre: 'Café Moka',
        precio: 30,
        descripcion: 'Es una preparación que entra dentro de los cafés con leche al que tradicionalmente se le añade una parte de cacao o sirope de chocolate.  Es una modalidad de café más suave y dulce con su toque característico a cacao y un aspecto espumoso muy apetecible y visualmente muy atractivo.',
        imagen: 'img/moka.jpg'
    },
    {
        id: 2,
        nombre: 'Café de Olla',
        precio: 30,
        descripcion: 'El café de olla es la versión mexicana de preparar café. Tiene un sabor dulcesito particular que le aporta el piloncillo. Sabe delicioso!',
        imagen: 'img/cafe_olla.jpg'
    },
    {
        id: 3,
        nombre: 'Expreso',
        precio: 27,
        descripcion: 'El café expreso es una forma de preparación de café originada en Italia.​ Debe su término a la obtención de esta bebida a través de una cafetera expreso.​ Se caracteriza por su rápida preparación y por un sabor y textura más concentrados.',
        imagen: 'img/expreso.jpg'
    },
    {
        id: 4,
        nombre: 'Chocolate',
        precio: 28,
        descripcion: 'El chocolate caliente o chocolate a la taza es una preparación que se hace a partir de chocolate o cacao en polvo disuelta en agua o leche, a la que se le suele agregar azúcar, harina y especias dulces como canela o clavos de olor.',
        imagen: 'img/chocolate.jpg'
    }

];

let carrito = [];
let total = 0;
const DOMitems = document.querySelector('#items');
const DOMcarrito = document.querySelector('#carrito');
const DOMtotal = document.querySelector('#total');
const DOMbotonVaciar = document.querySelector('#boton-vaciar');
const DOMbotonConfirmar = document.querySelector('#boton-confirmar');
// Funciones

/**
 * Dibuja todos los productos a partir de la base de datos. No confundir con el carrito
 */
function renderizarProductos() {
    baseDeDatos.forEach((info) => {
        // Estructura
        const miNodo = document.createElement('div');
        miNodo.classList.add('card', 'col-sm-4');
        // Body
        const miNodoCardBody = document.createElement('div');
        miNodoCardBody.classList.add('card-body');
        // Titulo
        const miNodoTitle = document.createElement('h5');
        miNodoTitle.classList.add('card-title');
        miNodoTitle.textContent = info.nombre;
        // Imagen
        const miNodoImagen = document.createElement('img');
        miNodoImagen.classList.add('img-fluid');
        miNodoImagen.setAttribute('src', info.imagen);
        // Precio
        const miNodoPrecio = document.createElement('h2');
        miNodoPrecio.classList.add('card-text');
        miNodoPrecio.textContent = '$'+info.precio ;

        //Descripción
        const miNodoDescripcion = document.createElement('p');
        miNodoDescripcion.classList.add('card-description');
        miNodoDescripcion.textContent = info.descripcion;
        // Boton 
        const miNodoBoton = document.createElement('button');
        miNodoBoton.classList.add('btn', 'btn-primary');
        miNodoBoton.textContent = '+';
        miNodoBoton.setAttribute('marcador', info.id);
        miNodoBoton.addEventListener('click', anyadirProductoAlCarrito);
        // Insertamos
        miNodoCardBody.appendChild(miNodoImagen);
        miNodoCardBody.appendChild(miNodoTitle);
        miNodoCardBody.appendChild(miNodoPrecio);
        miNodoCardBody.appendChild(miNodoDescripcion);
        miNodoCardBody.appendChild(miNodoBoton);
        miNodo.appendChild(miNodoCardBody);
        DOMitems.appendChild(miNodo);
       
    });
}

/**
 * Evento para añadir un producto al carrito de la compra
 */
function anyadirProductoAlCarrito(evento) {
    // Anyadimos el Nodo a nuestro carrito
    carrito.push(evento.target.getAttribute('marcador'))
    // Calculo el total
    calcularTotal();
    // Actualizamos el carrito 
    renderizarCarrito();

}

/**
 * Dibuja todos los productos guardados en el carrito
 */
function renderizarCarrito() {
    // Vaciamos todo el html
    DOMcarrito.textContent = '';
    // Quitamos los duplicados
    const carritoSinDuplicados = [...new Set(carrito)];
    // Generamos los Nodos a partir de carrito
    carritoSinDuplicados.forEach((item) => {
        // Obtenemos el item que necesitamos de la variable base de datos
        const miItem = baseDeDatos.filter((itemBaseDatos) => {
            // ¿Coincide las id? Solo puede existir un caso
            return itemBaseDatos.id === parseInt(item);
        });
        // Cuenta el número de veces que se repite el producto
        const numeroUnidadesItem = carrito.reduce((total, itemId) => {
            // ¿Coincide las id? Incremento el contador, en caso contrario no mantengo
            return itemId === item ? total += 1 : total;
        }, 0);
        // Creamos el nodo del item del carrito
        const miNodo = document.createElement('li');
        miNodo.classList.add('list-group-item', 'text-right', 'mx-2');
        miNodo.textContent = `${numeroUnidadesItem} x ${miItem[0].nombre} - $${miItem[0].precio}`;
        // Boton de borrar
        const miBoton = document.createElement('button');
        miBoton.classList.add('btn', 'btn-danger', 'mx-5');
        miBoton.textContent = 'X';
        miBoton.style.marginLeft = '1rem';
        miBoton.dataset.item = item;
        miBoton.addEventListener('click', borrarItemCarrito);
        // Mezclamos nodos
        miNodo.appendChild(miBoton);
        DOMcarrito.appendChild(miNodo);
    });
}

/**
 * Evento para borrar un elemento del carrito
 */
function borrarItemCarrito(evento) {
    // Obtenemos el producto ID que hay en el boton pulsado
    const id = evento.target.dataset.item;
    // Borramos todos los productos
    carrito = carrito.filter((carritoId) => {
        return carritoId !== id;
    });
    // volvemos a renderizar
    renderizarCarrito();
    // Calculamos de nuevo el precio
    calcularTotal();
}

/**
 * Calcula el precio total teniendo en cuenta los productos repetidos
 */
function calcularTotal() {
    // Limpiamos precio anterior
    total = 0;
    // Recorremos el array del carrito
    carrito.forEach((item) => {
        // De cada elemento obtenemos su precio
        const miItem = baseDeDatos.filter((itemBaseDatos) => {
            return itemBaseDatos.id === parseInt(item);
        });
        total = total + miItem[0].precio;
    });
    // Renderizamos el precio en el HTML
    DOMtotal.textContent = total.toFixed(2);
}

/**
 * Vacia el carrito y vuelve a dibujarlo
 */
function vaciarCarrito() {
    // Limpiamos los productos guardados
    carrito = [];
    // Renderizamos los cambios
    renderizarCarrito();
    calcularTotal();
}
/**
 * Confirma producto
 */

 function alerta()
 {
 var mensaje;
 var opcion = confirm("Aceptar o Cancelar Pedido");
 if (opcion == true) {
     mensaje = "Pedido Confirmado, Total a pagar:"+ "$" + total ;
 } else {
     mensaje = "Pedido Cancelado";
     
 }
 document.getElementById("boton-confirmar").innerHTML = mensaje;
 
}


// Eventos
DOMbotonVaciar.addEventListener('click', vaciarCarrito);


// Inicio
renderizarProductos();