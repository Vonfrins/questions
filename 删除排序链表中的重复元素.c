#define _CRT_SECURE_NO_WARNINGS 1

//����һ��������������ͷ head��ɾ�������ظ���Ԫ�أ�ʹÿ��Ԫ��ֻ����һ�Ρ����������������


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