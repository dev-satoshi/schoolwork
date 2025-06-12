# 課題4 クィックソートの実装

本課題では、**クイックソート** アルゴリズムを以下の2つのデータ構造で実装します。
1. 配列を使ったクイックソート
2. 単方向リストを使ったクイックソート

いずれも、**提供されたサンプルソースコード**をベースにして、ソート処理のロジックを自分で実装する形式です。

## サンプルソースコード
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "singleListMod.h"

#define MAXLIST 20
#define MAXNUM  100

double eTime() {
  struct timeval tv;
  gettimeofday(&tv , NULL);
  return tv.tv_sec + (double)tv.tv_usec*1e-6;
}

struct sList * initList(struct sList *pt) {
  int i;
  for(i = 0 ; i < MAXLIST ; i++) {
    struct sList *cell = createSList();
    cell->value = rand() % MAXNUM;
    pt = insertSList(pt,cell);
  }
  return pt;
}

struct sList * initList1(struct sList *pt) {
  int i;
  for(i = 0 ; i < MAXLIST ; i++) {
    struct sList *cell = createSList();
    cell->value = i;
    pt = insertSList(pt,cell);
  }
  return pt;
}

struct sList * quickSort(struct sList *pt) {
  struct sList *result = NULL;
  //
  return result;
}


int main() {
  srand((unsigned int)time(NULL));

  double  start = eTime();
  struct sList *pt = initList(NULL);
  //printSList(pt);
  pt = quickSort(pt);
  double end   = eTime();
  printf("time:%6.2f\n",end - start);
  //printSList(pt);
  return 0;
}
```

## 提出物
- 配列を使ったクイックソート
- 単方向リストを使ったクイックソート
