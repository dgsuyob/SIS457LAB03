#pragma once
class Ball
{

protected:
	virtual void BeginPlay();
public:
	Ball();
	virtual void Launch();
	bool BallLaunched;
	virtual void Tick(float DeltaTime) ;

};