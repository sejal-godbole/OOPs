#include <iostream>
using namespace std;

// A virtual function is a member function that you expect to be redefined in derived classes.

class Tea {
    public:
        virtual void prepareIngredients() = 0; // pure virtual function

        virtual void brew() = 0;
        virtual void serve() = 0;

        void makeTea() {
            prepareIngredients();
            brew();
            serve();
        }
};

// derived class

class GreenTea : public Tea {
    public:
        void prepareIngredients() override {
            cout << "green leaves and water is ready." << endl;
        }

        void brew() override {
            cout << "Green Tea brewed." << endl;
        }

        void serve() override {
            cout << "Green Tea is served." << endl;
        }
};

class MasalaTea : public Tea {
    public:
        void prepareIngredients() override {
            cout << "green leaves and water is ready along with masala." << endl;
        }

        void brew() override {
            cout << "Masala Tea brewed." << endl;
        }

        void serve() override {
            cout << "Masala Tea is served." << endl;
        }
};

int main() {

    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();

    return 0;
}