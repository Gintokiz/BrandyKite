#include <stdio.h>
#include "../header/lists.h"


int main() {
    int array[3] = {1, 2, 3};
    printf("Gli array contengono rispettivamente: %d, %d, %d\n", array[0], array[1], array[2]);
    Node* head = NULL;
    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    printList(head);
    freeList(head);

    printf("Programma eseguito con successo!\n");
    return 0;
}
