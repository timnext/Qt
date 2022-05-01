#include "view.h"

view::view()
{
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
    //ui->widget_vtk->setRenderWindow(viewer->getRenderWindow());
    //widget2->setRenderWindow(viewer->getRenderWindow());

}
