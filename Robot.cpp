#include "WPILib.h"
#define PORT_DRIVE_VIC_1 5
#define PORT_DRIVE_VIC_2 10
#define PORT_DRIVE_VIC_3 2
#define PORT_DRIVE_VIC_4 1
#define PORT_JS_SPEED 1
#define PORT_JS_TURN 2



class MyRobot : public IterativeRobot {

  Victor leftVic1;
  Victor leftVic2;
  Victor rightVic1;
  Victor rightVic2;
  Timer t;
  Joystick speedStick;
  JoyStick turnStick;
  public:
  MyRobot():
    speedStick(PORT_JS_SPEED),
    turnStick(PORT_JS_TURN),
    leftVic1(PORT_DRIVE_VIC_1), 
    leftVic2(PORT_DRIVE_VIC_2),
    rightVic1(PORT_DRIVE_VIC_2),
    rightVic2(PORT_DRIVE_VIC_2){}
  void AutonomousInit(){
    t.Start();
  }
  void AutonomousPeriodic(){
    if(t.Get() < 2.0){
    leftVic1.Set(0.3);
    leftVic2.Set(0.3);
    rightVic1.Set(0.3);
    rightVic2.Set(0.3);
<<<<<<< HEAD
    }
    if(t.Get() > 2.0 && t.Get < 4.0){
=======

    Wait(2.0);
    
    leftVic1.Set(0.0);
    leftVic2.Set(0.0);
    rightVic1.Set(0.0);
    rightVic2.Set(0.0);

    Wait(2.0);
    
>>>>>>> 0cbaf8c330fa68e95d389bafaf45d6970aa6050c
    leftVic1.Set(0.5);
    leftVic2.Set(0.5);
    rightVic2.Set(-0.5);
    rightVic2.Set(-0.5);
    }
    if(t.Get() > 4.0){
    leftVic1.Set(0.0);
    leftVic2.Set(0.0);
    rightVic1.Set(0.0);
    rightVic2.Set(0.0);
<<<<<<< HEAD
    }
  }
  void TeleopInit(){

  }
  void TeleopPeriodic(){
    leftVic1.Set(turnStick.GetX());
    leftVic2.Set(turnStick.GetX());
    rightVic1.Set(turnStick.GetX());
    rightVic2.Set(turnStick.GetX());
    leftVic1.Set(speedStick.GetY());
    leftVic2.Set(speedStick.GetY());
    rightVic1.Set(-speedStick.GetY());
    rightVic2.Set(-speedStick.GetY());
=======
    
    Wait(2.0);
    
    leftVic1.Set(-0.3);
    leftVic2.Set(-0.3);
    rightVic1.Set(-0.3);
    rightVic2.Set(-0.3;)
>>>>>>> 0cbaf8c330fa68e95d389bafaf45d6970aa6050c
  }
  
};

START_ROBOT_CLASS(MyRobot);
