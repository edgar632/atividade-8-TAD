public class GerenciarDeptos {
    public static void main(String[] args) {
    }
}

class Empregado {
    private String nm;
    private int id;
    private String cargo;
    private double sl;
    private Departamento depto;

    public Empregado(String nome, int id, String cargo, double salario, Departamento departamento) {
        this.nm = nome;
        this.id = id;
        this.cargo = cargo;
        this.sl = salario;
        this.depto = departamento;
    }

    public void atualizarInfoPessoais(String nome, String cargo, double salario) {
        this.nm = nome;
        this.cargo = cargo;
        this.sl = salario;
    }

    public void transferirDepto(Department novoDepartamento) {
        this.depto.removerFuncionario(this);
        novoDepartamento.adicionarFuncionario(this);
        this.depto = novoDepartamento;
    }

    public Department obterDeptoAssociado() {
        return this.depto;
    }
}
