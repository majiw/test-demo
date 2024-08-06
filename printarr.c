#include <stdio.h>


long long int sum = 0;


int main(void) {

    int arr[5] = {1,2,3,4,5};

    for(int i = 0, j = sizeof(arr)/ sizeof(int); i < j; ++i) {
        sum += arr[i];
    }

    printf("sum = %lld\n", sum);

}