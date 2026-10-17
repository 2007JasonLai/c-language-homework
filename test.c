#include<stdio.h>

int main()
{
    int n, a[100005];
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int k=0,x=0,y=0,z=0;
    for(int i=0; i<n ;i++){
        
        if(a[i]>=90 && a[i]<=100){
            k++;
        }
        else if(a[i]>=80 && a[i]<=89){
            x++;
        }
        else if(a[i]>=60 && a[i]<=79){
            y++;
        }
        else{
            z++;
        }
    }
    printf("%d\n%d\n%d\n%d\n",k,x,y,z);


    return 0;
}