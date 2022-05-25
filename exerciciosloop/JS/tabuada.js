function tabuada() {
    numero = parseInt(window.prompt("informe um numero para adquirir sua tabuada"));

    for (let index = 0; index < 11; index++) {
        document.write( numero+" x "+index+" = "+ index*numero +"<br>");
        
    }
}

tabuada();