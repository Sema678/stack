#include "include/graphics.h"
#include "MyButton.h"
#include "stack.h"
#include <iostream>
#include <string>
#include <algorithm>
const int WIDTH = 900;
const int HEIGHT = 900;

Stack Mst = empty_stack();

int main() {
    srand(time(0));

    initwindow(WIDTH, HEIGHT, "Анимация", 0, 0, true);
    int x = 0;
    for (int i = 0; i < N_CONTROLS; ++i) {
        create_control(x, 800, x+75, 900, i);
        x += 75;
        
    }
    int m = 0;
    int n = 0;
    while (true) {
        
        setbkcolor(BLACK); // цвет фона
        clearviewport(); // закраска текущей страницы цветом фона
       
        rectangle(300, 1, 600, 790);
          
        drawButtons();
        if (Mst.size != 0)
            draw_stack(Mst);
        if (is_full(Mst) && n > 10) {
            n=11;
            setcolor(WHITE);
            settextstyle(BOLD_FONT, HORIZ_DIR, 7);
            outtextxy(220, 400, "Stack is full!"); 
            settextstyle(BOLD_FONT, HORIZ_DIR, 3);

        }

        if (is_empty(Mst) && m > 0) {
            n = 0;
            setcolor(WHITE);
            settextstyle(BOLD_FONT, HORIZ_DIR, 7);
            outtextxy(220, 400, "Stack is empty!");
        }
         
        if (mousebuttons() == 1) {
            
            int button = select_control();

            if (button == ADD_0) {
                m = 0;
                ++n;
                push(Mst, 0);
                draw_stack(Mst);

            }
            if (button == ADD_1) {
                m = 0;
                ++n;
                push(Mst, 1);
                draw_stack(Mst);

            }
            if (button == ADD_2) {
                m = 0;
                ++n;
                push(Mst, 2);
                draw_stack(Mst);

            }
            if (button == ADD_3) {
                m = 0;
                ++n;
                push(Mst, 3);
                draw_stack(Mst);

            }
            if (button == ADD_4) {
                m = 0;
                ++n;
                push(Mst, 4);
                draw_stack(Mst);

            }if (button == ADD_5) {
                m = 0;
                ++n;
                push(Mst, 5);
                draw_stack(Mst);

            }
            if (button == ADD_6) {
                m = 0;
                ++n;
                push(Mst, 6);
                draw_stack(Mst);

            }
            if (button == ADD_7) {
                m = 0;
                ++n;
                push(Mst, 7);
                draw_stack(Mst);

            }
            if (button == ADD_8) {
                m = 0;
                ++n;
                push(Mst, 8);
                draw_stack(Mst);

            }
            if (button == ADD_9) {
                m = 0;
                ++n;
                push(Mst, 9);
                draw_stack(Mst);

            }
            if (button == POP) {
                if (is_empty(Mst))
                    ++m;
                if (n == 11)
                    n -= 2;
                --n;
                pop(Mst);
                draw_stack(Mst);

            }
            
            if (button == EXIT) {
                exit(0);
            }
            
            
        }

        
        swapbuffers();
        delay(30);


        
        if (kbhit()) {
            int key = getch();
            if (key == KEY_ESC) {
                break;
            }
        }
    }
    

    closegraph();
    

    return 0;
}

