#include <emscripten.h>
#include "tic80.h"

int t = 0;
int x = 96;
int y = 24;

EMSCRIPTEN_KEEPALIVE
void TIC()
{
  if (btn(0)) y--;
  if (btn(1)) y++;
  if (btn(2)) x--;
  if (btn(3)) x++;

  cls(13);
  spr(1+t%60/30*2,x,y,14,3,0,0,2,2);
  print("HELLO WORLD!",84,84, 15, 0, 1, 0);
  t++;
}
