#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定义一个简单的结构体
struct Person {
    char name[50];
    int age;
};

int main() {
    // 创建一个结构体变量
    struct Person* personptr = (struct Person*)malloc(sizeof(struct Person));
    strcpy(personptr->name, "mikusang~");
    personptr->age = 100;

    // 访问结构体成员
    printf("Name: %s, Age: %d\n", personptr->name, personptr->age);
    printf("daxiao:%d", sizeof(personptr));

    {
        /* data */
    };
    

    return 0;
}