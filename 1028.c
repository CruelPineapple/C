<<<<<<< HEAD
#include<stdio.h>
int main()
{
    #define N 10
    int a[]={0,1,2,3,4,5,6,7,8,9,};
    int low=0,high=N-1,mid;
    int key;
    //数组中寻找一个值（搜索） 二分查找一个数在第几个
    scanf("%d",&key);

    while (low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            {
                printf("%d\n",mid);
                break;
            }
        else if (a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    if (low>high)
    {
        printf("not found");
    }
    
    return 0;
=======
#include<stdio.h>
int main()
{
    #define N 10
    int a[]={0,1,2,3,4,5,6,7,8,9,};
    int low=0,high=N-1,mid;
    int key;
    //数组中寻找一个值（搜索） 二分查找一个数在第几个
    scanf("%d",&key);

    while (low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
            {
                printf("%d\n",mid);
                break;
            }
        else if (a[mid]<key) low=mid+1;
        else high=mid-1;
    }
    if (low>high)
    {
        printf("not found");
    }
    
    return 0;
>>>>>>> be9b868b94dda100b8f009499d4b3e27b5f14da9
}