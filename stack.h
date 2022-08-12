#ifndef _STACK_H_
#define _STACK_H_

const int MAX_SIZE = 10;

struct Stack {
	int arr[MAX_SIZE];
	int top;  // индекс вершины стека
	int size;  // фактический размер стека
};
struct MyStack {
	int left;
	int top;
	int right;
	int bottom;
	char text;
};

Stack empty_stack(); // создает пустой стек
void push(Stack& st, int number); // добавление числа в стек
int top(const Stack& st); // возвращать вершину стека
void pop(Stack& st); // выкидывает из стека вершину, вершина обновляется
bool is_empty(const Stack& st); // возвращает тру если стек пустой
bool is_full(const Stack& st); // возвращает тру если стек полный
void draw_stack(Stack& st); // рисует прямоугольник в стеке

#endif

