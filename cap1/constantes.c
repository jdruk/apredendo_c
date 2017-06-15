/*
	No livro informa que caso fosse feita a primeira declaração o warning de váriavel não utilizada 
	seria lançado, para resolver na antiga versão do compilador era apenas necessário adicionar a 
	palavra reservada const.

	Agora adicionando const apenas irá gerar outro warning que no caso é de constante declarada
	mas não utilizada.

*/

//static  char rcsid[]  = "@(#)constantes.c $Revisão: 1.3$";
static const char rcsid[]  = "@(#)constantes.c $Revisão: 1.3$";

#include "stdio.h"
int main(int argc, char const *argv[]){
	(void) argv;
	(void) argc;

	puts("hello");
	return 0;
}