#ifndef _LINE_H_
#define _LINE_H_
#include "tgaimage.h"

class drawliner
{
    void draw(int x0, int y0, int x1, int y1, TGAImage &image, TGAColor color);
};

#endif //_LINE_H_