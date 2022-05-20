function calcular(formJS){
    var valor1 = eval(formJS.numero1.value);

    var valor2 = eval(formJS.numero2.value);

    switch (formJS.operacoes.selectedIndex) {
        case 0:
            var resultado = valor1 + valor2;
            formJS.resultado.value = resultado;
            break;
        case 1:
            var resultado = valor1 - valor2;
            formJS.resultado.value = resultado;
            break;
        case 2:
            var resultado = valor1 * valor2;
            formJS.resultado.value = resultado;
            break;
        case 3:
            var resultado = valor1 / valor2;
            formJS.resultado.value = resultado;
            break;
        default:
            formJS.resultado.value = "ERRO";
            break;
    }
}