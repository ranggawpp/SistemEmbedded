#ifndef MIKROKONTROLLER_H
#define MIKROKONTROLLER_H

class Mikrokontroller {

private:
	int id;

public:
	void processResult();

	void sendNotification();

	void turnOnAlarm();

	void turnOffAlarm();
};

#endif
