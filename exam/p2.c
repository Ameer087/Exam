#include<stdio.h>
struct student
{
	int id;
	char name[20];
};
int main()
{
struct student s;
printf("Enter Student Details:\n");
printf("Enter Name:");
    scanf("%s",s.name);
printf("Enter Roll No:");
    scanf("%d",&s.id);
printf("\nSTUDENT DETAILS\n");
    printf("Name:%s\n",s.name);
    printf("Roll:%d\n",s.id);
    return 0;
}

