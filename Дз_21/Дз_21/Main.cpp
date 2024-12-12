#include "VendingMachine.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    int slotsCount = 10;

    Snack* bounty = new Snack("Bounty");
    Snack* snickers = new Snack("Snickers");
    SnackSlot* slot = new SnackSlot(slotsCount/*количество батончиков, которые помещаются в слот*/);
    slot->addSnack(bounty); //Добавляем батончик в слот
    slot->addSnack(snickers);
    VendingMachine* machine = new VendingMachine(slotsCount /*Количество слотов для снеков*/);
    machine->addSlot(slot); // Помещаем слот обратно в аппарат

    cout << machine->getEmptySlotsCount(); // Должно выводить количество пустых слотов для снеков

    bounty->changePrice();
    machine->depositMoney(200);
    machine->buySnack(slot);
    machine->refund(88);
    machine->withdrawMoney();
    delete machine;
    delete slot;
    delete snickers;
    delete bounty;
}
