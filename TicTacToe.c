#include<stdio.h>
#include<stdlib.h>

int alpha=0;
void check(char *arr){

    if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[0]==arr[2]){
        printf("Player %c is winner",arr[0]);
        exit(0);
    }else if(arr[0]==arr[3]&&arr[3]==arr[6]&&arr[0]==arr[6]){
        printf("Player %c is winner",arr[0]);
        exit(0);
    }else if(arr[0]==arr[4]&&arr[4]==arr[8]&&arr[0]==arr[8]){
        printf("Player %c is winner",arr[0]);
        exit(0);
    }else if(arr[1]==arr[4]&&arr[4]==arr[7]&&arr[1]==arr[7]){
        printf("Player %c is winner",arr[1]);
        exit(0);
    }else if(arr[2]==arr[5]&&arr[5]==arr[8]&&arr[2]==arr[8]){
        printf("Player %c is winner",arr[2]);
        exit(0);
    }else if(arr[2]==arr[4]&&arr[4]==arr[6]&&arr[2]==arr[6]){
        printf("Player %c is winner",arr[2]);
        exit(0);
    }else if(arr[3]==arr[4]&&arr[4]==arr[5]&&arr[3]==arr[5]){
        printf("Player %c is winner",arr[3]);
        exit(0);
    }else if(arr[6]==arr[7]&&arr[7]==arr[8]&&arr[6]==arr[8]){
        printf("Player %c is winner",arr[6]);
        exit(0);
    }else if(arr[2]==arr[5]&&arr[5]==arr[8]&&arr[2]==arr[8]){
        printf("Player %c is winner",arr[2]);
        exit(0);
    }else if(alpha==8){
        printf("\tthe match is TIE\n");
        exit(0);
    }
        
    
}
void board(char *arr);
void work(char *arr){
    char ch,gh;
    printf("\tRULES\n");
    printf("enter only mentions position 1-9\n");

    for(int i=0;i<9;i++){
    board(arr);
    check(arr);
        int ok=0;
       if(i%2==0){
       printf("\tplay player X\n");
       fflush(stdin);
       scanf("%c",&ch);
       int n=0;
       for(int i=0;i<9;i++){
        if(ch==arr[i]){
            ok=1;
            break; 
        }
            n++;
       }
       if(ok==1){
       arr[n]='X';
       }else{
        printf("\tINVALID INPUT\n");
        exit(0);
       }
       } else{
          printf("\tplay player O\n");
          fflush(stdin);
       scanf("%c",&gh);
         int p=0;
       for(int i=0;i<9;i++){
        if(gh==arr[i]){
            ok=1;
            break;
        
        }
            p++;
       }
       if(ok==1){
       arr[p]='O';
       }else{
        printf("\tINVALID INPUT\n");
        exit(0);
       }
       }
       alpha++;
    }


}
void board(char *arr){
    system("cls");
    printf("\t      |      |      \n");
    printf("\t  %c   |  %c   |  %c   \n",arr[0],arr[1],arr[2]);
    printf("\t______|______|______\n");
    printf("\t      |      |      \n");
    printf("\t  %c   |  %c   |  %c   \n",arr[3],arr[4],arr[5]);
    printf("\t______|______|______\n");
    printf("\t      |      |      \n");
    printf("\t  %c   |  %c   |  %c   \n",arr[6],arr[7],arr[8]);
    
}
int main(){
    char arr[10]={'1','2','3','4','5','6','7','8','9'};
    work(arr);
    
    return 0;
}