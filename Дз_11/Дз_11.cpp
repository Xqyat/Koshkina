#include <iostream>

using namespace std;

//1-----
//struct Human {
//    string name;
//    string surname;
//    int age;
//    double weight;
//    double height;
//
//    double BMIcount()
//    {
//        return (weight / 2.205) / ((height / 39.37) * (height / 39.37));
//    }
//
//    int Birth()
//    {
//        return 2024 - age;
//    }
//
//    void displayHuman()
//    {
//        cout << "Имя: " << name << endl;
//        cout << "Фамилия: " << surname << endl;
//        cout << "Возраст: " << age << endl;
//        cout << "Вес: " << weight << endl;
//        cout << "Рост: " << height << endl;
//    }
//
//};
//
//double BMIcount(Human human)
//{
//    return (human.weight / 2.205) / ((human.height / 39.37) * (human.height / 39.37));
//}
//
//double BMIcount(Human *human)
//{
//    return (human->weight / 2.205) / ((human->height / 39.37) * (human->height / 39.37));
//}
//
//int Birth(Human human)
//{
//    return 2024 - human.age;
//}
//
//double Birth(Human* human)
//{
//    return 2024 - human->age;
//}
//
//void displayHuman(Human human)
//{
//    cout << "Имя: " << human.name << endl;
//    cout << "Фамилия: " << human.surname << endl;
//    cout << "Возраст: " << human.age << endl;
//    cout << "Вес: " << human.weight << endl;
//    cout << "Рост: " << human.height << endl;
//}
//
//void displayHuman(Human* human)
//{
//    cout << "Имя: " << human->name << endl;
//    cout << "Фамилия: " << human->surname << endl;
//    cout << "Возраст: " << human->age << endl;
//    cout << "Вес: " << human->weight << endl;
//    cout << "Рост: " << human->height << endl;
//}
//
//
//int main()
//{
//    setlocale(LC_ALL, "RUS");
//    Human first;
//    Human second;
//
//    first.name = "David";
//    first.surname = "Martinez";
//    first.age = 19;
//    first.weight = 78.5;
//    first.height = 185.2;
//
//    second = { "Anna", "Tremasa", 25, 65, 170.2 };
//
//    Human third{ "Foma", "Akvinsky", 40, 80, 190.6 };
//
//    Human* fourth = new Human;
//    *fourth = {"Grisha", "Johnsinov", 30, 72, 176};
//
//    /*cout << BMIcount(first) << endl;
//    cout << BMIcount(second) << endl;
//    cout << BMIcount(third) << endl;
//    cout << BMIcount(fourth) << endl;
//    cout << Birth(first) << endl;
//    cout << Birth(second) << endl;
//    cout << Birth(third) << endl;
//    cout << Birth(fourth) << endl;
//    displayHuman(first);
//    displayHuman(second);
//    displayHuman(third);
//    displayHuman(fourth);*/
//
//    cout << first.BMIcount() << endl;
//    cout << first.Birth() << endl;
//    first.displayHuman();
//
//    cout << second.BMIcount() << endl;
//    cout << second.Birth() << endl;
//    second.displayHuman();
//
//    cout << third.BMIcount() << endl;
//    cout << third.Birth() << endl;
//    third.displayHuman();
//
//    cout << fourth->BMIcount() << endl;
//    cout << fourth->Birth() << endl;
//    fourth->displayHuman();
//}
//
//2------
//struct Car
//{
//	string mark;
//	string color;
//	string bodyType;
//	double engineValue;
//	int mileage;
//
//	double avFuelExp()
//	{
//		return (engineValue / (mileage * 100));
//	}
//
//	void downMileage(int reduce)
//	{
//		if (mileage - reduce >= 0) mileage -= reduce;
//		else mileage = 0;
//	}
//
//	void displayCar()
//	{
//		cout << "Марка: " << mark << endl;
//		cout << "Цвет: " << color << endl;
//		cout << "Тип кузова: " << bodyType << endl;
//		cout << "Объём двигателя: " << engineValue << endl;
//		cout << "Пробег: " << mileage << endl;
//	}
//};
//
//double avFuelExp(Car car)
//{
//    return (car.engineValue / (car.mileage * 100));
//}
//
//double avFuelExp(Car* car)
//{
//	return (car->engineValue / (car->mileage * 100));
//}
//
//void downMileage(Car car, int reduce)
//{
//    if (car.mileage - reduce >= 0) car.mileage -= reduce;
//    else car.mileage = 0;
//}
//
//void downMileage(Car* car, int reduce)
//{
//    if (car->mileage - reduce >= 0) car->mileage -= reduce;
//    else car->mileage = 0;
//}
//
//void displayCar(Car car)
//{
//    cout << "Марка: " << car.mark << endl;
//    cout << "Цвет: " << car.color << endl;
//    cout << "Тип кузова: " << car.bodyType << endl;
//    cout << "Объём двигателя: " << car.engineValue << endl;
//    cout << "Пробег: " << car.mileage << endl;
//}
//
//void displayCar(Car* car)
//{
//    cout << "Марка: " << car->mark << endl;
//    cout << "Цвет: " << car->color << endl;
//    cout << "Тип кузова: " << car->bodyType << endl;
//    cout << "Объём двигателя: " << car->engineValue << endl;
//    cout << "Пробег: " << car->mileage << endl;
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	Car first;
//	Car second;
//	Car* fourth = new Car;
//
//	first.mark = "Audi";
//	first.color = "black";
//	first.bodyType = "crossover";
//	first.engineValue = 1.3;
//	first.mileage = 300000;
//
//	second = { "BMW", "pink", "sedan", 4.4, 100 };
//
//	Car third{ "Lada", "eggplant", "sedan", 1.1, 1000000 };
//
//	*fourth = {"Porsche", "yellow", "sport-cupe", 800, 123456789};
//
//	/*cout << avFuelExp(first) << endl;
//	cout << avFuelExp(second) << endl;
//	cout << avFuelExp(third) << endl;
//	cout << avFuelExp(fourth) << endl;
//	downMileage(first, 200);
//	downMileage(second, 1000);
//	downMileage(third, 2000);
//	downMileage(fourth, 4000);
//	displayCar(first);
//	displayCar(second);
//	displayCar(third);
//	displayCar(fourth);*/
//
//	cout << first.avFuelExp() << endl;
//	first.downMileage(2000);
//	first.displayCar();
//
//	cout << second.avFuelExp() << endl;
//	second.downMileage(4000);
//	second.displayCar();
//
//	cout << third.avFuelExp() << endl;
//	third.downMileage(3000);
//	third.displayCar();
//
//	cout << fourth->avFuelExp() << endl;
//	fourth->downMileage(2000);
//	fourth->displayCar();
//}
//3-----
//struct Animal
//{
//	string name;
//	string specie;
//	string color;
//	int age;
//	double weight;
//	
//
//	void weightIncrease(int days)
//	{
//		weight += 0.01 * days;
//	}
//
//	void nameChanger(string newName)
//	{
//		name = newName;
//	}
//
//	void displayAnimal()
//	{
//		cout << "Имя: " << name << endl;
//		cout << "Вид: " << specie << endl;
//		cout << "Цвет: " << color << endl;
//		cout << "Возраст: " << age << endl;
//		cout << "Вес: " << weight << endl;
//	}
//};
//
//double weightIncrease(Animal animal, int days)
//{
//    return animal.weight += 0.01 * days;
//}
//
//double weightIncrease(Animal* animal, int days)
//{
//	  return animal->weight += 0.01 * days;
//}
//
//void nameChanger(Animal animal, string newName)
//{
//    animal.name = newName;
//}
//
//void nameChanger(Animal* animal, string newName)
//{
//    animal->name = newName;
//}
//
//void displayAnimal(Animal animal)
//{
//    cout << "Имя: " << animal.name << endl;
//	  cout << "Вид: " << animal.specie << endl;
//	  cout << "Цвет: " << animal.color << endl;
//	  cout << "Возраст: " << animal.age << endl;
//	  cout << "Вес: " << animal.weight << endl;
//}
//
//void displayAnimal(Animal* animal)
//{
//    cout << "Имя: " << animal->name << endl;
//	  cout << "Вид: " << animal->specie << endl;
//	  cout << "Цвет: " << animal->color << endl;
//	  cout << "Возраст: " << animal->age << endl;
//	  cout << "Вес: " << animal->weight << endl;
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	Animal first;
//	Animal second;
//	Animal* fourth = new Animal;
//
//	first.name = "Anton";
//	first.specie = "Cat";
//	first.color = "purple";
//	first.age = 5;
//	first.weight = 4.800;
//
//	second = { "Kapon", "Lion", "yellow", 10, 120 };
//
//	Animal third{ "Lada", "Dolphin", "brown", 20, 50 };
//
//	*fourth = { "Diman", "Golub", "blue", 1, 1 };
//
//	weightIncrease(first, 2);
//	weightIncrease(second, 1);
//	weightIncrease(third, 3);
//	weightIncrease(fourth, 4);
//	nameChanger(first, " F");
//	nameChanger(second, "Fgol");
//	nameChanger(third, "glob");
//	nameChanger(fourth, "Ulbert");
//	displayAnimal(first);
//	displayAnimal(second);
//	displayAnimal(third);
//	displayAnimal(fourth);

	//first.weightIncrease(5);
	//first.nameChanger("F");
	//first.displayAnimal();

	//second.weightIncrease(10);
	//second.nameChanger("Fgol");
	//second.displayAnimal();

	//third.weightIncrease(15);
	//third.nameChanger("glob");
	//third.displayAnimal();

	//fourth->weightIncrease(25);
	//fourth->nameChanger("Ulbert");
	//fourth->displayAnimal();
//}