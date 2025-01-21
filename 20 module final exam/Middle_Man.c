#include <stdio.h>
int main()
{
    int n,a[1000];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int mid = i;
        for (int j = i+1; j < n; j++) {
            if (a[mid] > a[j]) {
                mid = j;
            }
        }
        int temp = a[mid];
        a[mid] = a[i];
        a[i] = temp;
    }
    if(n%2==0){
        int m=n/2;
        printf("%d %d\n",a[m-1],a[m]);
    }
    else {
        int m=n/2;
        printf("%d\n",a[m]);
    }
    return 0;
}

