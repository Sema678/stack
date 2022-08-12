#ifndef _CONTROL_H
#define _CONTROL_H

//Структура "кнопка"
struct MyBtn {
	int left;
	int top;
	int right;
	int bottom;
};

//Именованные константы для кнопок
enum control_values {
	NONE = -1, ADD_0, ADD_1, ADD_2, ADD_3, ADD_4, ADD_5, ADD_6, ADD_7, ADD_8, ADD_9, POP, EXIT, N_CONTROLS
};

void create_control(int left, int top, int right, int bottom, int type);
void drawButtons();
int select_control();


#endif