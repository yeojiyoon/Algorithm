#include <stdio.h>
#include <stdlib.h>
#define MAX 30

typedef struct node *treePointer;
typedef struct node{
	char a;
	struct node *leftChild;
	struct node *rightChild;
} node;

node *newNode(char a){
	node *New;
	New = (node*)malloc(sizeof(node));
	New->a = a;
	New->leftChild = NULL;
	New->rightChild = NULL;
	return New;
}

node *searchNode(node *H, char a){
	if(H != NULL){
		if(H->a == a) return H;
		else {
			node *tmp = searchNode(H->leftChild, a);
			if(tmp != NULL) return tmp;
		}
		
		return searchNode(H->rightChild, a);
	}
	return NULL;
}

void insertNode(node *H, char a, char b, char c){
	H->a = a;
	if(b != '.') H->leftChild = newNode(b);
	if(c != '.') H->rightChild = newNode(c);
}

void preorder(treePointer ptr){
	if(ptr){
		printf("%c", ptr->a);
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}

void inorder(treePointer ptr){
	if(ptr){
		inorder(ptr->leftChild);
		printf("%c", ptr->a);
		inorder(ptr->rightChild);
	}
}

void postorder(treePointer ptr){
	if(ptr){
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		printf("%c", ptr->a);
	}
}

int main(void){
	int number;
	int i;
	
	node *H = newNode(NULL);
	node *tmp;
	
	scanf("%d", &number);
	getchar();
	for(i = 1; i <= number; i++){  
		char a, b, c;
		scanf("%c %c %c", &a, &b, &c);
		getchar();
		tmp = searchNode(H, a);
		if(tmp != NULL) insertNode(tmp, a, b, c);
		else insertNode(H, a, b, c);
	}
	
	preorder(H);
	printf("\n");
	inorder(H);
	printf("\n");
	postorder(H);
	printf("\n");
}
