#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"
#include "src/src/drive.c"
#include "src/src/intake.c"
#include "src/src/shooter.c"

#define DRIVETIME 4000

void pre_auton()
{
}

task autonomous()
{
	setShooter(127);
	//sets drive train motors to 90% power
	driveSetLeft((int)(0.9 * 127));
	driveSetRight((int)(0.9 *127));

	//drives forward until drivetime is up
	delay(DRIVETIME);

	//stops motors
	driveSetLeft(0);
	driveSetRight(0);

	//turns on intake and shooter
	while(1)
	{
		motor[0] = (int)(0.9 * 127);
		motor[10] = (int)(0.9 * 127);
		delay(20);
	}
}

task usercontrol()
{
	while (true)
	{
		drive();
		intake();
		shoot();
		delay(20);
	}
}
