<HTML>
<HEAD>
 <TITLE>Ejemplo Encuesta</TITLE>
</HEAD>
<BODY>
<H1>Ejemplo de Encuesta.</H1>

<?php

   $puno = $_GET['puno'];
   $pdos = $_GET['pdos'];
   
   // Se verifica que los campos no estén vacíos....
   if(!$puno || !$pdos){
      echo "Debe responder a todas las preguntas. <br>" ;
      echo "Complete lo que le falte y vuelva a intentarlo. <br>";
      echo '<br>';
      exit;
   }
   else{
      echo "El nombre que ha introducido por GET es:  ";
      echo '<br>';
      echo "Pregunta uno: ", $_GET['puno'], "    ";
      echo '<br>';
      echo "Pregunta dos: ", $_GET['pdos'], "    ";
      echo '<br>';
   }
   
?>
<br>
<br>
</BODY>
</HTML>
