<HTML>
<HEAD>
 <TITLE>Registro</TITLE>
</HEAD>
<BODY>
<H1>Gracias por registrarse </H1>

   <?php
     $st1 = $_POST['usuario'];
     $st2 = $_POST['password'];

     $st2Sha1 = sha1($st2);
     


     if(!$st1 || !$st2 ){
        echo "Debe completar todos los campos.";
        echo '<br>';
        echo "Vuelva a intentarlo.";
        echo '<br>';
        exit;
     }
     else{
        echo ("Los datos capturados en su registro fueron: ");
        echo '<br>';
        echo "usuario: ", $st1, "<br>";
        echo "password: ", $st2, "<br>";

        echo '<br>';
     }
     
     //Se estable conexión con la base de datos.
     $conn = new mysqli('localhost','gepa','1234','mmse');
     if ($conn->connect_error) die("Se produjo un error fatal....");

     // Se inserta en la base los datos capturados.
     $query = "INSERT INTO user VALUES ('$st1', '$st2Sha1')";
     $result = $conn->query($query);
     if (!$result) die("Se produjo un error fatal....");

     $conn->close();

     ?>
<br>
<a href="http://localhost:8080/curso/proyecto/regusuario.html"> <INPUT TYPE="submit" VALUE="Incio de sesion"></a>
</BODY>
</HTML>