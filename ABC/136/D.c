#include<stdio.h>


int main(){
  
  char s[100001];
  int length = 0, stpoint = 0, letmany = 1, num[100000];
  scanf("%s",s);
  while(s[length] != '\0'){
    num[length] = 0;
    length++;
  }
  
  for(int i = 1; length > i; i++){
    if(s[i] == s[i-1])
      letmany++;
    else{
      if(s[i-1] == 'R'){
        num[i-1] += (letmany/2)+(letmany%2);
      	num[i] += (letmany/2);
      }
      else{
        num[stpoint-1] += (letmany/2);
        num[stpoint] += (letmany/2)+(letmany%2);
      }
      letmany = 1;
      stpoint = i;
    }
  }
  num[stpoint-1] += (letmany/2);
  num[stpoint] += (letmany/2)+(letmany%2);
  
  for(int i = 0; length > i; i++)
    printf("%d ",num[i]);
  
  return 0;
  
  
}
