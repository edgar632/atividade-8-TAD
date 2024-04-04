data Funcionario = Funcionario { nm :: String, id :: Int, cg :: String, sl :: Double, depto :: Departamento }

data Departamento = Departamento { nmD :: String, idD :: Int, loc :: String, funcs :: [Funcionario] }

criarFuncionario :: String -> Int -> String -> Double -> Departamento -> Funcionario
atualizarInfoPessoais :: Funcionario -> String -> String -> Double -> Funcionario
transferirDepto :: Funcionario -> Departamento -> Funcionario
obterDeptoAssociado :: Funcionario -> Departamento

criarDepartamento :: String -> Int -> String -> Departamento
adicionarFuncionario :: Departamento -> Funcionario -> Departamento
removerFuncionario :: Departamento -> Funcionario -> Departamento
obterFuncionarios :: Departamento -> [Funcionario]
