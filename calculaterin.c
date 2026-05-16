#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int op,n1,n2;
    float res;
    //char ch;
    do
    {
        printf("enter a no. of operation to perform in c");
        printf("\n 1 add\n2 sub\n3 multiplication\n4 divide\n5 square\n6 square root\n7 exit\nplz make a choice\n");
        scanf("%d",&op);
        switch(op)
        {
          case 1:
          printf("you chose add");
          printf("\n enter your first no.");
          scanf("%d",&n1);
          printf("enter your second no: ");
          scanf("%d",&n2);
          res=n1+n2;
          printf("addition is");
          printf("%f",res);
          break;
          case 2:
          printf("you chose sub");
          printf("\n enter your first no.");
          scanf("%d",&n1);
          printf("enter your second no: ");
          scanf("%d",&n2);
          res=n1-n2;
          printf("sub is");
          printf("%f",res);
          break;
          case 3:
          printf("you chose multiply");
          printf("\n enter your first no.");
          scanf("%d",&n1);
          printf("enter your second no: ");
          scanf("%d",&n2);
          res=n1*n2;
          printf("multiply is");
          printf("%f",res);
          break;
          case 4:
          printf("you chose divide");
          printf("\n enter your first no.");
          scanf("%d",&n1);
          printf("enter your second no: ");
          scanf("%d",&n2);
          res=n1/n2;
          printf("divide is");
          printf("%f",res);
          break;
          case 5:
          printf("you chose add");
          printf("\n enter your first no.");
          scanf("%d",&n1);
          res=n1*n1;
          printf("square is");
          printf("%f",res);
          break;
          case 6:
          printf("you chose add");
          printf("\n enter your first no.");
          scanf("%d",&n1);
          res=sqrt(n1);
          printf("sqyare root is");
          printf("%f",res);
          break;
          case 7:
          exit(0);
          break;
          default:
          printf("enter a no. from above");
        }
          printf("\n\n\n\n");
    }while(op!=7);
    return 0;     
}

