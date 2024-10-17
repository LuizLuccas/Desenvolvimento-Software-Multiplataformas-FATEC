<?php
// Acessar registros dos arquivos de texto
$solicitacoesDSM = file_exists('dsm.txt') ? file('dsm.txt') : [];
$solicitacoesGE = file_exists('ge.txt') ? file('ge.txt') : [];

// Combinar as solicitações em um único array
$solicitacoes = array_merge($solicitacoesDSM, $solicitacoesGE);
?>

<!DOCTYPE html>
<html lang="pt_BR">
<head>
    <meta charset="UTF-8">
    <title>Visualizar Solicitações</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.css">
    <style type="text/css">
        body { font: 14px sans-serif; }
        .wrapper { width: 300x; padding: 20px; }
    </style>
</head>
<body>
    <div class="wrapper">
        <h2>Solicitações</h2>
        <div>
            <?php if (!empty($solicitacoes)): ?>
                <?php foreach ($solicitacoes as $solicitacao): ?>
                    <p><?php echo htmlspecialchars($solicitacao); ?></p>
                <?php endforeach; ?>
            <?php else: ?>
                <p>Nenhuma solicitação encontrada.</p>
            <?php endif; ?>
        </div>
        <br>
        <a href="welcome.php" class="btn btn-danger">Voltar ao Início</a>
    </div>
</body>
</html>
