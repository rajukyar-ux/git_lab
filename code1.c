#include<stdio.h>
struct student{
    int id;
    float marks;
};
int main(){
    struct student s={101, 92.3};
    printf("ID=%d\n",s.id);
    printf("marks=%1f\n",s.marks);
}