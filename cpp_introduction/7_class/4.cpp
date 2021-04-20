class MyClass
{
public:
    int PublicFunction()
    {
        return height_ * width_;
    }
    int height_;
    int width_;
    virtual void Describe() const {};
    virtual int Pure() const = 0;
};
