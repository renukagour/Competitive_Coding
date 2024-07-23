#include<stdio.h>
int main(){
    int a=4;
    int *p=&a;
    printf("%p\n",&a);
    printf("%p\n",p);
    printf("%d\n",*p);
    *p=7;
    printf("%d\n",*p);
    *p=*p+4;
     printf("%d\n",*p);
     *p=*(p+4);
      printf("%d\n",*p);
      int b=257;
     char *ptr=&b;
       printf("%p\n",ptr);
        printf("%d\n",*ptr);
         printf("%d\n",*(ptr+1));
          printf("%d\n",*(ptr+2));
}