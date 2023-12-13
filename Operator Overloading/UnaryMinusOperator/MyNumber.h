/*
 *      Author: MaksiKutrolli
 */

class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}
    MyNumber operator-() {
        return MyNumber(-value);
    }

    int getValue(){
    	return value;
    }
};

