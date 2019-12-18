#include <stdio.h>
#include <string.h>

int main ()
{
int age = 0;
char xb=0;
double weight = 0;
char name[21];
memset(name,0,sizeof(name));
printf("姓名，性别，年龄，体重\n");
scanf("%s %c %d %lf",name,&xb,&age,&weight);
printf("%s %c %d %lf\n",name,xb,age,weight);
return 0; 
}
