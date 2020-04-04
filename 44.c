#include <stdio.h>

int main()
{ 
  int v1, v2, v3;
	scanf("%d %d %d", &v1, &v2, &v3);
    if (v2<=v1 && v1<=v3 || v3<=v1 && v1<=v2)
      printf("%d", v1);
    else if (v1<=v2 && v2<=v3 || v3<=v2 && v3<=v1)
      printf("%d", v2);
    else
      printf("%d", v3);
	return 0;
}
