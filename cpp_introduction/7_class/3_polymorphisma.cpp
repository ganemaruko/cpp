#include <iostream>

class Rectangle
{
public:
    int Area() const
    {
        return height_ * width_;
    }

    int height_;
    int width_;
    // 仮想関数
    virtual void Describe() const {

    };
    // 純粋仮想関数は=0をつける
    // 純粋仮想関数があるクラスのオブジェクトは作ることができなくなる。
    virtual int Pure() const  = 0;

};

class Square : public Rectangle
{
public:
    void SetSize(int size)
    {
        height_ = size;
        width_ = size;
    }
    // 継承
    void Describe() const override{

    };
};
