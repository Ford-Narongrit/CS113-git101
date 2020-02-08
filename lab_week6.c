#include <stdlib.h>

void main()
{
    struct linklist{
        char name[12];
        int id[12];
    }; //การประกาศ ตัวแปร structure

    //หรือ
    typedef struct linklist2{
        char name[12];
        int id[12];
    } linklist2; // เวลาเรียกใช้ะเรียนใช้เป็นประเภทข้อมูล

    //การ selif-Referentaial structures
    struct node {
        int data;
        struct node *next;
    };// เป็นการใช้อ้างอิงไปยังโนตถัดไป

    // //ตัวอย่างการใช้ struct เพื่อ สร้าง linked list  BY อ.ชาคริต
    // #include <stdio.h>
    // #include <stdlib.h>
    // struct node {
    // int data;
    // struct node *next;
    // };
    // int main()
    // { struct node *head = NULL;
    // struct node *first = NULL;
    // struct node *second = NULL;
    // struct node *third = NULL;
    // // Allocate 3 nodes in the heap
    // first = (struct node *)malloc(sizeof(struct node));
    // second = (struct node *)malloc(sizeof(struct node));
    // third = (struct node *)malloc(sizeof(struct node));
    // head = first;
    // first->data = 17;
    // first->next = second;
    // second->data = 29;
    // second->next = third;
    // third->data = 93;
    // third->next = NULL;
    // }

    //การนำไปใช้ะเป็นการต่อตัวต้นไม้สร้างเพื่อเก็บข้อมูลจำนวนมากแล้วเก็บเป็นระเบียบ
}