#include <iostream>
#include <cstring>
using namespace std;
#include "Livro.h"

int main () 
{
   Livro *livro1;
   livro1 = new Livro();
   livro1->codigo = 1;
   strcpy(livro1->titulo, "A vida de Elm");
   cout << "Livro 1: código: " << livro1->codigo << '\n';
   cout << "Livro 1: Título: " << livro1->titulo << '\n';
   delete livro1;

   Livro *livro2;
   unsigned int codigo;
   char titulo[100];
   char editora[60];
   unsigned int paginas;
   char isbn[20];

   codigo = 2;
   strcpy(titulo, "Título 2");
   strcpy(editora, "Editora 2");
   paginas = 120;
   strcpy(isbn, "isbn 2");

   livro2 = new Livro(codigo, titulo, editora, paginas, isbn);

   cout << '\n';
   cout << livro2->codigo << ", " << livro2->titulo << '\n';

   delete livro2;

   return 0;
}

