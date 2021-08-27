#include<stdio.h>
int main()
{
    int A;
    printf(“Enter the marks:”);
    scanf(“%d”,&A);
    if(A>=85  &&  A<=100)
       {
          printf(“Grade A”);
       }
    else if(A>=70 && A<85)
      {
          printf(“ Grade B”);
       }
    elseif(A>=55 && A<70)
       {
          printf(“Grade C”);
       }
    elseif(A>=40 && A<55)
       {
          printf(“Grade D”);
       }
    else
      {
          printf(“Grade F”);
      }
}
