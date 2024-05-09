#include <cmath>
#include "line.h"
#include "tgaimage.h"

void drawliner::draw(int x0, int y0, int x1, int y1, TGAImage &image, TGAColor color)
{
    bool steep = false;
    if(std::abs(x0 - x1) < std::abs(y0 - y1)) steep = true;
    if(x0 > x1)
    {
        std::swap(x0, x1);
        std::swap(y0, y1);
    }
    
    
}