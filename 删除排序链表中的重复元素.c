#define _CRT_SECURE_NO_WARNINGS 1

//给定一个已排序的链表的头 head，删除所有重复的元素，使每个元素只出现一次。返回已排序的链表


#include<stdio.h>
#include<stdlib.h>

struct ListNode* deleteDuplicates(struct ListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;

	struct ListNode* current = head;

	while (current->next != NULL)
	{
		if (current->next->data == current->data)
		{
			struct ListNode* duplicate = current->next;
			current->next = duplicate->next;
			free(duplicate);
		}
		else
			current = current->next;
	}

	return head;
}