#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
	int val;
	struct ListNode* next;
};



// ����һ:
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	if (!list1)
		return list2;
	if (!list2)
		return list1;

	struct ListNode* head = NULL;
	if (list1->val <= list2->val)
	{
		head = list1;
		list1 = list1->next;
	}
	else
	{
		head = list2;
		list2 = list2->next;
	}

	struct ListNode* tail = head;
	while (list1 && list2)
	{
		if (list1->val <= list2->val)
		{
			tail->next = list1;
			list1 = list1->next;
		}
		else
		{
			tail->next = list2;
			list2 = list2->next;
		}
		tail = tail->next;
	}

	if (list1)
		tail->next = list1;
	else
		tail->next = list2;

	return head;
}




// ������:  

// ʵ�ü���: ʹ���ƽ�� (dummy) 

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
		struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
		//�����ƽڵ㷽�����õ����ķ��ؽڵ㣻

		struct ListNode* scan = dummy;//ָ��ǰ�ϲ��������ĩβ��
		struct ListNode* p1 = list1;//ָ��ǰlist1��ͷ����
		struct ListNode* p2 = list2;//ָ��ǰlist2��ͷ����

		//��������ָ��ֱ�ά���ϲ��������list1��list2��

		while (true)   // ����Ҫ�жϣ�ֻҪ���ڲ����ú��˳��������ɣ�
		{
			if (!p1)
			{
				scan->next = p2;
				break;
			}
			if (!p2)
			{
				scan->next = p1;
				break;
			}
			//���������������������ʱֱ�ӽ��зֱ����ֱ���˳�ѭ�����ɣ�

			if (p1->val < p2->val)
			{
				scan->next = p1;
				p1 = p1->next;
			}
			else
			{
				scan->next = p2;
				p2 = p2->next;
			}
			scan = scan->next;
			//����Ϊ��������µĵ���������
		}
		return dummy->next;
	}
}