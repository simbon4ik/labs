#include <stdio.h>
#include "mystring.h"
#include <stdlib.h>
#include "proc.h"
#include <time.h>

int main(){
	char *str = readline2("Введите строку: \n");
	char *res = NULL;
	double time = 0.0;
	while (str != NULL){
		printf("Введённая строка: \"%s\" \n",str);
		clock_t start = clock();
		res = proc(str);
		clock_t end = clock();
		printf("Итоговая строка: \"%s\" \n",res);
		time = (double)(end-start)/CLOCKS_PER_SEC;
		printf("Время выполнения: %.15f \n",time);
		free(res);
	//	free(str);
		str = readline2("Введите строку: \n");
	}
	free(str);
	return 0;
}


