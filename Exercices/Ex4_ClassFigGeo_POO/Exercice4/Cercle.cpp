#include "Cercle.h"

#define _USE_MATH_DEFINES

#include "math.h"



void Cercle::CalculerSurface(double diametre,double zed)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D74 begin
{
    Surface = M_PI * pow(diametre,2 );
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D74 end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element

void Cercle::CalculerPerimetre(double diametre, double zed)
// don't delete the following line as it's needed to preserve source code of this autogenerated element
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D7A begin
{
    Perimetre= 2*(M_PI * ((float)diametre/2));
}
// section -64--88-1-58--553bbdf8:13b14881301:-8000:0000000000000D7A end
// don't delete the previous line as it's needed to preserve source code of this autogenerated element
