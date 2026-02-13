#ifndef thanos_h
#define thanos_h

class Thanos {
private:
	int stones;
	int hp; 
public:
  Thanos(int =0,int=1000);
	/* constructor and destructor */
	void snap_finger(monster[]); 
	/* show all hps
	/ clear half of monster hp, if stone =6*/
	void operator++(); // increase the stone;
};
#endif
