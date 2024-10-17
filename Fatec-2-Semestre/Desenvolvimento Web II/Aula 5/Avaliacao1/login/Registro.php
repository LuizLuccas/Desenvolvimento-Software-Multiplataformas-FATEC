<?php
session_start();

if (!isset($_SESSION['loggedin']) || $_SESSION['role'] !== 'coordenador') {
    header("location: DashBoard.php");
    exit;
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $solicitacao = $_POST['solicitacao'];
    $laboratorio = $_POST['laboratorio']; 
    $prazo = $_POST['prazo'];
    $curso = $_POST['curso'];

 
    $filename = $curso == 'DSM' ? 'dsm.txt' : 'ge.txt';
    $file = fopen($filename, "a");
    fwrite($file, "$solicitacao | $laboratorio | $prazo\n");
    fclose($file);

    $msg = "Solicitação cadastrada com sucesso!";
}
?>

<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Cadastrar Solicitação</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body { font: 14px sans-serif; }
        .wrapper { width: 350px; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Cadastrar Solicitação</h2>
        <form action=<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?> method="post">
            <label>Solicitação</label><br>
            <input type="text" name="solicitacao" required><br>

            <br><label>Laboratório</label><br>
            <select name="laboratorio" required>
                <option value="Laboratório 1">Laboratório 1</option>
                <option value="Laboratório 2">Laboratório 2</option>
                <option value="Laboratório 3">Laboratório 3</option>
            </select><br><br>

            <label>Prazo</label><br>
            <input type="date" name="prazo" required><br>
            <label>Curso</label><br>
            <select name="curso" required>
                <option value="DSM">DSM</option>
                <option value="GE">GE</option>
            </select><br><br>
            <input type="submit" class="btn btn-primary" value="Cadastrar">
            <a href="welcome.php" class="btn btn-danger">Voltar ao Início</a>
        </form>
        <?php if(isset($msg)) echo "<p>$msg</p>"; ?>
    </div>
</body>
</html>
