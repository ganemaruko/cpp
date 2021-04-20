class Rectangle
{
private:
    /* data */
public:
    Rectangle(/* args */);
    ~Rectangle();
    // メンバ変数
    int height_;
    int width_;
    // const メンバ関数はデータメンバを変更できない
    const int Area(){
        height_ = 0;

    };
    int AreaConst() const;
};

// constメンバ関数はデータメンバを変更できない
int Rectangle::AreaConst() const{
    // height_ = 0;
}

Rectangle::Rectangle(/* args */)
{
}

Rectangle::~Rectangle()
{
}


