#include <stdio.h>
#include <stdlib.h>

struct node {
	int val;
	struct node *next;
};

typedef struct node node_t;

void printList(node_t *head) {
	node_t *tmp = head;
	while (tmp != NULL) {
		printf("- %d -", tmp->val);
		tmp = tmp->next;
	}
	printf("\n");
}

void insertAtBeg(node_t *head, int val) {
	node_t *tmp = head;
	tmp->val = val;
	if (tmp == NULL) {
		tmp->next = NULL;
	} else {
		tmp->next = head;
	}
	head = tmp;
}


int main(){
	node_t *head = NULL;
	
	for (int i = 0; i < 10; i++) {
		insertAtBeg(head, i);
	}

	printList(head);

	return 0;
}
