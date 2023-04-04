#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
unsigned  int sum = 0;

while (head)
{
sum += head->n;
temp = head->next;
}

return (sum);
}
