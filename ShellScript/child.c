#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
      int i,a,b;
      a=getpid();
      b=getpid();
    //   i=fork();
      if(i==0){
       printf("\nchild process has started");
       printf("\nid of child process is %d",a);
      }
      else{
       printf("\nparent process has started");
       printf("\nid of parent process is %d",b);
}
}