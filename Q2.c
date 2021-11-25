#include<stdio.h>
int main()
{

    printf("Enter how many elements:\n");
    int n;
    scanf("%d",&n);

    
    int a[1000];
    int i;
    printf("Enter the elements:\n");
    for (  i = 0; i < n; i++)
    {
        
        scanf("%d",&a[i]);
       
         
    }
     printf("Enter element you want to delete :\n");
     int x;
     scanf("%d",&x);
     int index;


     for (  i = 0; i < n; i++)
    {
        
         if(a[i]==x)
         {
             index=i;

         }
       
         
    }
     printf("The array before deletion :\n");
     for (  i = 0; i < n; i++)
    {
        
          printf("%d,",a[i]);
    }
     printf("\n");

   for (  i = index; i < n-1; i++)
    {
        
        a[i]=a[i+1];

    }
    n--;
      printf("The array after deletion :\n");

      for (  i =0; i < n; i++)
    {
         printf("%d,",a[i]);
        
    }
    printf("\n");
    



}
