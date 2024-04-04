data Livro = Livro { nome :: String, escritor :: String, ano :: Int, exemplares :: Int }

criarLivro :: String -> String -> Int -> Int -> Livro
obterNome :: Livro -> String
obterEscritor :: Livro -> String
obterAno :: Livro -> Int
obterExemplares :: Livro -> Int
verificarDisponibilidade :: Livro -> Bool
obterInformacoes :: Livro -> IO ()
emprestarExemplar :: Livro -> IO ()
devolverExemplar :: Livro -> IO ()
