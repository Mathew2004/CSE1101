#include<stdio.h>

int main(){
    int n,m,i,j;
    printf("Enter N*M => ");    
    scanf("%d %d",&n,&m);
    int A[n][m],B[m][n];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&A[i][j]);
            B[j][i] = A[i][j];
        }
    }
    printf("\n\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

}