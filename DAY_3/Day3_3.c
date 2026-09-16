// Types of errors : Compiler, Linker, Runtime, Logical Errors

#include<stdio.h>
int main(){
   // printf(""Good morning!") //if we dont write ; then its compiler error
  // Printf("Hello"); //in printf P is capital so linker not able to find def of print so it will give error

  printf("hii");
  int num=10;
  int num2=0;
  int ans=num/num2;  //runtime error
  printf("ans is: %d \n",ans);
  printf("hello");

 return 0;

}