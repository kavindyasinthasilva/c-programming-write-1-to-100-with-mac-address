#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    clock_t begin = clock();

    FILE *ftxtfile;
    ftxtfile = fopen("E:\c programe\sky","sky");


    for (int i = 0; i <=100 ; ++i) {
        fprintf(ftxtfile,"%d\n",i);
        printf("%d\n",i);
    }

    clock_t end = clock();

    float time = (float)(end-begin)/CLOCKS_PER_SEC;
    fprintf(ftxtfile,"Running Time : %f\n",time);
    system("getmac");
}
