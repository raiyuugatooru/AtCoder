#include<stdio.h>


int main(){
  
  int n, j = 1;
  long high, h[100000];
  scanf("%d",&n);
  for(int i = 0; i<n; i++)
    scanf("%ld",&h[i]);
  high = h[0];
  
  while((high <= h[j])&&(j != n)){
    if (high < h[j])
      h[j]--;
    high = h[j];
    j++;
  }
  
  if (j == n)
    printf("Yes");
  else
    printf("No");
  
  return 0;
  
  
}
