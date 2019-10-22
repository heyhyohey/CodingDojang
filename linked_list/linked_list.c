#include <stdio.h>
#include <stdlib.h>

typedef struct element {
	int numerator, denominator;
} element;

typedef struct rat_node {   // 단순 연결리스트 노드 구조
    element ratio;      // 모두 양수 또는 음수일 수 있음
    struct rat_node *link;
} rat_node;

typedef struct rational {   // 다항식 표현의 구조체
    int length;
    rat_node *head;
} rational;

rational* init_list() {
	rational* r = (rational*)malloc(sizeof(rational));
	r->length = 0;
	r->head = NULL;

	return r;
}

int main(int argc, char* argv[]) {
	rational *r;

	// 1. 리스트 초기화
	r = init_list();

	// 2. 
	
	printf("%d %x\n", r->length, r->head);

	return 0;
}
