#include "widget.h"
#include "ui_widget.h"
#include "view.h"

//#include<qopenglwidget.h>
//#include <qsurfaceformat.h>
//#include <QVTKOpenGLNativeWidget.h>
//#include<QVTKInteractor.h>
//#include<vtkOpenGLActor.h>
#include<pcl/io/pcd_io.h>
//#include <vtkRenderer.h>
//#include <vtkRenderWindow.h>
//#include <vtkNamedColors.h>
//#include <vtkSphereSource.h>
//#include <vtkPointData.h>
//#include <vtkPolyDataMapper.h>
#include <vtkSmartPointer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkAutoInit.h>
#include <pcl/visualization/pcl_visualizer.h>
//VTK_MODULE_INIT(vtkRenderingOpenGL2);
//VTK_MODULE_INIT(vtkInteractionStyle);
//VTK_MODULE_INIT(vtkRenderingVolumeOpenGL2);
//VTK_MODULE_INIT(vtkRenderingFreeType);

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    pcl::PointCloud<pcl::PointXYZ>::Ptr source(new pcl::PointCloud<pcl::PointXYZ>);
    pcl::io::loadPCDFile("C:\\Users\\SCQ\\Desktop\\source.pcd",*source);

    vtkSmartPointer<vtkRenderer> d_ren;//渲染器
    vtkSmartPointer<vtkGenericOpenGLRenderWindow> d_ren_win;//渲染窗口

    d_ren = vtkRenderer::New();
    d_ren->SetGradientBackground(true);
    d_ren_win = vtkGenericOpenGLRenderWindow::New();

    std::shared_ptr<pcl::visualization::PCLVisualizer> viewer;

    viewer.reset(new pcl::visualization::PCLVisualizer(d_ren, d_ren_win, "viewer", false));
    viewer->addPointCloud(source,"3d");
    viewer->setBackgroundColor(100,255,255);

    ui->widget2->setRenderWindow(viewer->getRenderWindow());






}

Widget::~Widget()
{
    delete ui;
}


