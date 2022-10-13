#pragma once
class Brick
{

protected:
	virtual void BeginPlay() ;
	float SpeedModifierOnBounce = 1.01f;
	void OnOverlapBegin();
	void DestroyBrick();

public:
	Brick();
	virtual void Tick(float DeltaTime) ;

};
