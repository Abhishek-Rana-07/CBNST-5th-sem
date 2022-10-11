// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int n;
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);
//     float a[n][n+1],backs[n];
//     printf("Enter the matrix:\n");
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=n;j++)
//         {
//             scanf("%f",&a[i][j]);
//         }
//     } 
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         { 
//             if(i!=j)
//             { 
//                 float r=a[j][i]/a[i][i];
//                 for(int k=0;k<n+1;k++)
//                 {
//                     a[j][k]=a[j][k]-(r*a[i][k]);
//                 }
//             }
//         }
//     } 

    
//     for(int i=0;i<n;i++)
//     {
//         backs[i]=a[i][n]/a[i][i];

//     }

//     printf("Upper Triangular Matrix\n");
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n+1;j++)
//         {
//             printf("%6.0f ",fabs(a[i][j]));
//         } 
//         printf("\n");
//     }

//     printf("The Values of variables are:\n");
//     for(int i=0;i<n;i++)
//         printf("x%d: %6.0f\n",i+1,backs[i]);

//     return 0;
// }

//---------------------------------------------------
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the  number of rows:\n");
    scanf("%d",&n);
    float a[n][n+1], backs[n];
    printf("Enter the matrix:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=n; j++){
            scanf("%f",&a[i][j]);
        }
    }

    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n ;j++){
            if(i!=j)
            {
                float r= a[j][i]/a[i][i];
                for(int k=0; k<=n; k++)
                {
                    a[j][k]= a[j][k]- (r*a[i][k]);
                }
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        backs[i]= a[i][n]/a[i][i];
    }

    printf("Printing intermediate triangle:\n");
    for(int i=0 ;i<n;i++)
    {
        for(int j=0; j<=n; j++)
        {
            printf("%6.0f ",fabs(a[i][j]));
        }
        printf("\n");
    }

    for(int i=0; i<n ;i++)
    {
        printf("x%d : %6.0f\n",i+1,backs[i]);
    }
}