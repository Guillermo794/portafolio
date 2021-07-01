<HTML>
<HEAD>
 <TITLE>Examen cognoscitivo</TITLE>
</HEAD>
<BODY>
<H1>Orientacion  Temporal</H1>

   <?php
     $st1 = $_POST['anio'];
     $st2 = $_POST['epoca'];
     $st3 = $_POST['mes'];
     $st4 = $_POST['dia'];
     $st5 = $_POST['diames'];


     if(!$st1 || !$st2 || !$st3 || !$st4 || !$st5 ){
        echo "Debe completar todos los campos.";
        echo '<br>';
        echo "Vuelva a intentarlo.";
        echo '<br>';
        exit;
     }
     else{
        echo ("Datos Capturados correctamente: ");
        echo '<br>';



     }
     
     //Se estable conexión con la base de datos.
     $conn = new mysqli('localhost','gepa','1234','mmse');
     if ($conn->connect_error) die("Se produjo un error fatal....");

     // Se inserta en la base los datos capturados.
     $query = "INSERT INTO ot VALUES ($st1, '$st2', '$st3', '$st4', $st5)";
     $result = $conn->query($query);
     if (!$result) die("Se produjo un error fatal....");

     $conn->close();
   ?>
<br>
Presionar siguiente para pasar a la tercera parte del test<br>
 <a href="http://localhost:8080/curso/proyecto/orientespa.html"> <H3>Siguiente</H3></a><br>
</BODY>
</HTML>