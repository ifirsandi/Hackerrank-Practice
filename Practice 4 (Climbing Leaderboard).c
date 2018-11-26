/*
  Alice is playing an arcade game and wants to climb to the top of the leaderboard and wants to track her ranking. The game uses Dense Ranking, so its leaderboard works like this:
    > The player with the highest score is ranked number 1 on the leaderboard.
    > Players who have equal scores receive the same ranking number, and the next player(s) receive the immediately following ranking number.
  
  https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem?isFullScreen=false
*/

#include <stdio.h>

int rank(int a, int b, int ar[], int k){
    if (a>=ar[b]){
        return 1;
    } else if (b==k){
        return 1;
    } else {
        return 1+rank (a, b+1, ar, k);
    }
}

int main()
{
    int scores_count; 
    int scores[200001]; 
    int alice_count;
    int temp;
    int k=1;
    scanf("%d", &scores_count);
    scanf("%d", &temp);
    scores[0]=temp;
    for (int i=1; i<scores_count;i++ ){
        scanf("%d", &temp);
        if (temp == scores[k-1]){
            //printf( "%d", temp);
            continue;
        } else {
            scores[k]=temp;
            k++;
        }
    }
    /*for (int i=0; i<k; i++){
        printf("%d ", scores[i]);
    }*/
    scanf("%d", &alice_count);
    for (int i=0; i<alice_count; i++){
        scanf("%d", &temp);
        //printf ("%d ", temp);
        printf("%d\n", rank(temp,0, scores, k));
    }
    
    return 0;
}
