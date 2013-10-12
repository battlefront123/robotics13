#include "WPILib.h"
#define PORT_DRIVE_VIC_1 5
#define PORT_DRIVE_VIC_2 10
#define PORT_DRIVE_VIC_3 2
#define PORT_DRIVE_VIC_4 1



class MyRobot : public SimpleRobot {

  Victor leftVic1;
  Victor leftVic2;
  Victor rightVic1;
  Victor rightVic2;
  
  public:
  MyRobot():
    leftVic1(PORT_DRIVE_VIC_1), 
    leftVic2(PORT_DRIVE_VIC_2),
    rightVic1(PORT_DRIVE_VIC_2),
    rightVic2(PORT_DRIVE_VIC_2){}
    
  void Autonomous(){
    leftVic1.Set(0.5);
    leftVic2.Set(0.5);
    rightVic2.Set(-0.5);
    rightVid2.Set(-0.5);
    
    Wait(2.0);
    
    leftVic1.Set(0.0);
    leftVic2.Set(0.0);
    rightVic1.Set(0.0);
    rightVic2.Set(0.0);
  }
  
};

START_ROBOT_CLASS(MyRobot;
