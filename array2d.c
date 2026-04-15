// #include<stdio.h> // for same order 
// int main () {

//     int rows, cols;
//     printf ("enter the no. of rows");
//     scanf("%d", &rows);
//     printf("enter the no.of columns");
//     scanf("%d",&cols);
//     int matrix1[rows][cols], matrix2[rows][cols];
//     int sum[rows][cols],product[rows][cols];
//     printf("enter the elements for matrix 1 ");
//     for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         printf("element [%d] [%d]", i,j); 
//         scanf("%d",&matrix1[i][j]);
//     }
//     }
//     printf("enter the elements for matrix 2 ");
//     for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         printf("element [%d] [%d]", i,j); 
//         scanf("%d",&matrix2[i][j]);
//     }
//     }
//         for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         sum[i][j]= matrix1[i][j]+matrix2[i][j];
//     }
//         }

//         printf("sum of matrices are");
//         for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         printf("%d" , sum [i][j]);}
//         printf("\n");
//         }


//         for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         product[i][j]=0; 
//     } }
//     for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){
//         for (int k=0;k<cols;k++){
//         product[i][j]=product[i][j] + (matrix1[i][k]*matrix2[k][j]) ;}
//     } } 
//         printf("product of 2 matrices are \n");
//         for (int i=0;i<rows;i++){
//     for (int j=0;j<cols;j++){

//         printf("%d",product[i][j]);
//         }
//         printf("\n");
//     }
        
// return 0;
// } 





    


// #include<stdio.h> // for m*n and p*q ;n=p
// int main () 
// {
//     int m,n,p,q ;
//     printf ("enter the no. of rows and coulms for matrix 1");
//     scanf("%d %d",&m &n);
//     int matrix1[m][n];
//     printf("enter the elements for matrix 1 ");
//     for (int i=0;i<m;i++){
//     for (int j=0;j<n;j++){
//         printf("element [%d] [%d]", i,j); 
//         scanf("%d",&matrix1[i][j]); }
//     } 
//     printf ("enter the no. of rows and cols for matrix 2");
//     scanf("%d %d",&p &q);
//     int matrix2[p][q];
//     printf("enter the elements for matrix 2 ");
//     for (int i=0;i<p;i++){
//     for (int j=0;j<q;j++){
//         printf("elment[%d][%d]", i,j);
//         scanf ("%d",&matrix2[i][j]); }
//     }
//     int product[p][q];

//     for (int i=0;i<m;i++){
//     for (int j=0;j<q;j++){
//         product[i][j]=0; 
//     } }
//     for (int i=0;i<m;i++){
//     for (int j=0;j<q;j++){
//         for (int k=0;k<n;k++){
//         product[i][j]=product[i][j] + (matrix1[i][k]*matrix2[k][j]) ;}
//     } } 
//         printf("product of 2 matrices are \n");
//         for (int i=0;i<m;i++){
//     for (int j=0;j<q;j++){

//         printf("%d",product[i][j]);
//         }
//         printf("\n");
//     }
        
// return 0;
// }    

// #include <stdio.h>    // transpose 
// int main ()
// { 
//     int m,n ;
//     printf ("enter the no. of rows");
//     scanf("%d", &m);
//     printf("enter the no.of columns");
//     scanf("%d",&n);
//     int matrix[m][n];
//     printf("enter the elements for matrix 1 ");
//     for (int i=0;i<m;i++){
//     for (int j=0;j<n;j++){
//         printf("element [%d][%d]", i,j); 
//         scanf("%d",&matrix[i][j]); }
//     } 
//     printf(" transpose is ");
//     for (int i=0;i<n;i++){
//     for (int j=0;j<m;j++){              // ***imp
//         printf("%d",matrix[j][i]);      //*** step
//     }
//     printf("\n");
//     }
//     return 0;
// } 


// #include <stdio.h>    
// int main ()
// { 
//     int n ;
//     printf ("enter the size of square matrix");
//     scanf("%d", &n);
//     int matrix[n][n];
//     int sumD = 0, sumnonD = 0,squareD=0;
//     printf("enter the elements for matrix  ");
//     for (int i=0;i<n;i++){
//     for (int j=0;j<n;j++){
//         printf("element [%d][%d]", i,j); 
//         scanf("%d",&matrix[i][j]); 

// if (i==j)
// { 
// sumD = sumD + matrix[i][j];
//  squareD =squareD+(matrix[i][j] * matrix[i][j]);}
// else 
// {sumnonD = sumnonD + matrix[i][j];}
//     }  } 

// printf("sum of diagonal element is %d \n",sumD );
// printf(" sum of non diagonal element is %d \n",sumnonD ); 
// printf("square of diagonal elements %d \n",squareD);
// return 0;
// } 


#include <stdio.h>    
int main ()
{ 
    int n ;
    printf ("enter the size of square matrix");
    scanf("%d", &n);
    int matrix[n][n];
     int sumnonD = 0;
    printf("enter the elements for matrix 1 ");
    for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
        printf("element [%d][%d]", i,j); 
        scanf("%d",&matrix[i][j]); 

if (i!=j)
{ sumnonD = sumnonD + matrix[i][j] ;
}
    }
    }
printf("sum of diagonal and non diagonal elements are %d",sumnonD);
return 0;
    }

















