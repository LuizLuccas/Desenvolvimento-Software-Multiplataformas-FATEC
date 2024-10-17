<?php
session_start();

if (!isset($_SESSION['loggedin']) || $_SESSION['loggedin'] !== TRUE) {
    header("location: DashBoard.php");
    exit;
}

$role = $_SESSION['role'];
?>

<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Welcome</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body { font: 14px sans-serif; }
        .wrapper { text-align: center;}
    </style>
</head>
<body>
    <div class="wrapper">
        <h1>Bem-vindo, <?php echo $role == 'coordenador' ? 'Coordenador' : 'Técnico'; ?>!</h1>
        <br>
        <br>
        
        <?php if ($role == 'coordenador'): ?>
            <a href="Registro.php" class="btn btn-info">Cadastrar Solicitações</a>
        <?php endif; ?>
        
        <a href="Leitura.php" class="btn btn-info">Visualizar todas as Solicitações</a>
        <a href="ge.txt" class="btn btn-info">Visualizar solicitações GE</a>
        <a href="dsm.txt" class="btn btn-info">Visualizar solicitações DSM</a>
        <a href="logout.php" class="btn btn-danger">Sair</a>
    </div>
</body>
</html>
