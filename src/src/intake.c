void intake() {

	//sets intake
	if (vexRT[Btn6D])
	{
		motor[0] = 127;
	}
	else if (vexRT[Btn8D])
	{
		motor[0] = -127;
	}

	else
	{
		motor[0] = 0;
	}

	//sets lift
	if (vexRT[Btn6D])
	{
		motor[9] = 127;
	}
	else if (vexRT[Btn5D])
	{
		motor[9] = -127;
	}
	else
	{
		motor[9] = 0;
	}
}
