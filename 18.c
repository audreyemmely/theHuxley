#include <stdio.h>

int v1, v2, v3;

int main()
{ 

  scanf("%d %d %d", &v1, &v2, &v3);
    if (v1<=v2 && v1<=v3)
      printf("%d", v1);
    else if (v3<=v2 && v3<=v1)
	    printf("%d", v3);
    else
	    printf("%d", v2);
	return 0;
}
