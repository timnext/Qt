#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVTKOpenGLNativeWidget.h>
#include<QIcon>
#include <QApplication>
#include<QAction>
#include<QMenuBar>
#include<QStatusBar>
#include<QStatusBar>
#include<QToolBar>
#include<QSpinBox>
#include<QSlider>
#include<QHBoxLayout>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    vtkSmartPointer< vtkRenderer > m_pRenderder;
    void open();
    //QAction* openAction;


};
#endif // WIDGET_H
