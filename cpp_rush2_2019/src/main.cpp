/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#include "MyUnitTests.hpp"

Object **MyUnitTests()
{
    Object **Array = new Object*[3];

    Array[0] = new LittlePony("happy pony");
    Array[1] = new Teddy("cuddles");
    Array[2] = NULL;

    return Array;
}

Object *MyUnitTests(Object **GiftParts)
{
    if (GiftParts == NULL || GiftParts[0] == NULL || GiftParts[1] == NULL || GiftParts[2] == NULL || GiftParts[3] != NULL ||
    GiftParts[0]->getType() != "teddy" || GiftParts[1]->getType() != "box" || GiftParts[2]->getType() != "giftpaper") {
        std::cerr << "Array miss one items or one items is incorrect." << std::endl;
        return nullptr;
    }
    Teddy *ours = static_cast<Teddy *>(GiftParts[0]);
    Box *boite = static_cast<Box *>(GiftParts[1]);
    GiftPaper *cadeau = static_cast<GiftPaper *>(GiftParts[2]);
    boite->openMe();
    cadeau->openMe();
    if (boite->getObject() != nullptr || cadeau->getObject() != nullptr) {
        std::cerr << "Box or GiftPaper isn't empty." << std::endl;
        return nullptr;
    }
    boite->wrapMeThat(ours);
    boite->closeMe();
    cadeau->wrapMeThat(boite);
    cadeau->closeMe();
    return cadeau;
}

void testToy()
{
    Object **array = MyUnitTests();
    std::cout << "------Little Pony and Teddy------\n" << std::endl;
    std::cout << "Test 0 No Errors:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    std::cout << *array[0];
    std::cout << *array[1];
    std::cout << "Excepted:\nI am happy pony the pony\nI am cuddles the teddy\n" << std::endl;
    std::cout << "------End Little Pony and Teddy------\n" << std::endl;
    for (int i = 0; array[i] != NULL; i++)
        delete(array[i]);
    delete(array);
}

void unWrappedAllGift(GiftPaper *cadeau)
{
    cadeau->openMe();
    Box *box = static_cast<Box *>(cadeau->getObject());
    box->openMe();
    const Object *object = box->getObject();
    std::cout << *object;
}

void testsWrap()
{
    Teddy ours;
    Box boite;
    GiftPaper cadeau;
    Object *ArrayBox[4] = {&ours, &boite, &cadeau, &cadeau};

    std::cout << "------A Box Story------\n" << std::endl;
    std::cout << "Test 0 Error end array:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    MyUnitTests(ArrayBox);
    std::cout << "Excepted:\nArray miss one items or one items is incorrect.\n" << std::endl;
    ArrayBox[3] = NULL;

    std::cout << "Test 1 No Errors:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    MyUnitTests(ArrayBox);
    std::cout << "Excepted:\ntuuuut tuuut tuut\ntuuuut tuuut tuut\n" << std::endl;

    //unWrappedAllGift(static_cast<GiftPaper *>(ArrayBox[2]));

    std::cout << "Test 2 Wraps Full:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    MyUnitTests(ArrayBox);
    std::cout << "Excepted:\nBox or GiftPaper isn't empty.\n" << std::endl;

    std::cout << "Test 3 Send NULL:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    MyUnitTests(NULL);
    std::cout << "Excepted:\nArray miss one items or one items is incorrect.\n" << std::endl;
    std::cout << "------End A Box Story------\n" << std::endl;
}


void testElf()
{
    IElf *elf = createElf();

    std::cout << "------The Little happy Elf------\n" << std::endl;
    std::cout << "Test 0 Table is Empty:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    elf->takeTable("box");
    std::cout << "Excepted:\nThe object you are looking for is not here.\n" << std::endl;
    std::cout << "Test 1 Search nothing:\n" << std::endl;
    std::cout << "Got:" << std::endl;
    elf->takeTable("");
    std::cout << "Excepted:\nThe object you are looking for is not here.\n" << std::endl;
    std::cout << "------End The Little happy Elf------\n" << std::endl;
    delete(elf);
}

int main(void)
{
    testToy();
    testsWrap();
    testElf();
    return 0;
}