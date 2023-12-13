
/*
 *      Author: MaksiKutrolli
 */

class MyNumber {
private:
    int value;
public:
    MyNumber(int val){
    	value = val;

    	std::cout<<"created"<<std::endl;
    }

    //member function
//    MyNumber operator++() {
//        return MyNumber(++value);
//    }

    int getValue(){
    	return value;
    }

    friend MyNumber& operator++(MyNumber& obj);
};


//not member function
MyNumber& operator++(MyNumber& obj) {
	obj.value ++;
    return obj;
}


