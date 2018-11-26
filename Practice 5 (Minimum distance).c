/*
  We define the distance between two array values as the number of indices between the two values. Given , find the minimum distance between any pair of equal elements in the array. If no such value exists, print -1.
For example, if a = [3,2,1,2,3], there are two matching pairs of values: 3 and 2. The indices of the 3's are i=0 and j=4, so their distance |0-4| is 4. The indices of the 2's are i=1 and j=3, so their distance |1-3| is 2.
cause 2<4, print 4.
*/
#include <stdio.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n];
    for (int i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    int min = 1001;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            int selisih;
            if (ar[i]==ar[j]){
                selisih=i-j;
                if (selisih<0){
                    selisih=selisih*(-1);
                }
                if (selisih <min){
                    min= selisih;
                }
            }
        }
    }
    if (min == 1001){
        min = -1;
    }
    printf ("%d", min);

    return 0;
}
