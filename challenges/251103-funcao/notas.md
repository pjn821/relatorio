// ter atençao aos simbolos 

erro:
    string operar(string operaçao){
        string operaçao = "Calculo de " +operaçao;
        return operaçao;

correto:
    string operar(string operacao){
    string operacao = "Calculo de " +operacao;
    return operacao;


// definiu variavel duas vezes ter atençao a isto
    string saudar(string nome){
        string nome = "Bom dia, "+ nome +".";
        return nome;
    }

    string operar(string operacao){
        string operacao = "Calculo de " +operacao;
        return operacao;
    }

forma de resolver 
    definir uma nova variavel
        ex: string mensagem = "Calculo de " +operacao;
    usar a variavel anterior
        ex: nome = "Bom dia, "+ nome +".";