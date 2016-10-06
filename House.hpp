#ifndef House_hpp
#define House_hpp

class House
{
protected:
	int x;
	int y;
	int z;
	int w;	//ширина
	int l;	//длина
	int h;	//высота
public:
	House();
	int setx(int tx);
	int sety(int ty);
	int setz(int tz);
	int setw(int tw);
	int setl(int th);
	int seth(int tl);
	int getx();
	int gety();
	int getz();
	int getw();
	int getl();
	int geth();
	House(int tx, int tz, int ty, int tw, int tl, int th);
	void BuildHouse();
	void BuildBorder();
};

#endif