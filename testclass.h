
#ifndef testclass_cpp
#define testclass_cpp

class testclass
{
public:
    testclass();
    ~testclass();

    int store(int);
    int get(void);

private:
    int v;
};

#endif // testclass_cpp
