// WAP to print Pascal triangle. 
#include<stdio.h>
int main(){
    
    int row;

    printf("Enter number of rows : ");
    scanf("%d",&row);
    
    int array[row][row];
    
    int i,j,k=0;

    for(i=0 ; i<row ; i++){
        for(k=row ; k>i+1 ; k--){
            printf(" ");
        }
        for(j=0 ; j<=i ; j++){
            if(j==0 || j==i){
                array[i][j]=1;
            }
            else{
                array[i][j]=array[i-1][j-1]+array[i-1][j];
            }
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

    return 0;
}