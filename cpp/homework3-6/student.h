class student
{
public:
    student();
    student(int iweight, int inumber);
    student(student &b);
    void show() const;
    friend bool compare(student &a, student &b);

private:
    int weight;
    const int number;
    static int count;
};

bool compare(student &a, student &b);