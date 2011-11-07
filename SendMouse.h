#ifndef _SENDMOUSE_H
#define _SENDMOUSE_H


class CSendMouse {
public:
	CSendMouse();
	virtual ~CSendMouse();
	void move(int x, int y);
	void ClickL();
	void ClickL(int x, int y);
	void ClickR();
	void ClickR(int x, int y);
};

#endif