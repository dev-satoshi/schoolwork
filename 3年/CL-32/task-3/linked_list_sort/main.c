#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

int main() {
    Node* head = NULL;
    int n = 1000;
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        append(&head, rand() % 10000);
    }

    printf("ソート前：\n");
    printList(head);

    clock_t start = clock();
    bubbleSort(head);
    clock_t end = clock();

    printf("ソート後：\n");
    printList(head);

    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("ソート時間：%.4f 秒\n", time_taken);

    FILE* fp = fopen("sort_result.txt", "w");
    if (fp) {
        fprintf(fp, "要素数: %d\n", n);
        fprintf(fp, "ソート時間: %.4f 秒\n", time_taken);
        fclose(fp);
    }

    freeList(head);
    return 0;
}
