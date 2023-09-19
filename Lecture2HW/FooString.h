class FooString {
    char* buf;
    int size;
    public:
    FooString(char* tbuf);
    ~FooString();
    void show ();
    char getElem(int pos);
    bool compare(FooString str); // Вариант 2 - true – если строки равны
};