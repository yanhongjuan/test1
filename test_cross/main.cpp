#include <stdio.h>
using namespace std;
#include <iostream>
#include <Eigen/Core>
#include <Eigen/Geometry>
#include <cmath>
int main()
{
    Eigen::AngleAxisd rotation_vector(M_PI/4,Eigen::Vector3d(5,1,1)/Eigen::Vector3d(5,1,1).norm());//这里记得归一化
   Eigen::Matrix3d rotation_matrix=rotation_vector.matrix();
   Eigen::Vector3d v1(2,3,4);
   Eigen::Vector3d v2(5,8,9);
   Eigen::Vector3d v3=v1.cross(v2);//叉积
   Eigen::Vector3d v4=rotation_matrix*v3;//r(a叉乘b)

   Eigen::Vector3d v5=rotation_matrix*v1;
   Eigen::Vector3d v6=rotation_matrix*v2;
   Eigen::Vector3d v7=v5.cross(v6);
   cout<<v4<<endl<<v7<<endl;
}