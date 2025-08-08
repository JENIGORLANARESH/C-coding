#include <stdio.h>
#include <stdlib.h>


struct tree{
	int value;
	struct tree *left;
	struct tree *right;
};

struct tree *createNode(int value){
	struct tree *node = NULL;
	node = (struct tree *)malloc(sizeof(struct tree));
	node->value = value;
	node->left = NULL;
	node->right = NULL;
	return node;
}

int main(void){
	int value = 10;
	struct tree *Tree;
	
	Tree = createNode(value);

	return 0;
}
