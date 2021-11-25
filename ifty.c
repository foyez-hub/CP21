#include<stdio.h>
struct ifty
{
    int age;
    double ar;
    
};

int main()
{
int array [1000];
int i,arry_len=5;
printf("enter the array length/n");
scanf("%d",&arry_len);

for(i=0; i<arry_len; i++)
{
    scanf("%d",&array[i]);

}
int who;
int flag=0;
scanf("%d",&who);
for(i=0;i<arry_len;i++)
{
    if(who==array[i])
    {
        printf("yes\n");
       flag=1;
       break;
    }


}
if(flag==0)
printf("no");


}