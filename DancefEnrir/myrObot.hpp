#ifndef MYROBOT_H
#define MYROBOT_H
#include <WPILib.h>
#include <stdlib.h>

//ports for drive train victors
#define PORT_DRIVE_VIC_LEFT_FRONT 5
#define PORT_DRIVE_VIC_LEFT_BACK 6
#define PORT_DRIVE_VIC_RIGHT_FRONT 1
#define PORT_DRIVE_VIC_RIGHT_BACK 2


class RobotdEmo : public IterativeRobot
{
private:
	RobotDrive myrObot;// robot drive system
	//initialization list of Victors
	Victor LeftvIcFront, LeftvIcbAck, RightvIcFront, RightvIcbAck;
	
//TODO fix broken stuff
public:
	//TODO getting lots of errors
	RobotdEmo():

	void Drive();
	void RobotInit();
	void TurnOneWay();
	void TurnOtherWay();
	void RobotdEmo::DisabledInit();
	void RobotdEmo::DisabledPeriodic();
	void RobotdEmo::AutonomousInit();
	void RobotdEmo::AutonomousPeriodic();
	void RobotdEmo::TeleopInit();
	void RobotdEmo::TeleopPeriodic();
	void RobotdEmo::TestInit();
	void RobotdEmo::TestPeriodic();
	
	
	myrObot.SetExpiration(0.1);
	this->SetPeriod(0); 	//Set update period to sync with robot control packets (20ms nominal)
};
#endif
