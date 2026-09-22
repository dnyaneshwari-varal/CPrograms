#include<stdio.h>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("%4d\n",i);
            goto END;

        }
    }
    END :
        printf("Exited from loop.");
}


//start la kel tr te infinite loop mdhe jail
// #include<stdio.h>
// int main(){

//     START :
//         printf("start from 1st iteration\n");
//     for(int i=1;i<=3;i++){
//          printf("%4d\n",i);
//          if(i==3)
//            goto START;

//     }
    
// }