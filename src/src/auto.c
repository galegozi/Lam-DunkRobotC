#define DRIVETIME 1500

void autonomous() {

	setShooter((int)(0.9 * 127));
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
		motorSet(1, (int)(0.9 * 127));
		motorSet(10, (int)(0.9 * 127));
		delay(20);
	}
}
