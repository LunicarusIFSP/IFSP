function nParesnImpares() {
    numero = parseInt(window.prompt("informe um numero de pares e impares que deseja receber"));

    for (let index = 1; index <= numero; index++) {
        document.write("numero par: " + index*2 + "<br>");
    }
}

nParesnImpares();