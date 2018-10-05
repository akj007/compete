#include<conio.h>
 void main()
{ int a,i,f=0;
  printf("enter a number");
  scanf("%d", &a);
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    {
      f=f+1;
     }
  }
  if(f==2)
  {
    printf("the number %d is prime",a);
  }
  else
  {
    printf("not prime");
  }
  return 0;
}
