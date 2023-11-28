class vector
{
private:
    double x;
    double y;
    
public:
    vector(int x, int y);

    double magnitude();
    void normalise();
    void printValue();
};