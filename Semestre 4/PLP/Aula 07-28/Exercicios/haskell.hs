--O nome do arquivo nao pode ser com letra maiúcula
-- Delimitacao por identacao
-- Nao é necessaria declaracao de variavel, variáveis nao podem comecar com letra maiúscula
-- No terminal, digite ghci para entrar no ambiente de desenvolvimento haskell
-- Para rodar digite l: nomeDoarquivo.hs
-- Após isso digite o nome da funcao que deseja rodar
-- Após o primeiro carregamento de modulo, digite :r para carregar o arquivo


main :: IO () -- Declaracao da funcao main de tipo entrada e saida
main = do
    putStrLn "Digite o primeiro numero" -- Print, Ln = \n
    a <- getLine -- Um arquivo nao pode terminar com getLine
    putStrLn "Digite o segundo numero" -- Print, Ln = \n
    b <- getLine -- Um arquivo nao pode terminar com getLine

    let x = read a
        y = read b
        c = x + y
    putStrLn $ "O resultado é "++ show c -- Print, Ln = \n