var btCalcularDesconto = document.getElementById("btCalcularDesconto");
btCalcularDesconto.addEventListener("click", function() {
    var inProduto = document.getElementById("inProduto");
    var inPreco = document.getElementById("inPreco");
    var outDesconto = document.getElementById("outDesconto");
    var outPrecoFinal = document.getElementById("outPrecoFinal");

    var produto = inProduto.value;
    var preco = Number(inPreco.value);

    preco *= 3; // Preço para 3 unidades
    var desconto = preco * 0.4; // 40% de desconto
    preco -= desconto; // Preço final com desconto

    outDesconto.textContent = "Desconto de R$: " + desconto.toFixed(2);
    outPrecoFinal.textContent = "Preço final: R$ " + preco.toFixed(2);
});