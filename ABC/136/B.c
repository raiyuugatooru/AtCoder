#include<stdio.h>
#include<math.h>


int main(){
  
  int n, i = 1, evens = 0;
  scanf("%d",&n);
  
  while(n >= i){
    if(((int)log10(i)%2) == 0)  //forgive me.
      evens++;
    i++;
  }
  
  printf("%d",evens);
  
  return 0;
  
  
}
