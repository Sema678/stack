#include "stack.h"
#include <iostream>

#include "include/graphics.h"

MyStack stacks[MAX_SIZE];

Stack empty_stack() {
	Stack st;
	st.size = 0;
	st.top = -1;
	return st;
}
void push(Stack& st, int number) {
	if (!is_full(st)) {		
		++st.top;
		st.arr[st.top] = number;
		++st.size;
	}
}
bool is_empty(const Stack& st) {
	return st.size == 0;
}
bool is_full(const Stack& st) {
	return st.size == MAX_SIZE;
}
void pop(Stack& st) {
	if(!is_empty(st)){
		--st.top;
		--st.size;
	}
}
int top(const Stack& st) {
	return st.arr[st.top];
}

void draw_stack(Stack& st) {
	setfillstyle(SOLID_FILL, RED);
	setcolor(WHITE);
	int k=0;
	const char* buf[MAX_SIZE+5];
	for (int i = 0; i < st.size; ++i) {
		std::string str = std::to_string(st.arr[i]);
		buf[i] = str.c_str();
		bar(300, 700-k, 600, 790-k);
		rectangle(300, 700-k, 600, 790-k);
		outtextxy(300 + 140, 700 + 40 - k, buf[i]); 
		k += 79;
	}

}

	