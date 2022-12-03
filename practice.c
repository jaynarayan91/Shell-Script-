// #include <stdio.h>
// int main() {

//   int i, n;

//   // initialize first and second terms
//   int t1 = 0, t2 = 1;

//   // initialize the next term (3rd term)
//   int nextTerm = t1 + t2;

//   // get no. of terms from user
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);

//   // print the first two terms t1 and t2
//   printf("Fibonacci Series: %d, %d, ", t1, t2);

//   // print 3rd to nth terms
//   for (i = 3; i <= n; ++i) {
//     printf("%d, ", nextTerm);
//     t1 = t2;
//     t2 = nextTerm;
//     nextTerm = t1 + t2;
//   }

//   return 0;
// }

// #include<stdio.h>
// int main(){
// int n,i,m=0,flag=0;
// printf("Enter the number to check prime:");
// scanf("%d",&n);
// m=n/2;
// for(i=2;i<=m;i++)
// {
// if(n%i==0)
// {
// printf("Number is not prime");
// flag=1;
// break;
// }
// }
// if(flag==0)
// printf("Number is prime");
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// int n,r,sum=0,temp;
// printf("enter the number=");
// scanf("%d",&n);
// temp=n;
// while(n>0)
// {
// r=n%10;
// sum=(sum*10)+r;
// n=n/10;
// }
// if(temp==sum)
// printf("palindrome number ");
// else
// printf("not palindrome");
// return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n = 1, i, flag = 0, count = 1;
//     printf("Enter the number");
//     scanf("%d",&n);
//     while (n>0)
//     {
//         for (i = 2; i < n; i++){
//             if (n % i == 0){
//                 flag = 1;
//                 break;
//             }
//         }
//             if (flag == 0){
//                 printf("%d ", n);
//                 //count++;
//             }
//         n--;
//         flag=0;
//     }
//     return 0;
// }


