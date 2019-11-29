#include <stdio.h>

int main(){
	int v1, v2;
	scanf("%d %d",&v1,&v2);
 
    while(v1%5!=0){
        v1=v1+1;
    }
    while(v1<=v2 && v1%5==0){
      if(v2-v1>=5){
			  printf("%d|",v1);
	 		  v1=v1+5;
	    }
	 	  else{
	 		  printf("%d",v1);
	 		  v1=v1+5;
	    }
	  }	
	return 0;
}
