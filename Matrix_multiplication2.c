//Author:DEADPOOL
//User@DEADPOOL
//Device name:LAPTOP-MGJPSU5N
//***************************
//including header files
#include<stdio.h>


// matrix multiplication function definition
void mm(int n){


    //variable declaration
    int x[n][n],y[n][n],z[n][n];
    char ch='y';


    //input
    //input for 1st matrix
    printf("\ninput for 1st matrix\n\n");
    fflush(stdin);//clean the input buffer
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&x[i][j]);
            printf("    ");
        }
        printf("\n");
    }

   while(1){
      // true... till the break statement not executed
    //input for next matrix / 2nd
    fflush(stdin);//clean the input buffer
    printf("\ninput for next matrix\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&y[i][j]);
            printf("   ");
        }
        printf("\n");
    }



    //multiply
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
              z[i][j]=0;
            for (int k=0;k<n;k++){
              z[i][j]+=x[i][k]*y[k][j];
            }

        }

      }//end of multiply loop section
      // assigning x with z so that new matrix can be multiplied
      // and z matrix can be re-use as the temp matrix

      for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            x[i][j]=z[i][j];

      printf("\nEnter 'y' to multiply another matrix:");
      //changing the conditional variable (ch)

     fflush(stdin);//clean input buffer
     scanf("%c",&ch);
     // condition
      if (ch!='y'){
         break;
       }

    }// end of while loop

    //output
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d   ",x[i][j]);
            }
            printf("\n");
    }


}

//main function
int main (){
    int n;
    printf("enter the number of row/column in the square matrix ");
    scanf("%d",&n);
    mm(n);
    return 0;
}
