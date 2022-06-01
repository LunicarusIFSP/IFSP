function cadastrarProfessor(){
    var professor = {
        nome : "",
        aniversario : 0
    };
    professor.nome = document.getElementById("nomeProfessor").value;
    professor.aniversario = document.getElementById("dataNascimento").value;

    professorTemporario = Object.create(professor);
    professorTemporario.cnpj = "";
    alert(professor.nome + "   " + professor.aniversario);
    alert(professorTemporario.cnpj);
}