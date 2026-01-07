#include <stdio.h>
#include <string.h>

struct Person
{
	char name[30];
	int age;
	char city[20];
};

int main(void)
{
	struct Person p;
	
	printf("Enter your name:");
	fgets(p.name,sizeof(p.name),stdin);
	p.city[strcspn(p.name,"\n")]='\0';
	
	printf("Enter age:");
	scanf("%d",&p.age);
	getchar();
	
	printf("Enter city:");
	fgets(p.city,sizeof(p.city),stdin);
	p.city[strcspn(p.city,"\n")]='\0';
	
	printf("=== Your Information ===\n");
	printf("Name:%s\nAge:%dncity:%sn",p.name,p.age,p.city);
	
	return 0; 
}