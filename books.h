#pragma once
#include "headers.h"
using namespace std;
struct Node {
	string name;
	int data;
	struct Node* next;
};

void sortedInsert(struct Node**, struct Node*);

void insert(struct Node** head_ref, string newName, int newData)
{ // insert tail
	struct Node* new_node = new Node();
	struct Node* tail = *head_ref;

	new_node->name = newName;
	new_node->data = newData;
	new_node->next = NULL;
	
	if (*head_ref == NULL) {
		*head_ref = new_node;
		return;
	}

	while (tail->next != NULL) {
		tail = tail->next;
	}

	tail->next = new_node;
	return;
}

void deleteNode(struct Node** node_ref, string keyName)
{ // delete by book name
	struct Node* temp = *node_ref;
	struct Node* temp2 = prev(temp);

	if (temp != NULL && temp->name == keyName) {
		*node_ref = temp->next;
		free(temp);
		return;
	}

	while (temp != NULL && temp->name != keyName) {
		temp2 = temp;
		temp = temp->next;
	}

	if (temp == NULL)return;

	temp2->next = temp->next;

	free(temp);
}

void show(struct Node* node)
{
	system("CLS");
	int i=1;
	cout << endl << "\t\t Judul Buku" << "\t\tStock" << endl << endl;
	while (node != NULL) {
		cout << "   " << i << "\t\t" << node->name << "\t\t\t" << node->data << "\n\n";
		node = node->next;
		i++;
	}
}

bool search(struct Node* search_node, string searchName)
{
	struct Node* current = search_node;
	while (current != NULL) {
		if (current->name == searchName) {
			system("CLS");
			cout << "\n\n";
			cout << "\tPencarian buku ditemukan!" << endl << endl;
			cout << "\tNama Buku\t: " << current->name << endl;
			cout << "\tStock\t\t: " << current->data << endl;

			return true;
		}
		current = current->next;
	}
	return false;
}

void sortData(struct Node** head_ref)
{
	struct Node* sorted = NULL;
	struct Node* current = *head_ref;

	while (current != NULL) {
		struct Node* next = current->next;
		sortedInsert(&sorted, current);

		current = next;
	}

	*head_ref = sorted;
}

void sortedInsert(struct Node** head_ref, struct Node* new_node)
{
	struct Node* current;
	if (*head_ref == NULL || (*head_ref)->name >= new_node->name) {
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else {
		current = *head_ref;
		while (current->next != NULL && current->next->name < new_node->name) {
			current = current->next;
		}

		new_node->next = current->next;
		current->next = new_node;
	}
}
Node* head = NULL;