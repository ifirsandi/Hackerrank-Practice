#include <stdio.h>



int main()
{
    int t;
    scanf("%d", &t);
    for (int T=0; T<t; T++){
        int n, k;
        int count =0;
        scanf("%d %d", &n, &k);
        for (int i=0; i<n; i++){
            int a;            
            scanf("%d", &a);
            if (a<=0){
                count++;
            }
        }
        if (count<k){
            printf("YES\n");
        } else {
            printf("NO\n");
        }


    }

    return 0;
}
