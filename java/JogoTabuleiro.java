public class JogoTabuleiro {
    private String tp;
    private String cr;
    private int[] pos;

    public JogoTabuleiro(String tipo, String cor, int[] posicao) {
        this.tp = tipo;
        this.cr = cor;
        this.pos = posicao;
    }

    public void mover(int[] novaPosicao) {

    }

    public void capturar(JogoTabuleiro pecaOponente) {

    }

    public boolean verificarMovimentoValido(int[] novaPosicao) {
        return false;
    }

    public String[] obterInformacoesPeca() {
        return new String[]{tp, cr, pos[0] + "," + pos[1]};
    }
}

public class Rei extends JogoTabuleiro {
    public Rei(String cor, int[] posicao) {
        super("Rei", cor, posicao);
    }
}

public class Rainha extends JogoTabuleiro {
    public Rainha(String cor, int[] posicao) {
        super("Rainha", cor, posicao);
    }
}

public class TabuleiroJogo {
    private JogoTabuleiro[][] tabuleiro;

    public TabuleiroJogo() {
        this.tabuleiro = new JogoTabuleiro[8][8];
    }

    public boolean moverPeca(int[] posicaoAtual, int[] novaPosicao) {
        return false;
    }

    public boolean capturarPeca(int[] posicaoAtual, int[] posicaoOponente) {
        return false;
    }

    public boolean verificarMovimentoValido(int[] posicaoAtual, int[] novaPosicao) {
        return false;
    }
}
