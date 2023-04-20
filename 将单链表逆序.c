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
		next = current->next;        // ������һ������ָ��
		current->next = prev;        // ��ǰ���ָ��ǰһ�����
		prev = current;              // �ƶ�ǰһ�����ָ��
		current = next;              // �ƶ���ǰ���ָ��
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
	LinkList L = head;          // ��ʼ������Ϊ��
	head->next = NULL;
	int n = 1;
	while (n)
	{
		printf("����������Ԫ��\n");
		LinkList node = (LNode*)malloc(sizeof(LNode));       // �½����
		scanf("%d", &node->data);
		node->next = NULL;           // ���½�����nextָ������Ϊ��
		L->next = node;              // ���½�������ӵ������ĩβ
		L = node;                    // ��ָ��ָ��������Ľ��
		printf("��������1,��������0");
		scanf("%d", &n);
	}

	printf("ԭ������Ϊ:\n");
	printList(head);

	head = reverseList(head);

	printf("�����ĵ�����Ϊ:\n");
	printList(head);

	return 0;
}
