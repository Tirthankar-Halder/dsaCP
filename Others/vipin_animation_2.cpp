#include <stdio.h> 
#include <unistd.h> 
#include <stdlib.h> 
 
int main() 
{ 
 	int i = 0; 
 	char load[26]; 
 	while(true) 
 	{ 
 		system("cls"); 
 		load[i++] = '.'; 
 		load[i] = '\0'; 
  
		printf("\n\nVipin is waiting for girls [%-25s]", load); 
 		sleep(1); 
 	} 
 
 system("cls"); 
 printf("\n"); 
} 