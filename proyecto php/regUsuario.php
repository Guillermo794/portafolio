<HTML>
<HEAD>
 <TITLE>Ingreso</TITLE>
</HEAD>
<BODY>
<H3>Psicologia</H3>

<?php
     $puno = $_POST['usuario'];
     
     $pdos = $_POST['password'];

     $pdosSha1 = sha1($pdos);
     

     if(!$puno || !$pdos){
        echo "Debe completar la información de ambos campos.";
        echo '<br>';
        echo "Regrese y vuelva a intentarlo.";
        echo '<br>';
        exit;
     }
     else{

        echo   '<br>';
        echo 'Bienvenido: ',$puno;
        echo '<br>';

     }

     //Se estable conexión con la base de datos.
    $conn = new mysqli('localhost','gepa','1234','mmse');
    if ($conn->connect_error) die("Se produjo un error fatal....");

    // Se hace la consulta en la base de datos.
    $query = "SELECT * FROM user WHERE usuario = '$puno' AND password = '$pdosSha1'";
    $result = $conn->query($query);
    if (!$result) die("Se produjo un error fatal....");
    
    $rows = $result->num_rows;
    if($rows != 0){
      echo '<br>';
       echo "Elija la prueba que desea realizar <br>";
       
    }
    else{
       echo "El usuario o el password son incorrectos.... vuelva a intentarlo. <br>";
       exit;
    }
   
?>
<a href="http://localhost:8080/curso/proyecto/Datos.html"> <H3>Examen Cognositivo</H3></a>
</BODY>
</HTML>