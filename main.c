// main.c

#include <stdio.h>
#include "arvore.c"

int main() {
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Percorrendo em ordem antes da remoção: ");
    inOrder(root);
    printf("\n");

    root = deleteNode(root, 20);
    root = deleteNode(root, 30);
    root = deleteNode(root, 50);

    printf("Percorrendo em ordem após a remoção: ");
    inOrder(root);
    printf("\n");

   

    for(int i = 1; i <= 200; i++){
        if((i % 10) == 0){
            printf("%d, OK!\n", i);
        }

    }

    

    return 0;
}
