#pragma once
class enemy
{
private:
	float life;
	float skin;
public:
	float getLife();
	void setLife();
	bool state;
	bool alive(bool);
	float getSkin();
	void setskin();

};

