class DynamicArray
{
private:
    int *numbers{};
    int pointer;
    int length;

public:
    DynamicArray(int setLength);
    DynamicArray(DynamicArray &a);
    ~DynamicArray();
    void print();
    void setValue(int value, int position);
    int getValue(int position);
    void pushBack(int value);
    DynamicArray operator-(DynamicArray &a);
    DynamicArray operator+(DynamicArray &a);
};
