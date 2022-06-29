#include<stdio.h>
main()
{
	int a[3];
	int *p,i;
	p=&a[0];
	printf("Please enter three num\n");
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	printf("The num is output by the pointer as\n");
	for(p=a;p<(a+3);p++)//a=&a[0]
	printf("%d",*p);
	getchar();

	return 0;
}
