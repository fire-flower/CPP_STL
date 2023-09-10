#ifndef EX_POINT_H__
#define EX_POINT_H__

class ExPoint
{
public:
    explicit ExPoint(int _x = 0, int _y = 0);
    virtual ~ExPoint();
    void Print() const;

private:
    int x;
    int y;
};

#endif