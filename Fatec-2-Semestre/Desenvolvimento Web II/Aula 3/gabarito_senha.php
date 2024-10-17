<!DOCTYPE html>
<html lang="pt-BR">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Adivinhando a senha</title>
</head>
<body>
<?php
    $senha_digitada=$_POST['senha'];
    $senha_correta=1234;

    if ($senha_digitada == $senha_correta){
        echo("Parabens");
    }
    else{
        echo ("senha errada");
    }
?>
</body>
</html>
