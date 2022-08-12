#include "MyButton.h"
#include <iostream>
#include <string>

#include "include/graphics.h"


MyBtn controls[N_CONTROLS];

void create_control(int left, int top, int right, int bottom, int type) {

	//Создаем кнопку
	MyBtn control;
	control.left = left;
	control.top = top;
	control.right = right;
	control.bottom = bottom;
//	control.text = text;

	//type - именованная константа, она же индекс для массива controls
	controls[type] = control;
}
void drawButtons() {
	setfillstyle(SOLID_FILL, BLUE);
	setcolor(WHITE);
	settextstyle(BOLD_FONT, HORIZ_DIR, 3);
	for (int i = 0; i < N_CONTROLS; ++i) {
		bar(controls[i].left, controls[i].top, controls[i].right, controls[i].bottom);
		rectangle(controls[i].left, controls[i].top, controls[i].right, controls[i].bottom); 
	}
	int i;
	for (char c = '0', i = 0; c <= '9', i <10; ++c, ++i) {
		char str[2];
		str[0] = c;
		str[1] = '\0';
		outtextxy(controls[i].left + 30, controls[i].top + 40, std::string(1, c).c_str());
	}
	outtextxy(755, 840, "POP");
	outtextxy(827, 840, "EXT");
}

int select_control() {
	int x = mousex();
	int y = mousey();

	for (int i = 0; i < N_CONTROLS; ++i) {
		if (x >= controls[i].left && x <= controls[i].right
			&& y >= controls[i].top && y <= controls[i].bottom) {
			return i;
		}
	}
	return NONE;
}