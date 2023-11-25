//#include "choose_color.h"
//#include <QImage>
//#include <QDebug>
//#include <QBitmap>
//#include <QSize>

////Choose_color::Choose_color(QWidget *parent) :
////    QLabel(parent)
////{
//////    setAutoFillBackground(true);
//////    QPalette pal;
//////    QPixmap pix(":/resource/img/palette.jpg");
//////    pix.scaled(100,10).save(":/resource/img/palette.jpg");
//////    setMask(pix.mask());
//////    pal.setBrush(backgroundRole(), QBrush(pix));
//////    setPalette(pal);
//////    resize(pix.size());
////}

////void Choose_color::mousePressEvent(QMouseEvent *e)
////{
//////    QRect onePixRect(e->pos(), QSize(1,1));
//////    QPixmap pix = QWidget::grab(onePixRect);
//////    QImage img = pix.toImage();
//////    QColor color(img.pixel(0, 0));
//////    emit Color(color);
////}


