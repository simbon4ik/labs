#include <stdio.h>
#include <stdlib.h>

int main(){
	const char *s;
	int n = 0, num = 1;
	char buf[50];
	char *ptr = (char *)calloc(num,sizeof(char));
	ptr = '\0';
	n = scanf("%10[^\n]",buf);
	while (n > 0){
		int j = 0;
		num += 10;
		ptr = realloc(ptr,num*sizeof(char));
		for(int i = num - 11; i < (num-1); i++){
			ptr[i] = buf[j];
			j += 1;
		}
		n = scanf("%10[^\n]",buf);
	}
	if (n == 0){
		if ((buf[0] != '\0') || (ptr[num-1] != '\0')){
			ptr[num] = '\0'; 		//Проверка, что на входе непустая строка
		} 
	}	
	return 0;
}
