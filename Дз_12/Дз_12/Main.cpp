#include <iostream>
using namespace std;

struct Human {
private:
    string name;
    string surname;
    int age;
    double weight;
    double height;

public:
    void Init(string new_name, string new_surname, int new_age, double new_weight, double new_height)
    {
        name = new_name;
        surname = new_surname;
        age = new_age;
        weight = new_weight;
        height = new_height;
    }

    double BMIcount()
    {
        return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
    }

    int Birth()
    {
        return 2024 - age;
    }

    void displayHuman()
    {
        cout << "Имя: " << name << endl;
        cout << "Фамилия: " << surname << endl;
        cout << "Возраст: " << age << endl;
        cout << "Вес: " << weight << endl;
        cout << "Рост: " << height << endl;
    }

};

double BMIcount(Human human)
{
    return (human.weight / 2.205) / ((human.height / 39.37) * (human.height / 39.37));
}

double BMIcount(Human* human)
{
    return (human->weight / 2.205) / ((human->height / 39.37) * (human->height / 39.37));
}

int Birth(Human human)
{
    return 2024 - human.age;
}

double Birth(Human* human)
{
    return 2024 - human->age;
}

void displayHuman(Human human)
{
    cout << "Имя: " << human.name << endl;
    cout << "Фамилия: " << human.surname << endl;
    cout << "Возраст: " << human.age << endl;
    cout << "Вес: " << human.weight << endl;
    cout << "Рост: " << human.height << endl;
}

void displayHuman(Human* human)
{
    cout << "Имя: " << human->name << endl;
    cout << "Фамилия: " << human->surname << endl;
    cout << "Возраст: " << human->age << endl;
    cout << "Вес: " << human->weight << endl;
    cout << "Рост: " << human->height << endl;
}


int main()
{
    setlocale(LC_ALL, "RUS");
    Human first;
    Human second;

    first.name = "David";
    first.surname = "Martinez";
    first.age = 19;
    first.weight = 78.5;
    first.height = 185.2;

    second = { "Anna", "Tremasa", 25, 65, 170.2 };

    Human third{ "Foma", "Akvinsky", 40, 80, 190.6 };

    Human* fourth = new Human;
    *fourth = { "Grisha", "Johnsinov", 30, 72, 176 };

    /*cout << BMIcount(first) << endl;
    cout << BMIcount(second) << endl;
    cout << BMIcount(third) << endl;
    cout << BMIcount(fourth) << endl;
    cout << Birth(first) << endl;
    cout << Birth(second) << endl;
    cout << Birth(third) << endl;
    cout << Birth(fourth) << endl;
    displayHuman(first);
    displayHuman(second);
    displayHuman(third);
    displayHuman(fourth);*/

    cout << first.BMIcount() << endl;
    cout << first.Birth() << endl;
    first.displayHuman();

    cout << second.BMIcount() << endl;
    cout << second.Birth() << endl;
    second.displayHuman();

    cout << third.BMIcount() << endl;
    cout << third.Birth() << endl;
    third.displayHuman();

    cout << fourth->BMIcount() << endl;
    cout << fourth->Birth() << endl;
    fourth->displayHuman();
}


