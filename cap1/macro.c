#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/*
	Sobre a questão do warning sobre váriavel não utilizada, 
	caso o código seja definido como o comentado abaixo será
	se o macro SHOW_PID não estiver definido o compilador
	irá acusar warning de váriavel não utilizada, caso e caso exclua a linha
	pit_t PID irá gerar o erro de váriavel não declarada porque o nome
	da váriavel foi encontrado.
	
	É possível compilar 
	 gcc -Wall -g -D GNU_SOURCE -D SHOW_PID macro.c -o macro 
	no caso irá adicionar o magro ao executável
*/

// #define SHOW_PID

int main(int argc, char const *argv[]){

	#ifdef SHOW_PID
		pid_t PID;
	#endif

	#ifdef SHOW_PID
		PID = getpid();
		printf("processo %d \n", (int) PID );
	#else
		puts("hello");
	#endif
	
	return 0;
}
// int main(int argc, char const *argv[]){
// 	pid_t PID;

// 	#ifdef SHOW_PID
// 		PID = getpid();
// 		printf("Mostrar o pid  %d \n", PID);
// 	#else
// 		puts("Sem pid");
// 	#endif

// 	return 0;
// }