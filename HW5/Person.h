using namespace std;

class Person
{   
    public:

        //empty constructor
        Person();
        
        //constructor
        Person(double weight, double height, char name[]);

        //sets weight
        void setWeight(double weight);

        //gets weight
        double getWeight();

        //sets height
        void setHeight(double height);

        //gets height
        double getHeight();

        //sets name
        void setName(char name[]);
        
        //returns pointer for name
        char* getName();

        //Creates height weight ratio and prints it.
        double getRatio();

    private:
    double height;
    double weight;
    char name[];

};