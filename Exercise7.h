class Person{
    private:
        string name;
        int age;
    public:
        Person(string, int);
        virtual void show();
};

class Student : public Person{
    private:
        float finalNote;
    public:
        Student(string, int, float);
        void show();
};

class Teacher : public Person{
    private:
        string subject;
    public:
        Teacher(string, int, string);
        void show();
};

