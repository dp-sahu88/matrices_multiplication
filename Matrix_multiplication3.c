//Author:DEADPOOL
//User@DEADPOOL
//Device name:LAPTOP-MGJPSU5N
//***************************
//including header files
#include<stdio.h>


// function declaration part
void multiply(int n,int x[n][n]);



// main function
int main(){

    int n;// variable declaration to store the dimension of the matrix

    repeat://repeat if something went wrong .......
    printf("\n Enter the no of rows/columns in the matrix....: ");
    scanf("%d",&n);
    if(n==1||n==0){
        printf("\n\aYOU CAN'T ENTER 1 OR 0 ...... TRY AGAIN WITH SOME DIFFERENT VALUE ....  like 2,3,4 etc.\n");
        goto repeat;
    }
    int x[n][n];// if this line shows any error... please use 2D-array of pointers for x
    printf("\n\aInput for 1st matrix\n\n");
    fflush(stdin);//clean the input buffer
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
            printf("    ");
            }
            printf("\n");
        }

    multiply(n,x);
    return 0;
}    // and that's all for main function ....




// multiply function definition .....
void multiply(int n,int x[n][n]){
    int y[n][n],z[n][n];   // variables for multiplication of matrix, in each function call it's different.......
    static char ch;   // this char type variable is for condition check...
                           // ch will also remain same for all function call ......

     //input for next matrix / 2nd
    fflush(stdin);//clean the input buffer
    printf("\n\aInput for next matrix\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&y[i][j]);
            printf("   ");
        }
        printf("\n");
    }



    //multiply
    for (int i=0;i<n;i++){//for row of 1st matrix
        for (int j=0;j<n;j++){//for columns of 2nd matrix
              z[i][j]=0;
            for (int k=0;k<n;k++){//getting each element of resultant matrix...after this for loop
              z[i][j]+=x[i][k]*y[k][j];
            }

        }

      }//end of multiply loop section


      // assigning x with z so that new matrix can be multiplied
      // and z matrix can be re-use as the temp matrix

      for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            x[i][j]=z[i][j];


     // condition

     printf("\n\aEnter 'y' to multiply another matrix:");
    //changing the conditional variable (ch)

     fflush(stdin);//clean input buffer
     scanf("%c",&ch);
     // condition
      if (ch!='y'){// base condition
          for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
              printf("%d   ",x[i][j]);// print the value ......
            }
            printf("\n");
          }
        //if base condition occurs then print and go back ........
         return ;
      }
      else
        multiply(n,x);// recursion



}
