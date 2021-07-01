<HTML>
<HEAD>
 <TITLE>Examen cognoscitivo</TITLE>
</HEAD>
<BODY>
<H1>Orientacion Espacial </H1>

   <?php
     $st1 = $_POST['pais'];
     $st2 = $_POST['provincia'];
     $st3 = $_POST['ciudad'];
     $st4 = $_POST['lugar'];
     $st5 = $_POST['piso'];


     if(!$st1 || !$st2 || !$st3 || !$st4 || !$st5 ){
        echo "Debe completar todos los campos.";
        echo '<br>';
        echo "Vuelva a intentarlo.";
        echo '<br>';
        exit;
     }
     else{
        echo ("Datos capturados correctamente: ");
        echo '<br>';



     }
     
     //Se estable conexión con la base de datos.
     $conn = new mysqli('localhost','gepa','1234','mmse');
     if ($conn->connect_error) die("Se produjo un error fatal....");

     // Se inserta en la base los datos capturados.
     $query = "INSERT INTO oe VALUES ('$st1', '$st2', '$st3', '$st4', '$st5')";
     $result = $conn->query($query);
     if (!$result) die("Se produjo un error fatal....");

     $conn->close();
   ?>
<br>
Presionar siguiente<br>
 <a href="http://localhost:8080/curso/proyecto/Usuario.html"> <H3>Siguiente</H3></a><br>
</BODY>
</HTML>