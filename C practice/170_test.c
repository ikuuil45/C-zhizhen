#include<stdio.h>
#include<stdlib.h>
main()
{ 	int i;
	char *strings[2]={};
	
	for(i=0;i<3;i++)
 	{
	strings[i]=(char*)malloc(100*sizeof(char));
 	scanf("%s",strings[i]);
	}
 
 	char **p;
 	p=strings;
 
 	for(i=0;i<3;i++)
 	{
 	printf("%s",*(p+i));
	} 

}
