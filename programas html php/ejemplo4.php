<HTML>
<HEAD>
 <TITLE>Ejemplo de textbox</TITLE>
</HEAD>
<BODY>
<H1>Ejemplo de textbox: </H1>

   <?php
     $st1 = $_POST['cadenauno'];
     $st2 = $_POST['cadenados'];

     if(!$st1 || !$st2){
        echo "Debe completar todos los campos.";
        echo '<br>';
        echo "Vuelva a intentarlo.";
        echo '<br>';
        exit;
     }
     else{
        // es igual hacer referencia a la varibale por: $_POST['cadenauno'] que por: $st1
        echo ("Los datos capturados en el formulario fueron: ");
        echo '<br>';
        echo "Cadena Uno: ", $_POST['cadenauno'], "<br>";
        echo "Cadena Dos: ", $st2, "    ";
        echo '<br>';
     }
     
   ?>
<br>
</BODY>
</HTML>
