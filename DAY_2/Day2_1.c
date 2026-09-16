
// Escape Sequence \n \r \t \b \" \' %% \\n  

#include <stdio.h>
int main(){
    printf("hello\neveryone\n"); // we use \n when we want cursor on next line

    printf("Good morning\rnice\n"); // if we want to replace 1st word then we use \r 
    printf("Good morning\rgreat\n"); 
    printf("Good  morning\rgreat\n");
    printf("Java\tjdbc\thiberante\tspringboot\n");// \t will give tab after each word(if we want equal space the we can use /t)
    printf("I am dnyaneshwari doing ccat\b\b\b\bprecat\n"); // if we want replace word from end then we can use \b
    printf("\"I am good\"\n");//if we want " " in output then we will use \"
    printf("\'I am good\'\n");//if we want ' ' in output then we will use \"
    printf("I have score 85%% \n"); // in sentence we want % then we will use %%
    printf("\\n is a new line escape sequence\n");
    return 0;
}