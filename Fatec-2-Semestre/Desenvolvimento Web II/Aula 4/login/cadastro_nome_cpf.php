<?php
// Verifica se os dados foram enviados pelo formulário
if (isset($_POST['nome']) && isset($_POST['cpf'])) {
    $nome = $_POST['nome'];
    $cpf = $_POST['cpf'];
    
    // Define o nome do arquivo
    $filename = "cadastros.txt";
    
    // Verifica se o arquivo existe e abre para escrita
    if (!file_exists($filename)) {
        $handle = fopen($filename, "w");
    } else {
        $handle = fopen($filename, "a");
    }
    
    // Escreve o nome e o CPF no arquivo, separados por uma vírgula
    fwrite($handle, "\n Nome: " . $nome . "\n CPF: " . $cpf . "\n");
    fflush($handle);
    fclose($handle);

    // Mensagem de confirmação
    echo "Cadastro realizado com sucesso!<br>";
    
    // Abre o arquivo para leitura e exibe os cadastros
    $handle = fopen($filename, "r");
    while (!feof($handle)) {
        $line = fgets($handle);
        echo $line . "<br>";
    }
    fclose($handle);
} else {
    echo "Por favor, preencha o formulário.";
}


?>
