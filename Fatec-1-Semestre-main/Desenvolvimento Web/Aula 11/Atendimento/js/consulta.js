var pacientes = []; // declara vetor global
var chamado = []; 
var ultimos = [];
function adicionarPaciente(){
    // cria referência aos elementos de entrada e saída de dados da página
    var inPaciente = document.getElementById("inPaciente");
    var outLista = document.getElementById("outLista");
    var nome = inPaciente.value; // obtém nome do paciente
    
    // verifica preenchimento do nome do paciente
    if (nome == "") {
        alert("informe o nome do paciente");
        inPaciente.focus();
        return;
    }
    pacientes.push(nome); // adiciona o nome do final do vetor
    var lista = ""; // string para concatenar pacientes

    // percorre os elementos do vetor
    for (i = 0; i < pacientes.length; i++){
        lista += (i + 1) + ". " + pacientes[i] + "\n";
    }

    // altera o conteúdo da tag outLista
    outLista.textContent = lista;

    // limpa campo e posiciona cursos em inpaciente
    inPaciente.value = "";
    inPaciente.focus();
}
    // cria referência ao btAdicionar e associa a function ao evento click
    var btAdicionar = document.getElementById("btAdicionar");
    btAdicionar.addEventListener("click", adicionarPaciente);

    //Adicionar uma urgência
    function adicionarurgencia(){
        // cria referência aos elementos de entrada e saída de dados
        var inPaciente = document.getElementById("inPaciente");
        var outLista = document.getElementById("outLista");
        var nome = inPaciente.value; // obtém nome do paciente

        // verifica preenchimento do nome do paciente
        if (nome == "") {
            alert ("Informe o nome do paciente");
            inPaciente.focus();
            return;
        }
        pacientes.unshift(nome); // adiciona o nome no início do vetor
        var lista = ""; // string para concatenar pacientes

        // percorre os elementos do vetor
        for (i = 0; i < pacientes.length; i++){
            lista += (i + 1) + ". " + pacientes[i] + "\n";
        }

        // altera o conteúdo da tag outLista
        outLista.textContent = lista;

        // limpa campo e posiciona cursos em inpaciente
        inPaciente.value = "";
        inPaciente.focus();
    }

    // cria referência ao btAdicionar e associa a function ao evento click
    var btUrgencia = document.getElementById("btUrgencia");
    btUrgencia.addEventListener("click", adicionarurgencia);

    function atenderPaciente(){
        // verifica se vetor pacientes está vazio
        if (pacientes.length == 0){
            alert("Não há pacientes na lista de espera");
            inPaciente.focus();
            return;
        }

        // cria referência aos elementos de saída de dados
        var outAtendimento = document.getElementById("outAtendimento");
        var outLista = document.getElementById("outLista");
        var outChamado = document.getElementById("outChamado");

        // remove paciente do inciio da fila (e obtem nome)
        var atender = pacientes.shift();

        // exibe nome do paciente em atendimento
        outAtendimento.textContent = atender;
        chamado = atender;
        outChamado.textContent = atender + Date ();

        // string para concatenar pacientes
        var lista = "";

        // percorre elementos do vetor
        for (i = 0; i < pacientes.length; i++){
            lista += (i + 1) + ". " + pacientes[i] + "\n";
        }

        // altera o conteudo da tag outLista
        outLista.textContent = lista;
    }
    
    var btAtender = document.getElementById("btAtender");
    btAtender.addEventListener('click', function(event) {
        stop(); // função usada para o Bip Inicial
        atenderPaciente();
        speak(); // falar o nome do Paciente
    });

    function speak(){
        //adaptação de função do javascript para nosso aplicativo
        const utterance = new SpeechSynthesisUtterance(chamado);
        
        // selecionar voz
        const voices = speechSynthesis.getVoices();
        utterance.voice = voices[0]; // escolha a voz especifica

        // texto de voz
        speechSynthesis.speak(utterance);
    }

    let context,
    oscillator,
    contextGain,
    x = 1,
    type = '';

    function start(){
        context = new AudioContext();
        oscillator = context.createOscillator();
        contextGain = context.createGain();

        oscillator.type = type;
        oscillator.connect(contextGain);
        contextGain.connect(context.destination);
        oscillator.start(0);
    }

    function stop(){
        start();
        contextGain.gain.exponentialRampToValueAtTime(
            0.00001, context.currentTime + x
        )
    }