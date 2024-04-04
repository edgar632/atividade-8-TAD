data PecaXadrez = PecaXadrez { estilo :: String, color :: String, position :: (Int, Int) } deriving Show

criarPecaXadrez :: String -> String -> (Int, Int) -> PecaXadrez
moverPecaXadrez :: PecaXadrez -> (Int, Int) -> PecaXadrez
capturarPecaXadrez :: PecaXadrez -> PecaXadrez -> PecaXadrez
ehMovimentoValidoPecaXadrez :: PecaXadrez -> (Int, Int) -> Bool
obterInformacoesPecaXadrez :: PecaXadrez -> [String]

data XadrezTabuleiro = XadrezTabuleiro { tabuleiroXadrez :: [[PecaXadrez]] } deriving Show

criarXadrezTabuleiro :: XadrezTabuleiro
moverPecaTabuleiro :: XadrezTabuleiro -> (Int, Int) -> (Int, Int) -> Bool
capturarPecaTabuleiro :: XadrezTabuleiro -> (Int, Int) -> (Int, Int) -> Bool
ehMovimentoValidoTabuleiroXadrez :: XadrezTabuleiro -> (Int, Int) -> (Int, Int) -> Bool
