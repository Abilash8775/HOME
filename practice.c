// #include<stdio.h>
//  int main(){
//     printf("Hello i am learning C \n");
//     printf("Hello i am learning C");
//  }

// #include<stdio.h>
//  int main(){
//     int a,b;
//     printf("enter the values of a and b \n");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     int c=a+b;
//     printf("the sum is  %d",c);
//     return 0;

//  }

// #include<stdio.h>

// int main(){
//     int a,b;
//     printf("enter a: \n");
//     scanf("%d",&a);
//     printf("enter b: \n");
//     scanf("%d",&b);
//     printf("the area is %d",a*b);
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     // 3*x/y-z+k
//     int x=2,y=3,z=3,k=1;
//     int result =3*x/y-z+k;
//     printf("the result is %d",result);
//     return 0;

// }

// #include<stdio.h>

// int main(){
//     int a=50;
//     if(a>4){
//         printf("a is greater than 4");
//     }else if(a==4){
//         printf("4 is equal to a");
//     }else{
//         printf("4 is greater than a");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//    if(23){
//     printf("YESS");
//    }else{
//     printf("no");
//    }
//

// #include<stdio.h>
// int main(){
//     int a=34;
//     int b=56;
//     if(a>50 && b>50){
//         printf("yes");
//     }else{
//         printf("no");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=34;
//     int b=56;
//     if(a>50 || b>50){
//         printf("yes");
//     }else{
//         printf("no");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int a=20;
//     int b=30;
//     a==b?printf("yes") : printf("no");
//     return 0;

// }

// #include<stdio.h>

// int main(){
//     int age;
//     scanf("%d",&age);
//     switch (age)
//     {
//     case 24:
//         printf("you are 24");
//         break;
//     case 25:
//         printf("you are 25");
//         break;
//     case 26:
//         printf("you are 26");
//         break;

//     default:
//     printf("yessss");
//         break;
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int m, p, c, b;
//     printf("enter the marks of m ,p ,c ,b \n");
//     scanf("%d", &m);
//     scanf("%d", &p);
//     scanf("%d", &c);
//     scanf("%d", &b);
//     int tot = (m + p + c + b) / 4;

//     if (tot >= 40)
//     {
//         if (m <= 33)
//         {
//             printf("fail in m \n");
//         }
//         else
//         {
//             printf("pass in m \n");
//         }
//         if (p <= 33)
//         {
//             printf("fail in p \n");
//         }
//         else
//         {
//             printf("pass in p \n");
//         }
//         if (c <= 33)
//         {
//             printf("fail in c \n");
//         }
//         else
//         {
//             printf("pass in c \n");
//         }
//         if (b <= 33)
//         {
//             printf("fail in b \n");
//         }
//         else
//         {
//             printf("pass in b \n");
//         }
//     }
//     else
//     {
//         printf("fail");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int y;
//     scanf("%d",&y);
//     if(y%4==0 && y%100!=0 || y%400==0){
//             printf("leap year");
//         }else{
//             printf("not a leap year");
//         }
        

// }

// #include<stdio.h>
// int main(){
//    int y;
//    scanf("%d",&y);
//    int i=1;
//    printf("The table of %d \n",y);
//    while(i<=10){
//       printf("%d X %d = %d \n",y,i,y*i);
//       i++;
//    }
// }

// #include<stdio.h>
// int main(){
//    int a;
//    scanf("%d",&a);
//    int i=1;
//    int result=1;
//    while(i<=a){
//       result=result*i;
//       i++;
//    }
//    printf("THE factorial of %d is %d",a,result);
// }

// #include<stdio.h>
// void display(); //Function prototype

// int main(){
//    display();  //Function Call
//    return 0;
// }
// void display(){
//    printf("Hello world \n");  //Function definition
// }

// #include<stdio.h>

// void gm();
// void ge();
// void gn();

// int main(){
//    gm();
//    ge();
//    gn();
//    return 0;
// }

// void gm(){
//    printf("good morning \n");
// }
// void ge(){
//    printf("good evening \n");
// }
// void gn(){
//    printf("good night \n");
// }

// #include<stdio.h>

// int sum(int,int);

// int main(){
//    printf("%d \n",sum(100,200));
//    printf("%d \n",sum(1,2));
//    printf("%d \n",sum(40,50));
//    printf("%d \n",sum(10,20));
//    return 0;
// }

// int sum(int a,int b){
//    return a+b;
// }

// #include<stdio.h>
// #include<math.h>
// int asr(int);
// int main(){
//    printf("%d \n",asr(3));
//    return 0;
// }
// int asr(int a){
//    int result=pow(a,2);
//    return result;
// }

// #include<stdio.h>

// int main(){
//    int  i = 72;
//    printf("The address of i is %u",*(&i));

//    return 0;
// 
// #include<stdio.h>

// int main(){
//    int i=72;
//    int *j=&i;
//    printf("%d",j);
// }
// #include<stdio.h>
// int main(){
//    // store marks of 8 students
//    int a[8]={1,2,3,4,5,6,7,8};
//    for(int i=1;i<=8;i++){
//       printf("%d \n",i);
//    }
//    return 0;
// }

// #include<stdio.h>

// int main(){
//    FILE *ptr;
//    ptr=fopen("one.txt","r");
//    int ch;
//    fscanf(ptr,"%d",&ch);
//    printf("the value ch is %d",ch);
//    fclose(ptr);
//    return 0;

// }

// #include<stdio.h>
// int main(){
//    FILE*ptr;
//    ptr=fopen("writefile.txt","w");
//    int ch=69;
//    fprintf(ptr,"%d",ch);
//    fclose(ptr);
// }
