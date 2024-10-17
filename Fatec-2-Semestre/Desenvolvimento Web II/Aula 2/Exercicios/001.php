<?php
/*
Variáveis 
*/

$variavel_1 = 'texto';
// Imprimir o valor a variável e o seu tipo
echo ("texto").'<br>';
echo gettype($variavel_1).'<br>';
echo $variavel_1 .'<br>';

$variavel_2 = 123;
// Imprimir o valor a variável e o seu tipo
echo (123).'<br>';
echo gettype($variavel_2).'<br>';
echo $variavel_2 .'<br>';

$variavel_3 = 1;
// Imprimir o valor a variável e o seu tipo
echo (1).'<br>';
echo gettype($variavel_3).'<br>';
echo $variavel_3 .'<br>';

$array = [
    "foo" => "bar",
    "bar" => "foo",
];
// Imprimir o valor a variável e o seu tipo
echo gettype($array).'<br>'. PHP_EOL;
foreach ($array as $valor) {
    echo $valor .'<br>';
}
?>