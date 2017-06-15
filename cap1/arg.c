#include <stdio.h>


// omitir advertências de argumetos não utilizados
int main(int argc, char **argv){
	// Diz ao compilador que o argumento está referenciado mas será descatado essa referência
	(void) argc;
	(void) argv;
	puts("hello world");
	return 0;
}