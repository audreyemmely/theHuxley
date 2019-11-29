#include <stdio.h>

int main(){ 

int A, B, C, x;

scanf("%d %d %d", &A,&B,&C);

x=(A+B+C)/3;

    if (x>=7){
	printf("aprovado\n");
    }
    else if(x<3){
		printf("reprovado\n");
    }
    else{
	printf("prova final\n");
    }
		return 0;
}
