#include <stdio.h>
#include <string.h>
int main()
{
   const double pi=3.14;
   int ii; //定义整形
   double money; //定义字符型
   char cc;  //定义字符型
   char name[20];  //定义字符串

   ii=0;
   cc=0;
   money=0;
   memset(name,0,sizeof(name)); //字符串初始化

  printf("ii=%d\n",ii);
  printf("cc=%c\n",cc);
  printf("money=%f\n",money);
  printf("name=%s\n",name);
  return 0;
}
