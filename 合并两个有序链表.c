#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct ListNode
{
	int val;
	struct ListNode* next;
};



// 方法一:
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




// 方法二:  

// 实用技巧: 使用哑结点 (dummy) 

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
	struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
		struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
		//设置哑节点方便最后得到最后的返回节点；

		struct ListNode* scan = dummy;//指向当前合并后链表的末尾；
		struct ListNode* p1 = list1;//指向当前list1的头部；
		struct ListNode* p2 = list2;//指向当前list2的头部；

		//设置三个指针分别维护合并后的链表，list1，list2；

		while (true)   // 不需要判断，只要在内部设置好退出条件即可；
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
			//当出现以上两种特殊情况时直接进行分别操作直接退出循环即可；

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
			//以上为正常情况下的迭代操作；
		}
		return dummy->next;
	}
}