#include "widget.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Widget window;
    QSpinBox* spinBox=new QSpinBox(&w);
    QSlider* slider=new QSlider(Qt::Horizontal,&w);
    spinBox->setRange(0,30);
    slider->setRange(0,30);
    slider->setValue(10);
    QObject::connect(slider,&QSlider::valueChanged,spinBox,&QSpinBox::setValue);
    void(QSpinBox::*spinBoxSignal)(int)=&QSpinBox::valueChanged;
    QObject::connect(spinBox,spinBoxSignal,slider,&QSlider::setValue);
    spinBox->setValue(10);




    QHBoxLayout*layout=new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    w.setLayout(layout);
    w.show();

    //window.show();

    return a.exec();
}
