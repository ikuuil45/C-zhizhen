#include<stdio.h>

void main()
	{
	struct student	
	{
	int num;
	char name[20];
	char sex;
	int age;
	float score;
	};
	struct student studen1={1001,"LIMIN",'M',20,92.5};
	//scanf("%d%s%c%d%f", &student1.num, &student1.name, &student1.sex, &student1.age,&student1.score};
	struct student *p;
	p=&student1;
	printf("Please enter your num&name&age&sex&score");
	printf("Number:%d\n",p->num);
	printf("Name:%s\n",p->name);
	printf("Sex:%c\n",p->sex);
	printf("Age:%d\n",p->age);
	printf("Score:%f\n",p->score);
	getchar();
	return 0;

	}
