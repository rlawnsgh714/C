#include <stdio.h>
#pragma warning(disable : 4996)

int queue[5];
void menuf() {
	printf("\n1.큐에 삽입 2. 큐에서 삭제\n");
	pritnf("3. 내용 보기 4. 종료");
}

void Enqueue(int* back, int item) {//큐에서 데이터 삽입
	if (*back == 4) {
		printf("큐가 가득참\n");
		return;
	}
	queue[++ * back] = item;
}

void Dequeue(int* front, int back) {//큐에서 데이터 삭제
	if (*front == back) {
		//큐가 비었음
		return -1; 
	}
	return queue[++ * front];
}
