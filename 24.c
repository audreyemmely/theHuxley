#include <stdio.h>

int fatorial(int n) {
	if(n==0)
		return 1;
	return n*fatorial(n-1);
}

int main() {
	int a;
	while(1){
		scanf("%d",&a);
		if(a == -1)
			break;
		else
			printf("%d\n",fatorial(a));
	}
	return 0;
}
