#ifndef MYROBOT_H

//ports for drive train victors
#define PORT_DRIVE_VIC_LEFT_FRONT 5
#define PORT_DRIVE_VIC_LEFT_BACK 6
#define PORT_DRIVE_VIC_RIGHT_FRONT 1
#define PORT_DRIVE_VIC_RIGHT_BACK 2


class RobotdEmo : public IterativeRobot
{
	RobotDrive myrObot;// robot drive system
	//initialization list of Victors
	Victor LeftvIcFront, LeftvIcbAck, RightvIcFront, RightvIcbAck;
	
//TODO fix broken stuff
public:
	//TODO getting lots of errors
	RobotdEmo():

	void Drive();
	//TODO including ones here
	//initialization list that saves memory
	myrObot.SetExpiration(0.1);
	this->SetPeriod(0); 	//Set update period to sync with robot control packets (20ms nominal)
};
#endif
