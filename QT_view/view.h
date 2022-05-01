#ifndef VIEW_H
#define VIEW_H

#include <QObject>
#include <QWidget>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include<pcl/io/pcd_io.h>
#include <vtkSmartPointer.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkAutoInit.h>
#include <pcl/visualization/pcl_visualizer.h>

class view
{
    //Q_OBJECT
public:
    view();
    view(pcl::PointCloud<pcl::PointXYZ>::Ptr&cloud_source,pcl::PointCloud<pcl::PointXYZ>::Ptr&cloud_target);
};

#endif // VIEW_H
