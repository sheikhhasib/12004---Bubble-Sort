#include <stdio.h>
int main(){
    int t,cnt,n;
    scanf("%d",&cnt);
    for(t=1;t<=cnt;t++){
        scanf("%d",&n);
        long ans = ((long) n*(n-1))/2;
        printf("Case %d: ",t);
        if(ans % 2 == 0)
            printf("%ld\n",ans/2);
        else
            printf("%ld/2\n",ans);
    }
    return  0;
}

