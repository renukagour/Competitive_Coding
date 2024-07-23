#include<stdio.h>
int main(){
    int a[3]={2,3,4};
    int *p=&a[0];//int *a=&a[0]; hidden line
    printf("%p\n",&a);
    printf("%p\n",p);
   *(p+0)=6;
    printf("%d\n",*(p+0));
     printf("%d\n",a[0]);
      printf("%d\n",*(a+0));
     *(p+1)=7;
    printf("%d\n",*(p+1));
      printf("%d\n",*(a+1));
    printf("%d\n",a[1]);
    p[2]=3;
     printf("%d\n",*(p+2));
      printf("%d\n",*(a+2));
      printf("%d\n",a[2]);
    //  p[3]=4;
    //   printf("%d\n",*(p+3));
    //    printf("%d\n",*(a+3));
    //    printf("%d\n",a[3]);


}