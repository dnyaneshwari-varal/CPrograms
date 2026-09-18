// Anonamous enum
// enum which has no name

#include<stdio.h>
int main(){
    enum{one,two,three,four,five}d1,d2,d3; //d1,d2,d3 are variable
    typedf enum{sales,HR,finance,marketing}dept,dts;//dept,dts is alias/nick name
    dts d2; //d2 is variable
    dept d1; //d1 is a variable

    return 0;

}