#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) 
{
	this->Kp = Kp;
	this->Kp = Kp;
	this->Kp = Kp;

	p_error = i_error = d_error = 0;
}

void PID::UpdateError(double cte) 
{
	return Kp*p_error + Kd*d_error + Ki*i_error;
}

double PID::TotalError() {
}

