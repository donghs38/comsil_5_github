#include"Star.h"

int main(void){
    int n, i;
    int* num;
    int arr[10];

    scanf("%d", &n);
    num=(int*)malloc(sizeof(int)*n);
    for(i=0; i<n; i++)
        scanf("%d", &num[i]);

    for(i=0; i<n; i++){
        findNum(num[i], arr);
        print(arr);
    }

    return 0;
}

