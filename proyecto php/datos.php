<HTML>
<HEAD>
 <TITLE>Examen cognoscitivo</TITLE>
</HEAD>
<BODY>
<H1>Ingreso de datos </H1>

   <?php
     $st1 = $_POST['nombre'];
     $st2 = $_POST['edad'];
     $st3 = $_POST['escola'];
     $st4 = $_POST['fecha'];


     if(!$st1 || !$st2 || !$st3 || !$st4){
        echo "Debe completar todos los campos.";
        echo '<br>';
        echo "Vuelva a intentarlo.";
        echo '<br>';
        exit;
     }
     else{
        echo ("Paciente registrado: ");
        echo '<br>';
        echo "nombre: ", $st1, "<br>";
        echo "Edad: ", $st2, "<br>";
        echo "Escola: ", $st3, "<br>";
        echo "fecha: ", $st4, "<br>";


     }
     
     //Se estable conexión con la base de datos.
     $conn = new mysqli('localhost','gepa','1234','mmse');
     if ($conn->connect_error) die("Se produjo un error fatal....");

     // Se inserta en la base los datos capturados.
     $query = "INSERT INTO registro VALUES ('$st1', $st2, '$st3', '$st4')";
     $result = $conn->query($query);
     if (!$result) die("Se produjo un error fatal....");

     $conn->close();
   ?>
<br>
Presionar Siguiente para pasar a la seguda parte de la prueba<br>
 <a href="http://localhost:8080/curso/proyecto/Orientemp.html"> <H3>Siguiente</H3></a><br>
</BODY>
</HTML>