#include "CliEmp.h"
#include "Client.h"
#include "Employee.h"
#include "Human.h"
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Bobr.h"



int main()
{
	Animal* barsik = new Cat("Барсик", 10, "женский", true);
	Animal* bobik = new Dog("Бобик", 15, "мужской", "средняя");
	Animal* dulik = new Bobr("Дулик", 20, "Мужской", 5);

	barsik->displayAnimal();
	bobik->animalSound();

	Client* thomas = new Client("Ред Томас Сэмович", 30);
	Human* dima = new Employee("Млинский Дмитрий Сергеевич", 23, "Смотритель");
	Human* gloria = new CliEmp("Верская Глория Тофил", 26, dulik, "Директор", false);

	thomas->takeAnimal(barsik);
	dima->displayHuman();
	gloria->displayHuman();

	delete barsik;
	delete bobik;
	delete dulik;
	delete thomas;
	delete dima;
	delete gloria;

}

