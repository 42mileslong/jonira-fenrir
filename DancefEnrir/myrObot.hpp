#ifndef MYROBOT_H
#define MYROBOT_H
#include <WPILib.h>
#include <stdlib.h>

//ports for drive train victors
#define PORT_DRIVE_VIC_LEFT_FRONT 5
#define PORT_DRIVE_VIC_LEFT_BACK 6
#define PORT_DRIVE_VIC_RIGHT_FRONT 1
#define PORT_DRIVE_VIC_RIGHT_BACK 2


class RobotdEmo : public IterativeRobot{
private:
	RobotDrive myrObot;// robot drive system
	//initialization list of Victors
	Victor LeftvIcFront, LeftvIcbAck, RightvIcFront, RightvIcbAck;
	
public:
	RobotdEmo();

	void RobotInit();
	void Drive(float speed);
	void TurnOneWay(double timeTurn);
	void TurnOtherWay(double timeTurn);
	void DisabledInit();
	void DisabledPeriodic();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestInit();
	void TestPeriodic();
};
#endif
