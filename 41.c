#include <stdio.h>
int main()
{ 
  int A, B, C;
	scanf("%d %d %d",&A,&B,&C);
	  if(A<B && A<C){
      B<=C? printf("%d\n%d\n%d\n",C,B,A):printf("%d\n%d\n%d\n",B,C,A);
    }
	  else if (B<=A && B<=C){
	    A<=C? printf("%d\n%d\n%d\n",C,A,B):printf("%d\n%d\n%d\n",A,C,B); 
    }
    else if (C<=A && C<=B){
      B<=A? printf("%d\n%d\n%d\n",A,B,C):printf("%d\n%d\n%d\n",B,A,C);
    } 
  return 0;
}
