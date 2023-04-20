#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode* next;
}LNode,*LinkList;

int reverseList(LinkList head)
{
	LinkList newhead = (LNode*)malloc(sizeof(LNode));
	newhead->next = NULL;

	LinkList prev = NULL;
	LinkList current = head->next;
	LinkList next = NULL;

	while (current != NULL)
	{
		next = current->next;        // 保存下一个结点的指针
		current->next = prev;        // 当前结点指向前一个结点
		prev = current;              // 移动前一个结点指针
		current = next;              // 移动当前结点指针
	}
	newhead->next = prev;
	return newhead;
}


void printList(LinkList head)
{
	LinkList current=head->next;
	while (current != NULL)
	{
		printf("%d", current->data);
		current = current->next;
	}
	printf("\n");
}


void freeList(LinkList head)
{
	LinkList p = head;
	LinkList temp = NULL;
	
	while (p != NULL)
	{
		temp = p;
		p = p->next;
		free(temp);
	}
}


int main()
{
	LinkList head = (LNode*)malloc(sizeof(LNode));
	LinkList L = head;          // 初始化链表为空
	head->next = NULL;
	int n = 1;
	while (n)
	{
		printf("请输入链表元素\n");
		LinkList node = (LNode*)malloc(sizeof(LNode));       // 新建结点
		scanf("%d", &node->data);
		node->next = NULL;           // 将新建结点的next指针设置为空
		L->next = node;              // 将新建结点链接到链表的末尾
		L = node;                    // 将指针指向新申请的结点
		printf("继续输入1,结束输入0");
		scanf("%d", &n);
	}

	printf("原单链表为:\n");
	printList(head);

	head = reverseList(head);

	printf("逆序后的单链表为:\n");
	printList(head);

	return 0;
}
