#include <stdio.h>
int main()
{
	int A, B, C, aux;
  scanf("%d %d %d", &A,&B,&C);
    if(A>B){
      aux=A;
      A=B;
      B=aux;
    }
    if(B>C){
      aux=B;
      B=C;
      C=aux;
    }
    if (A>B){
      aux=A;
      A=B;
      B=aux;
    }
  printf("%d\n%d\n%d", A, B, C);
  return 0;
}
