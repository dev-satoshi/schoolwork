# 実行ファイル名
TARGET = linked_list_sort

# ソースファイル
SRCS = main.c list.c

# コンパイラとフラグ
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

# 実行バイナリのビルド
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

# make run でビルドして実行（time付き）
run: $(TARGET)
	/usr/bin/time ./$(TARGET)

# make clean で実行ファイル削除
clean:
	rm -f $(TARGET)
