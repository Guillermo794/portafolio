<HTML>
<HEAD>
 <TITLE>Ejemplo2 del curso de IS2</TITLE>
</HEAD>
<BODY>
<H1>Elementos básicos del lenguaje PHP</H1>

    <?php
        //Manejo de cadenas de texto.

        // Extraer una subcadena.
        // El valor corresponde donde comienza la subcadena.
        $st1 = "Esta es una prueba de cadena";
        $st2 = substr($st1,5);
        echo("Cadena original: $st1 <br>");
        echo("Subcadena extraida: $st2 <br>");
        echo("<br>");

        //Convertir a mayúsculas y minúscula
        //strtoupper() y strtolower()
        $st3 = strtoupper($st1);
        $st4 = strtolower($st3);
        echo("Cadena original en mayúscula: $st3 <br>"); 
        echo("Cadena original en minúscula: $st4 <br>"); 
        echo("<br>");

        //Largo de la cadena
        $numletras = strlen($st1); 
        echo("Cantidad de caracteres en la cadena: $numletras <br>"); 
        echo("<br>");

        //Eliminar espacios en la cadena
        // trim() quita los espacios a ambos lados de la cadena.
        // ltrim() y rtrim() a la izquierda y a la derecha.
        $st5 = '  el String tiene espacios al inicio y al fina    ';
        $st5 = trim($st5);
        echo("cadena: $st5");
        echo("<br><br>");

        //Comparar cadenas.
        //strcmp(cadena1,cadena2);
        // 0 -> son iguales
        // # negativo (-1) -> cadena1 es menor que cadena2
        // # positivo (1) -> cadena1 es mayor que cadena2
        // Si se distingue entre mayúsculas y minúsculas
        $st6 = "prueba";
        $st7 = "corre por el campo";
        $st8 = "prueba";
        $valor = strcmp($st6, $st8);
        echo("La cadena: $st6 se compara con: $st8 <br>");
        echo("Valor de la comparación: $valor <br><br>");

        $valor = strcmp($st6, $st7);
        echo("La cadena: $st6 se compara con: $st7 <br>");
        echo("Valor de la comparación: $valor <br>");
        echo("<br>");

        //Buscar una cadena dentro de otra cadena
        //strstr(): devuelve la cadena
        //strpos(): devuelve la posición comenzando en cero.
        $st9 = strstr($st1,"prueba");
        $st10 = strstr($st1,"corre");
        echo("Cadena original: $st1 <br>");
        echo("Cadena buscada: prueba <br>");
        echo("Cadena resultante: $st9 <br>");
        echo("Cadena buscada: corre <br>");
        echo("Cadena resultante: $st10 <br>");

        $pos = strpos($st1,"prueba");
        echo("Cadena buscada: prueba <br>");
        echo("Comienza en la posición: $pos <br>");
        echo("<br>");


    ?>
<br>
</BODY>
</HTML>