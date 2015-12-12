void setShooter(int speed);

void shoot()
{
	//sets shooter speed to each motor

	if(vexRT[Btn6U])
	{
		setShooter(127);
	}
	else
	{
		setShooter(0);
	}

}


void setShooter(int speed)
{
	for(int i = 3; i< 7; i++)
	{
		motor[i] = speed;
	}

}
