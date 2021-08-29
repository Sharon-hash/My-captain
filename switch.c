#include <stdio.h>
int main() 
{
  char op;
  printf("Enter a number between1 to 5:\n ");
  scanf("%c", &op);
  switch (op)
   {
    case '1':
      printf("Food Item- Pizza\n");
      printf("Price - Rs200");
      break;
    case '2':
      printf("Food Item- Burger\n");
      printf("Price - Rs130");
      break;
    case '3':
      printf("Food Item- Sandwich\n");
      printf("Price - Rs149");
      break;
    case '4':
      printf("Food Item- Pasta\n");
      printf("Price - Rs180");
      break;
    case '5':
      printf("Food Item- French Fries\n");
      printf("Price - Rs100");
      break; 
    default:
      printf("Use the default case");
  }

  return 0;
}
