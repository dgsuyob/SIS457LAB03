#pragma once
class Paddle
{
protected:
	virtual void BeginPlay() ;

public:
	Paddle();
	virtual void Tick() ;
	virtual void SetupPlayerInputComponent();
	virtual void MoveHorizontal();

};
