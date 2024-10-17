<?php
session_start();

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['username'];
    $password = $_POST['password'];

    if ($username == 'coordenacao' && $password == 'coordenacao') {
        $_SESSION['loggedin'] = TRUE;
        $_SESSION['role'] = 'coordenador';
        header("location: welcome.php");
    } elseif ($username == 'tecnicos' && $password == 'tecnicos') {
        $_SESSION['loggedin'] = TRUE;
        $_SESSION['role'] = 'tecnico';
        header("location: welcome.php");
    } else {
        $_SESSION['loggedin'] = FALSE;
        $error = "Login ou senha inválidos!";
    }
}
?>

<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Acessar</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body { font: 14px sans-serif; }
        .wrapper { width: 350px; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Acessar</h2>
        <p>Favor inserir login e senha.</p>
        <form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">
            <label>Nome:</label>
            <input type="text" name="username" required><br>
            <label>Senha</label>
            <input type="password" name="password" required><br>
            <div class="form-group">
                <input type="submit" class="btn btn-primary" value="Acessar">
                <a href="Leitura.php" class="btn btn-info">Visualizar todas as Solicitações</a><br>
            </div>
        </form>
        <?php if(isset($error)) echo "<p>$error</p>"; ?>
    </div>
</body>
</html>



