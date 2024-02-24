#include <stdio.h>
#include "mystring.h"
#include <stdlib.h>

char *proc(char *str){
	char *s = NULL, *word1 = NULL, *word2 = NULL, *res = NULL;
	int len = 0, wlen1 = 0, wlen2 = 0, flag = 0,flag2 = 0;
	s = strdup2(str);
    	len = strlen2(str);
	res = (char*)calloc(len+1,sizeof(char));
	word1 = strtok2(s," \t");
	word2 = strtok2(NULL," \t");
	char *ptr = res;
	while (word1 != NULL){	
		wlen1 = strlen2(word1);
		wlen2 = -1;
		if (word2 != NULL) wlen2 = strlen2(word2);
		for (int i = 0; i < wlen1; i ++){
			if ((wlen1 != wlen2) || (word1[i] != word2[i])){
				flag = 0;
				break;
			}
			flag = 1;
		}
		if ((flag == 0) && (flag2 == 0)){
			memcpy2(ptr,word1,wlen1*sizeof(char));
			ptr += wlen1;
			*ptr = ' ';
			ptr += 1;
		}
		flag2 = 0;
		if (flag == 1) flag2 = 1;
		word1 = word2;
		word2 = strtok2(NULL," \t");
	}
	if (ptr != res){
	       	*(ptr-1) = '\0';
	}
	else{
		*ptr = '\0';
	}
	free(s);
	s = NULL;
	return res;
}


