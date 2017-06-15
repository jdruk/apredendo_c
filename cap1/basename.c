#include <string.h>

char *
Basename(char* pathname){
	char *cp;

	// Duas maneiras de resolver este warning
	//if ((cp = strrchr(pathname,'/')))
	if ((cp = strrchr(pathname,'/')) != 0)
		return cp + 1;
	return pathname;
}