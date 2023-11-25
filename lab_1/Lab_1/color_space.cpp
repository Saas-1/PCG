//#include "color_space.h"

//Color_space::Color_space() : QColor()
//{

//}

//Color_space::Color_space(QColor color) :QColor(color)
//{

//}

//Color_space::Color_space(QRgb rgb) :QColor(rgb)
//{

//}

//void Color_space::getXYZ(int*x, int *y, int *z)
//{
//    int r = red();
//    int g = green();
//    int b = blue();


//    // все формулы x
//    return;
//};


//void Color_space::getLAB(int*l, int *a, int *b)
//{
//    int r = red();
//    int g = green();
//    int bl = blue();
//}

//Color_space *Color_space::FromXYZ(int x, int y, int z)
//{

//}

//Color_space *Color_space::FromLAB(int l, int a, int b)
//{

//}

//Color_space* Color_space::fromSpace(space_name ID, int a, int b, int c, int d)
//{
//    Color_space* Space = nullptr;
//    switch(ID)
//    {
//    case space_name::rgb:
//        Space = new Color_space();
//        Space->setRed(a);
//        Space->setGreen(b);
//        Space->setBlue(c);
//        return Space;
//        break;
//    case space_name::cmyk:
//        Space = new Color_space();
//        Space->setRed(fromCmyk(a,b,c,d).red());
//        Space->setGreen(b);
//        Space->setBlue(c);
//        Space->setCmyk(a,b,c,d);
//        return Space;
//        break;
//    case space_name::hsv:
//        return new Color_space(fromHsv(a,b,c));
//        break;
//    case space_name::xyz:
//        return FromXYZ(a,b,c);
//        break;
//    case space_name::hls:
//        return new Color_space(fromHsl(a,b,c));
//        break;
//    case space_name::lab:
//        return FromLAB(a,b,c);
//        break;

//    }
//}
