function add(formJS){
    let valor1 = eval(formJS.numero1.value);
    let valor2 = eval(formJS.numero2.value);
    var resultado = valor1 + valor2;
    // formJS.resultado.value = resultado;  Deu Problema
    document.write("O resultado é "+formJS.resultado.value);

}
function sub(formJS){
    let valor1 = eval(formJS.numero1.value);
    let valor2 = eval(formJS.numero2.value);
    var resultado = valor1 - valor2;
    //formJS.resultado.value = resultado;
    document.write("O resultado é "+formJS.resultado.value);

}
function div(formJS){
    let valor1 = eval(formJS.numero1.value);
    let valor2 = eval(formJS.numero2.value);
    var resultado = valor1 / valor2;
    //formJS.resultado.value = resultado;
    document.write("O resultado é "+formJS.resultado.value);


}
function mult(formJS){
    let valor1 = eval(formJS.numero1.value);
    let valor2 = eval(formJS.numero2.value);
    var resultado = valor1 * valor2;
    //formJS.resultado.value = resultado;
    document.write("O resultado é "+formJS.resultado.value);

}