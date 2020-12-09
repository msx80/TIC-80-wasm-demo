
#pragma once

void spr(int index, int x, int y, char colorKey, int scale, int flip, int rotate, int w, int h);
void pix(int x, int y, int color);
_Bool btn(int idx);
void cls(int color);
int print(const char* text, int x, int y, int color, _Bool fixed, int scale, _Bool alt);
void map(int x, int y, int w, int h, int sx, int sy, char colorKey, int scale, int remap);
