#include <stdio.h>
#include <limits.h>

int main()
{
    printf("Data Type\t\tSize\tFormat\tRange\n");

    printf("char\t\t\t%zu\t%%c\t%d to %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);

    printf("unsigned char\t\t%zu\t%%hhu\t0 to %u\n",
           sizeof(unsigned char), UCHAR_MAX);

    printf("short int\t\t%zu\t%%hd\t%d to %d\n",
           sizeof(short int), SHRT_MIN, SHRT_MAX);

    printf("unsigned short int\t%zu\t%%hu\t0 to %u\n",
           sizeof(unsigned short int), USHRT_MAX);

    printf("int\t\t\t%zu\t%%d\t%d to %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("unsigned int\t\t%zu\t%%u\t0 to %u\n",
           sizeof(unsigned int), UINT_MAX);

    printf("long int\t\t%zu\t%%ld\t%ld to %ld\n",
           sizeof(long int), LONG_MIN, LONG_MAX);

    printf("unsigned long int\t%zu\t%%lu\t0 to %lu\n",
           sizeof(unsigned long int), ULONG_MAX);

    return 0;
}