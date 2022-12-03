// #include<stdio.h>
// int main()
// {
//      int a[10][10],r,c,sum=0,i,j;
//      printf("Enter Limit : ");
//      scanf("%d",&r);

//      printf("Enter Limit : ");
//      scanf("%d",&c);

//      printf("\nEnter Elements for Matrix of Size %d*%d:\n\n",r,c);
//      for(i=0;i<r;i++)
//           for(j=0;j<c;j++)
//           {
//                scanf("%d",&a[i][j]);
//           }
//      printf("\n%d*%d Matrix : \n\n",r,c);
//      for(i=0;i<r;i++)
//      {
//           for(j=0;j<c;j++)
//           {
//                printf("%2d ",a[i][j]);
//           }
//           printf("\n");
//      }
//      for(i=0;i<r;i++)
//           for(j=0;j<c;j++)
//                sum=sum+a[i][j];
//      printf("\nSum of All Elements in Matrix = %d",sum);
//      return 0;
// }









#include<stdio.h>

int main()
{
    int mat[3][3], i, j, sum;
    sum = 0;
    printf("Enter all 9 elements of 3*3 Matrix:-\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &mat[i][j]);
            sum = sum + mat[i][j];
        }
    }
    printf("\nSum of all elements = %d", sum);
   
    return 0;
}