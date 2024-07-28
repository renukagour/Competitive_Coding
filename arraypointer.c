#include<stdio.h>
int main(){
    int a=4;
    int *p=&a;
    printf("%p\n",&a);
    printf("%p\n",p);
   *(p+0)=6;
    printf("%d\n",a);
    printf("%d\n",*(p+0));
     *(p+1)=7;
    printf("%d\n",*(p+1));
    p[2]=3;
     printf("%d\n",*(p+2));
    printf(15&3);

}