#include<stdio.h>
void max_min(int *a,int n,int *max,int *min)
{

	int *p;
	*max= *min= *a;
	for(p=a+1;p<a+n;p++)
	if(*p>*max)
	*max = *p;
	else if(*p<*min)
	*min=*p;

}


main()
{
	int i,a[10];
	int max,min;
	printf("Iuput 10 int nums you want to operate:\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max_min(a,10,&max,&min);
	printf("\nThe max is:%d\n",max);
	printf("\nThe min is:%d\n",min);
	getchar();
	return 0 ;

}
