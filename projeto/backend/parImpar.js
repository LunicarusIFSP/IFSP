function parImpar(form){
    let numero1 = eval(form.numero1.value);
    (numero1 % 2 == 0 ) ? alert("Par") : alert("impar");
}