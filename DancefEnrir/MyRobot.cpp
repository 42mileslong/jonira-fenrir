#include "WPILib.h"
#include "myrObot.hpp"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The IterativeRobot class is the base of a robot application that will automatically call your
 * Periodic methods for each packet based on the mode.
 */ 
	
/**
 * Robot-wide initialization code should go here.
 * 
 * Use this method for default Robot-wide initialization which will
 * be called when the robot is first powered on.  It will be called exactly 1 time.
 */
void RobotdEmo::RobotInit() {
	while (true) {
		Drive(0.3);
		Wait(1.0);
		Drive(0);
		
		Drive(-0.3);
		Wait(1.0);
		Drive(0);	
		
		if (rand() > 0.5) {
			TurnOneWay(rand() * 2);
		}
		else {
			TurnOtherWay(rand() * 2);
		}
	}
}

/**
 * Sets the robot to drive in a direction with a certain speed
 * Speed between -1 and 1, percent of power for motors
 */
void RobotdEmo::Drive(float speed) {
	LeftvIcFront.Set(speed);
	LeftvIcbAck.Set(speed);
	RightvIcFront.Set(-speed);
	RightvIcbAck.Set(-speed);
}

void RobotdEmo::TurnOneWay(double timeTurn) {
	LeftvIcFront.Set(0.3);
	LeftvIcbAck.Set(0.3);
	RightvIcFront.Set(0.3);
	RightvIcbAck.Set(0.3);
	
	Wait(timeTurn);
	
	Drive(0);
}

void RobotdEmo::TurnOtherWay(double timeTurn) {
	LeftvIcFront.Set(-0.3);
	LeftvIcbAck.Set(-0.3);
	RightvIcFront.Set(-.3);
	RightvIcbAck.Set(-.3);
	
	Wait(timeTurn);
	
	Drive(0);
}

/**
 * Initialization code for disabled mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters disabled mode. 
 */
void RobotdEmo::DisabledInit() {
}

/**
 * Periodic code for disabled mode should go here.
 * 
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in disabled mode.
 */
void RobotdEmo::DisabledPeriodic() {
}

/**
 * Initialization code for autonomous mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters autonomous mode.
 */
void RobotdEmo::AutonomousInit() {
}

/**
 * Periodic code for autonomous mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in autonomous mode.
 */
void RobotdEmo::AutonomousPeriodic() {
}

/**
 * Initialization code for teleop mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters teleop mode.
 */
void RobotdEmo::TeleopInit() {
}

/**
 * Periodic code for teleop mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in teleop mode.
 */
void RobotdEmo::TeleopPeriodic() {
}

/**
 * Initialization code for test mode should go here.
 * 
 * Use this method for initialization code which will be called each time
 * the robot enters test mode.
 */
void RobotdEmo::TestInit() {
}

/**
 * Periodic code for test mode should go here.
 *
 * Use this method for code which will be called periodically at a regular
 * rate while the robot is in test mode.
 */
void RobotdEmo::TestPeriodic() {
}

START_ROBOT_CLASS(RobotdEmo);

