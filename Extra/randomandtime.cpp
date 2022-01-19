#include <stdio.h>
#include <time.h>

int main()
{
    int i, num;
    clock_t st, et;
    double ts;
    st = clock();
    for(i=1;i<30; i++){
        num =rand()%100;
        printf("%d, ", num);
    }
    et = clock();
    ts = (double)(et-st)/CLOCKS_PER_SEC;
    printf("Execution time for print: %e", ts);
    return 0;
}
