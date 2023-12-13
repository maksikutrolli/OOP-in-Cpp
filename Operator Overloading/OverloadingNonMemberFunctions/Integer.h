
/*
 *      Author: MaksiKutrolli
 */

#ifndef INTEGER_H
#define INTEGER_H

class Integer {
private:
    int value;

public:
    Integer(int val);

    int getValue() const;

    void setValue(int val);

    /// Non-member function for overloading the + operator
    friend Integer operator+(int left, const Integer& right);

    friend Integer operator-(const Integer& obj);
};

#endif // INTEGER_H




