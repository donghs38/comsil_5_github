#include"Star.h"

void findNum(int num, int* arr){
    int nums[10]={0,};
    int n=num;
    int digit;
    int i, j, k;

    for(i=0; i<10; i++)
        arr[i]=0;

    for(i=0; ;i++){
        if( n> 0){
            nums[i]=n%10;
            n/=10;
        }
        else
            break;
    }
    digit=i;
    for(i=0; i<(int)digit/2; i++){
        k=nums[i];
        nums[i]=nums[digit-1-i];
        nums[digit-1-i]=k;
    }
    
    for(i=0; i<digit-1; i++){
        for(j=0; j<10; j++)
            arr[j]+=nums[i]*(int)pow(10, digit-i-2)*(digit-i-1);
        for(j=0; j<nums[i]; j++)
            arr[j]+=pow(10, digit-i-1);
        for(j=0; j<i; j++)
            arr[nums[j]]+=nums[i]*(int)pow(10, digit-i-1);
    }
    for(i=0; i<=nums[digit-1]; i++)
        arr[i]++;
    for(i=0; i<digit-1; i++)
        arr[nums[i]]+=nums[digit-1]+1;
    for(i=0; i<digit; i++)
        arr[0]-=pow(10, digit-1-i);

    return;
}






    



    

        
