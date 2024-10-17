<?php
$filename = "cadastros.txt"; // Nome do arquivo

// Verifica se o arquivo existe antes de tentar abri-lo
if (file_exists($filename)) {
    $handle = fopen($filename, "r"); // Abre o arquivo para leitura
    
    // Lê e exibe o conteúdo do arquivo linha por linha
    while (!feof($handle)) {
        $line = fgets($handle);
        echo $line . "<br>"; // Exibe cada linha seguida de uma quebra de linha HTML
    }
    
    fclose($handle); // Fecha o arquivo
} else {
    echo "O arquivo não existe."; // Mensagem de erro caso o arquivo não seja encontrado
}
?>
