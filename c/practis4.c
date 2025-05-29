#include<stdio.h>
int main(){
    int n, belowCount=0,aboveCount=0;
    float sum=0,average;

    printf("enter number of the element: ");
    scanf("%d",&n);
    int arr[n], avobeArr[n], belowArr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    average=sum/n;
    printf("Average: %f\n",average);

    for(int i=0;i<n;i++){
        if(arr[i]>average){
            avobeArr[aboveCount++]=arr[i];
        }
        else if(arr[i]<average){
            belowArr[belowCount++]=arr[i];
        }
    }

    printf("\n");

    printf("Number's above average: ");
    for(int i=0;i<aboveCount;i++){
        printf("%d ",avobeArr[i]);
    }

    printf("\n");

    printf("Number's below average: ");
    for(int i=0;i<belowCount;i++){
        printf("%d ",belowArr[i]);
    }
    return 0;
}

   