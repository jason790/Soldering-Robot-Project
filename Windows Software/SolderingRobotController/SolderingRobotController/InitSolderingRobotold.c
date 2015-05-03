#include "KMotionDef.h"

// Defines axis 0, 1, 2, 4, 5, 6 as simple step dir outputs
// enables them
// sets them as an xyzabc coordinate system for GCode

int main()
{
	ch0->InputMode = NO_INPUT_MODE;
	ch0->OutputMode = STEP_DIR_MODE;
	ch0->Vel = 4e+008;
	ch0->Accel = 400000;
	ch0->Jerk = 4e+006;
	ch0->P = 0;
	ch0->I = 0.01;
	ch0->D = 0;
	ch0->FFAccel = 0;
	ch0->FFVel = 0;
	ch0->MaxI = 20000;
	ch0->MaxErr = 1e+006;
	ch0->MaxOutput = 200;
	ch0->DeadBandGain = 1;
	ch0->DeadBandRange = 0;
	ch0->InputChan0 = 0;
	ch0->InputChan1 = 0;
	ch0->OutputChan0 = 8;
	ch0->OutputChan1 = 0;
	ch0->MasterAxis = -1;
	ch0->LimitSwitchOptions = 0x100;
	ch0->LimitSwitchNegBit = 0;
	ch0->LimitSwitchPosBit = 0;
	ch0->SoftLimitPos = 1e+030;
	ch0->SoftLimitNeg = -1e+030;
	ch0->InputGain0 = 1;
	ch0->InputGain1 = 1;
	ch0->InputOffset0 = 0;
	ch0->InputOffset1 = 0;
	ch0->OutputGain = -1;
	ch0->OutputOffset = 0;
	ch0->SlaveGain = 1;
	ch0->BacklashMode = BACKLASH_OFF;
	ch0->BacklashAmount = 0;
	ch0->BacklashRate = 0;
	ch0->invDistPerCycle = 1;
	ch0->Lead = 0;
	ch0->MaxFollowingError = 1000000000;
	ch0->StepperAmplitude = 20;

	ch0->iir[0].B0 = 1;
	ch0->iir[0].B1 = 0;
	ch0->iir[0].B2 = 0;
	ch0->iir[0].A1 = 0;
	ch0->iir[0].A2 = 0;

	ch0->iir[1].B0 = 1;
	ch0->iir[1].B1 = 0;
	ch0->iir[1].B2 = 0;
	ch0->iir[1].A1 = 0;
	ch0->iir[1].A2 = 0;

	ch0->iir[2].B0 = 0.000769;
	ch0->iir[2].B1 = 0.001538;
	ch0->iir[2].B2 = 0.000769;
	ch0->iir[2].A1 = 1.92081;
	ch0->iir[2].A2 = -0.923885;
	EnableAxisDest(0, 0);

	ch1->InputMode = NO_INPUT_MODE;
	ch1->OutputMode = STEP_DIR_MODE;
	ch1->Vel = 4e+008;
	ch1->Accel = 400000;
	ch1->Jerk = 4e+006;
	ch1->P = 0;
	ch1->I = 0.01;
	ch1->D = 0;
	ch1->FFAccel = 0;
	ch1->FFVel = 0;
	ch1->MaxI = 200;
	ch1->MaxErr = 1e+006;
	ch1->MaxOutput = 200;
	ch1->DeadBandGain = 1;
	ch1->DeadBandRange = 0;
	ch1->InputChan0 = 0;
	ch1->InputChan1 = 0;
	ch1->OutputChan0 = 9;
	ch1->OutputChan1 = 0;
	ch1->MasterAxis = -1;
	ch1->LimitSwitchOptions = 0x100;
	ch1->LimitSwitchNegBit = 0;
	ch1->LimitSwitchPosBit = 0;
	ch1->SoftLimitPos = 1e+030;
	ch1->SoftLimitNeg = -1e+030;
	ch1->InputGain0 = 1;
	ch1->InputGain1 = 1;
	ch1->InputOffset0 = 0;
	ch1->InputOffset1 = 0;
	ch1->OutputGain = -1;
	ch1->OutputOffset = 0;
	ch1->SlaveGain = 1;
	ch1->BacklashMode = BACKLASH_OFF;
	ch1->BacklashAmount = 0;
	ch1->BacklashRate = 0;
	ch1->invDistPerCycle = 1;
	ch1->Lead = 0;
	ch1->MaxFollowingError = 1000000000;
	ch1->StepperAmplitude = 20;

	ch1->iir[0].B0 = 1;
	ch1->iir[0].B1 = 0;
	ch1->iir[0].B2 = 0;
	ch1->iir[0].A1 = 0;
	ch1->iir[0].A2 = 0;

	ch1->iir[1].B0 = 1;
	ch1->iir[1].B1 = 0;
	ch1->iir[1].B2 = 0;
	ch1->iir[1].A1 = 0;
	ch1->iir[1].A2 = 0;

	ch1->iir[2].B0 = 0.000769;
	ch1->iir[2].B1 = 0.001538;
	ch1->iir[2].B2 = 0.000769;
	ch1->iir[2].A1 = 1.92081;
	ch1->iir[2].A2 = -0.923885;
	EnableAxisDest(1, 0);

	ch2->InputMode = NO_INPUT_MODE;
	ch2->OutputMode = STEP_DIR_MODE;
	ch2->Vel = 4e+008;
	ch2->Accel = 400000;
	ch2->Jerk = 4e+006;
	ch2->P = 0;
	ch2->I = 0.01;
	ch2->D = 0;
	ch2->FFAccel = 0;
	ch2->FFVel = 0;
	ch2->MaxI = 200;
	ch2->MaxErr = 1e+006;
	ch2->MaxOutput = 2000;
	ch2->DeadBandGain = 1;
	ch2->DeadBandRange = 0;
	ch2->InputChan0 = 0;
	ch2->InputChan1 = 0;
	ch2->OutputChan0 = 10;
	ch2->OutputChan1 = 0;
	ch2->MasterAxis = 1;
	ch2->LimitSwitchOptions = 0x100;
	ch2->LimitSwitchNegBit = 0;
	ch2->LimitSwitchPosBit = 0;
	ch2->SoftLimitPos = 1e+030;
	ch2->SoftLimitNeg = -1e+030;
	ch2->InputGain0 = 1;
	ch2->InputGain1 = 1;
	ch2->InputOffset0 = 0;
	ch2->InputOffset1 = 0;
	ch2->OutputGain = -1;
	ch2->OutputOffset = 0;
	ch2->SlaveGain = 1;
	ch2->BacklashMode = BACKLASH_OFF;
	ch2->BacklashAmount = 0;
	ch2->BacklashRate = 0;
	ch2->invDistPerCycle = 1;
	ch2->Lead = 0;
	ch2->MaxFollowingError = 1000000000;
	ch2->StepperAmplitude = 20;

	ch2->iir[0].B0 = 1;
	ch2->iir[0].B1 = 0;
	ch2->iir[0].B2 = 0;
	ch2->iir[0].A1 = 0;
	ch2->iir[0].A2 = 0;

	ch2->iir[1].B0 = 1;
	ch2->iir[1].B1 = 0;
	ch2->iir[1].B2 = 0;
	ch2->iir[1].A1 = 0;
	ch2->iir[1].A2 = 0;

	ch2->iir[2].B0 = 0.000769;
	ch2->iir[2].B1 = 0.001538;
	ch2->iir[2].B2 = 0.000769;
	ch2->iir[2].A1 = 1.92081;
	ch2->iir[2].A2 = -0.923885;
	EnableAxisDest(2, 0);

	ch3->InputMode = NO_INPUT_MODE;
	ch3->OutputMode = STEP_DIR_MODE;
	ch3->Vel = 4e+008;
	ch3->Accel = 400000;
	ch3->Jerk = 4e+006;
	ch3->P = 0;
	ch3->I = 0.01;
	ch3->D = 0;
	ch3->FFAccel = 0;
	ch3->FFVel = 0;
	ch3->MaxI = 200;
	ch3->MaxErr = 1e+006;
	ch3->MaxOutput = 200;
	ch3->DeadBandGain = 1;
	ch3->DeadBandRange = 0;
	ch3->InputChan0 = 2;
	ch3->InputChan1 = 0;
	ch3->OutputChan0 = 11;
	ch3->OutputChan1 = 0;
	ch3->MasterAxis = -1;
	ch3->LimitSwitchOptions = 0x100;
	ch3->LimitSwitchNegBit = 0;
	ch3->LimitSwitchPosBit = 0;
	ch3->SoftLimitPos = 1e+009;
	ch3->SoftLimitNeg = -1e+009;
	ch3->InputGain0 = 1;
	ch3->InputGain1 = 1;
	ch3->InputOffset0 = 0;
	ch3->InputOffset1 = 0;
	ch3->OutputGain = 1;
	ch3->OutputOffset = 0;
	ch3->SlaveGain = 1;
	ch3->BacklashMode = BACKLASH_OFF;
	ch3->BacklashAmount = 0;
	ch3->BacklashRate = 0;
	ch3->invDistPerCycle = 1;
	ch3->Lead = 0;
	ch3->MaxFollowingError = 1000000000;
	ch3->StepperAmplitude = 20;

	ch3->iir[0].B0 = 1;
	ch3->iir[0].B1 = 0;
	ch3->iir[0].B2 = 0;
	ch3->iir[0].A1 = 0;
	ch3->iir[0].A2 = 0;

	ch3->iir[1].B0 = 1;
	ch3->iir[1].B1 = 0;
	ch3->iir[1].B2 = 0;
	ch3->iir[1].A1 = 0;
	ch3->iir[1].A2 = 0;

	ch3->iir[2].B0 = 0.000769;
	ch3->iir[2].B1 = 0.001538;
	ch3->iir[2].B2 = 0.000769;
	ch3->iir[2].A1 = 1.92081;
	ch3->iir[2].A2 = -0.923885;
	EnableAxisDest(3, 0);

	ch4->InputMode = NO_INPUT_MODE;
	ch4->OutputMode = STEP_DIR_MODE;
	ch4->Vel = 4e+008;
	ch4->Accel = 400000;
	ch4->Jerk = 4e+006;
	ch4->P = 0;
	ch4->I = 0.01;
	ch4->D = 0;
	ch4->FFAccel = 0;
	ch4->FFVel = 0;
	ch4->MaxI = 200;
	ch4->MaxErr = 1e+006;
	ch4->MaxOutput = 200;
	ch4->DeadBandGain = 1;
	ch4->DeadBandRange = 0;
	ch4->InputChan0 = 2;
	ch4->InputChan1 = 0;
	ch4->OutputChan0 = 12;
	ch4->OutputChan1 = 0;
	ch4->MasterAxis = -1;
	ch4->LimitSwitchOptions = 0x100;
	ch4->LimitSwitchNegBit = 0;
	ch4->LimitSwitchPosBit = 0;
	ch4->SoftLimitPos = 1e+009;
	ch4->SoftLimitNeg = -1e+009;
	ch4->InputGain0 = 1;
	ch4->InputGain1 = 1;
	ch4->InputOffset0 = 0;
	ch4->InputOffset1 = 0;
	ch4->OutputGain = 1;
	ch4->OutputOffset = 0;
	ch4->SlaveGain = 1;
	ch4->BacklashMode = BACKLASH_OFF;
	ch4->BacklashAmount = 0;
	ch4->BacklashRate = 0;
	ch4->invDistPerCycle = 1;
	ch4->Lead = 0;
	ch4->MaxFollowingError = 1000000000;
	ch4->StepperAmplitude = 20;

	ch4->iir[0].B0 = 1;
	ch4->iir[0].B1 = 0;
	ch4->iir[0].B2 = 0;
	ch4->iir[0].A1 = 0;
	ch4->iir[0].A2 = 0;

	ch4->iir[1].B0 = 1;
	ch4->iir[1].B1 = 0;
	ch4->iir[1].B2 = 0;
	ch4->iir[1].A1 = 0;
	ch4->iir[1].A2 = 0;

	ch4->iir[2].B0 = 0.000769;
	ch4->iir[2].B1 = 0.001538;
	ch4->iir[2].B2 = 0.000769;
	ch4->iir[2].A1 = 1.92081;
	ch4->iir[2].A2 = -0.923885;
	EnableAxisDest(4, 0);

	ch5->InputMode = NO_INPUT_MODE;
	ch5->OutputMode = STEP_DIR_MODE;
	ch5->Vel = 4e+008;
	ch5->Accel = 400000;
	ch5->Jerk = 4e+006;
	ch5->P = 0;
	ch5->I = 0.01;
	ch5->D = 0;
	ch5->FFAccel = 0;
	ch5->FFVel = 0;
	ch5->MaxI = 200;
	ch5->MaxErr = 1e+006;
	ch5->MaxOutput = 200;
	ch5->DeadBandGain = 1;
	ch5->DeadBandRange = 0;
	ch5->InputChan0 = 2;
	ch5->InputChan1 = 0;
	ch5->OutputChan0 = 13;
	ch5->OutputChan1 = 0;
	ch5->MasterAxis = -1;
	ch5->LimitSwitchOptions = 0x100;
	ch5->LimitSwitchNegBit = 0;
	ch5->LimitSwitchPosBit = 0;
	ch5->SoftLimitPos = 1e+009;
	ch5->SoftLimitNeg = -1e+009;
	ch5->InputGain0 = 1;
	ch5->InputGain1 = 1;
	ch5->InputOffset0 = 0;
	ch5->InputOffset1 = 0;
	ch5->OutputGain = -1;
	ch5->OutputOffset = 0;
	ch5->SlaveGain = 1;
	ch5->BacklashMode = BACKLASH_OFF;
	ch5->BacklashAmount = 0;
	ch5->BacklashRate = 0;
	ch5->invDistPerCycle = 1;
	ch5->Lead = 0;
	ch5->MaxFollowingError = 1000000000;
	ch5->StepperAmplitude = 20;

	ch5->iir[0].B0 = 1;
	ch5->iir[0].B1 = 0;
	ch5->iir[0].B2 = 0;
	ch5->iir[0].A1 = 0;
	ch5->iir[0].A2 = 0;

	ch5->iir[1].B0 = 1;
	ch5->iir[1].B1 = 0;
	ch5->iir[1].B2 = 0;
	ch5->iir[1].A1 = 0;
	ch5->iir[1].A2 = 0;

	ch5->iir[2].B0 = 0.000769;
	ch5->iir[2].B1 = 0.001538;
	ch5->iir[2].B2 = 0.000769;
	ch5->iir[2].A1 = 1.92081;
	ch5->iir[2].A2 = -0.923885;
	EnableAxisDest(2, 0);

	DefineCoordSystem6(0, 1, 2, 3, 4, 5);

	SetBitDirection(39, 0);
	SetBitDirection(40, 0);
	SetBitDirection(41, 0);
	SetBitDirection(42, 0);
	SetBitDirection(43, 0);

	ClearBit(39);
	ClearBit(40);
	ClearBit(41);
	ClearBit(42);
	ClearBit(43);



	return 0;
}
