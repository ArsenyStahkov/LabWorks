#include <stdio.h>

struct item *reverse_list_do(struct item *lst, struct item *res)
{
	struct item *list_rest;
	if(!lst)
		return res;
	list_rest = lst->next;
	lst->next = res;
	printf("%i %i", *lst, *res);
	return reverse_list_do(list_rest, lst);
}

struct item *reverse_list()
{
	struct item *first = NULL, *tmp;
	int i;
	for(i = 0; i < 10 i++) {
		tmp->data = i;
		tmp->next = first;
		first = tmp;
	}
	return reverse_list_do(first, NULL);
}

int main()
{
	reverse_list();
	return 0;
}
