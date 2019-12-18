#include <stdio.h>
#include <string.h>
//如果数组下标越界，编译不会报错，但运行一定报错
int main ()
{
int ii=0;
int sum[5];
for (ii=0;ii<100;ii++)
{
 sum[ii]=ii;
}
return 0;
}
