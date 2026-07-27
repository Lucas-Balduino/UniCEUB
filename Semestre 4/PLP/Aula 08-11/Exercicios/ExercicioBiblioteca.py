# Você vai criar duas classes: Livro e Biblioteca. A
# classe Livro terá atributos privados e métodos para
# acessar esses atributos. A classe Biblioteca
# gerenciará uma coleção de livros, permitindo
# adicionar e remover livros, bem como listar todos os
# livros na biblioteca.

class Livro:
    def __init__(self, titulo, dataLancamento, numeroDePaginas, autor):
        self.__titulo = titulo
        self.__dataLancamento = dataLancamento
        self.__numeroDePaginas = numeroDePaginas
        self.__autor = autor

    def getTitulo(self):
        return self.__titulo
    
    def getDataLancamento(self):
        return self.__dataLancamento
    
    def getNumeroDePaginas(self):
        return self.__numeroDePaginas

    def getAutor(self):
        return self.__autor

class Biblioteca:
    def __init__(self):
        self.colecaoLivros = []

    def adicionarLivros(self,livro):
        print("Adicionando Livro...")
        self.colecaoLivros.append(livro)

    def removerLivros(self,livro):
        print("Removendo Livro...")
        self.colecaoLivros.remove(livro)

    def listarLivros(self):
        if len(self.colecaoLivros) == 0:
            print("Biblioteca está vazia...")
        else:
            print("Listando Livros...")
            for livro in self.colecaoLivros:
                print(livro.getTitulo()+" - "+ livro.getDataLancamento() +" - ", livro.getNumeroDePaginas(), " - " + livro.getAutor())


bibliotecaNacional = Biblioteca()

livro1 = Livro("Percy Jackson e o Mar de Monstros", "06/07/2008", 300, "Autora")
livro2 = Livro("Turma da Monica", "02/08/1990", 50, "Autor")
livro3 = Livro("Don Casmurro", "01/10/1920", 250, "Autor")

bibliotecaNacional.adicionarLivros(livro1)
bibliotecaNacional.adicionarLivros(livro2)
bibliotecaNacional.adicionarLivros(livro3)
bibliotecaNacional.listarLivros()
bibliotecaNacional.removerLivros(livro2)
bibliotecaNacional.listarLivros()