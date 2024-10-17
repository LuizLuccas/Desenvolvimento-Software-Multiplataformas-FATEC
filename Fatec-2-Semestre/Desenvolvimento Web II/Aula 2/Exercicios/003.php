<?php
/*
Escreva um script que imprima qual o maior número.
Converter variáveis strings em inteiros
Use IF
*/

$a = "10";
$b = "1";

// Converter as variáveis para inteiros e comparar
if ((int)$a > (int)$b) {
    echo $a . " é maior" . '<br>';
} else {
    echo $b . " é maior" . '<br>';
}

// Alterar os valores das variáveis
$a = "ola";
$b = "mundo";

// Imprimir os novos valores
echo $a . " " . $b . '<br>';
?>
