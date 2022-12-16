//
// Created by twanw on 08/12/2022.
//

#include "program.h"

void program::program::programIsFun() {
    //Create objects
    auto printAObject = new printLetter::printLetterA();
    auto printBObject = new printLetter::printLetterB();
    auto printCObject = new printLetter::printLetterC();
    auto printDObject = new printLetter::printLetterD();
    auto printEObject = new printLetter::printLetterE();
    auto printFObject = new printLetter::printLetterF();
    auto printGObject = new printLetter::printLetterG();
    auto printHObject = new printLetter::printLetterH();
    auto printIObject = new printLetter::printLetterI();
    auto printJObject = new printLetter::printLetterJ();
    auto printKObject = new printLetter::printLetterK();
    auto printLObject = new printLetter::printLetterL();
    auto printMObject = new printLetter::printLetterM();
    auto printNObject = new printLetter::printLetterN();
    auto printOObject = new printLetter::printLetterO();
    auto printPObject = new printLetter::printLetterP();
    auto printQObject = new printLetter::printLetterQ();
    auto printRObject = new printLetter::printLetterR();
    auto printSObject = new printLetter::printLetterS();
    auto printTObject = new printLetter::printLetterT();
    auto printUObject = new printLetter::printLetterU();
    auto printVObject = new printLetter::printLetterV();
    auto printWObject = new printLetter::printLetterW();
    auto printXObject = new printLetter::printLetterX();
    auto printYObject = new printLetter::printLetterY();
    auto printZObject = new printLetter::printLetterZ();

    auto printSpatie = new printSpecialCharactersSpatie::printSpatie();
    auto printexclamationMark = new printSpecialCharactersExclamationMark::printExclamationMark();
    auto printEndLine = new printSpecialCharactersEndLine::printEndLine();

    std::vector<Actions::iAction*> actieLijstPrintDemo_Woord1;
    std::vector<Actions::iAction*> actieLijstPrintDemo_Spatie;
    std::vector<Actions::iAction*> actieLijstPrintDemo_Woord2;
    std::vector<Actions::iAction*> actieLijstPrintDemo_Woord3;
    std::vector<Actions::iAction*> actieLijstPrintDemo_EindeZin;
    std::vector<Actions::iAction*> actieLijstPrintDemo_Uitroepteken;

    actieLijstPrintDemo_Woord1.push_back(printPObject);
    actieLijstPrintDemo_Woord1.push_back(printRObject);
    actieLijstPrintDemo_Woord1.push_back(printOObject);
    actieLijstPrintDemo_Woord1.push_back(printGObject);
    actieLijstPrintDemo_Woord1.push_back(printRObject);
    actieLijstPrintDemo_Woord1.push_back(printAObject);
    actieLijstPrintDemo_Woord1.push_back(printMObject);
    actieLijstPrintDemo_Woord1.push_back(printMObject);
    actieLijstPrintDemo_Woord1.push_back(printIObject);
    actieLijstPrintDemo_Woord1.push_back(printNObject);
    actieLijstPrintDemo_Woord1.push_back(printGObject);

    actieLijstPrintDemo_Woord2.push_back(printIObject);
    actieLijstPrintDemo_Woord2.push_back(printSObject);

    actieLijstPrintDemo_Woord3.push_back(printFObject);
    actieLijstPrintDemo_Woord3.push_back(printUObject);
    actieLijstPrintDemo_Woord3.push_back(printNObject);

    actieLijstPrintDemo_Spatie.push_back(printSpatie);
    actieLijstPrintDemo_Uitroepteken.push_back(printexclamationMark);
    actieLijstPrintDemo_EindeZin.push_back(printEndLine);

    std::unique_ptr<state::state> state1 = std::make_unique<state::state>(actieLijstPrintDemo_Woord1);
    std::unique_ptr<state::state> state2 = std::make_unique<state::state>(actieLijstPrintDemo_Spatie);
    std::unique_ptr<state::state> state3 = std::make_unique<state::state>(actieLijstPrintDemo_Woord2);
    std::unique_ptr<state::state> state4 = std::make_unique<state::state>(actieLijstPrintDemo_Spatie);
    std::unique_ptr<state::state> state5 = std::make_unique<state::state>(actieLijstPrintDemo_Woord3);
    std::unique_ptr<state::state> state6 = std::make_unique<state::state>(actieLijstPrintDemo_Woord3);
    std::unique_ptr<state::state> state7 = std::make_unique<state::state>(actieLijstPrintDemo_Uitroepteken);
    std::unique_ptr<state::state> state8 = std::make_unique<state::state>(actieLijstPrintDemo_EindeZin);

    state7->link(std::move(state8));
    state6->link(std::move(state7));
    state5->link(std::move(state6));
    state4->link(std::move(state5));
    state3->link(std::move(state4));
    state2->link(std::move(state3));
    state1->link(std::move(state2));

    state1->run();

}

void program::program::alphabet()
{
    //Create objects
    auto printAObject = new printLetter::printLetterA();
    auto printBObject = new printLetter::printLetterB();
    auto printCObject = new printLetter::printLetterC();
    auto printDObject = new printLetter::printLetterD();
    auto printEObject = new printLetter::printLetterE();
    auto printFObject = new printLetter::printLetterF();
    auto printGObject = new printLetter::printLetterG();
    auto printHObject = new printLetter::printLetterH();
    auto printIObject = new printLetter::printLetterI();
    auto printJObject = new printLetter::printLetterJ();
    auto printKObject = new printLetter::printLetterK();
    auto printLObject = new printLetter::printLetterL();
    auto printMObject = new printLetter::printLetterM();
    auto printNObject = new printLetter::printLetterN();
    auto printOObject = new printLetter::printLetterO();
    auto printPObject = new printLetter::printLetterP();
    auto printQObject = new printLetter::printLetterQ();
    auto printRObject = new printLetter::printLetterR();
    auto printSObject = new printLetter::printLetterS();
    auto printTObject = new printLetter::printLetterT();
    auto printUObject = new printLetter::printLetterU();
    auto printVObject = new printLetter::printLetterV();
    auto printWObject = new printLetter::printLetterW();
    auto printXObject = new printLetter::printLetterX();
    auto printYObject = new printLetter::printLetterY();
    auto printZObject = new printLetter::printLetterZ();

    auto printSpatie = new printSpecialCharactersSpatie::printSpatie();
    auto printexclamationMark = new printSpecialCharactersExclamationMark::printExclamationMark();
    auto printEndLine = new printSpecialCharactersEndLine::printEndLine();

    std::vector<Actions::iAction*> actieLijstPrintAlfabet;

    actieLijstPrintAlfabet.push_back(printAObject);
    actieLijstPrintAlfabet.push_back(printBObject);
    actieLijstPrintAlfabet.push_back(printCObject);
    actieLijstPrintAlfabet.push_back(printDObject);
    actieLijstPrintAlfabet.push_back(printEObject);
    actieLijstPrintAlfabet.push_back(printFObject);
    actieLijstPrintAlfabet.push_back(printGObject);
    actieLijstPrintAlfabet.push_back(printHObject);
    actieLijstPrintAlfabet.push_back(printIObject);
    actieLijstPrintAlfabet.push_back(printJObject);
    actieLijstPrintAlfabet.push_back(printKObject);
    actieLijstPrintAlfabet.push_back(printLObject);
    actieLijstPrintAlfabet.push_back(printMObject);
    actieLijstPrintAlfabet.push_back(printNObject);
    actieLijstPrintAlfabet.push_back(printOObject);
    actieLijstPrintAlfabet.push_back(printPObject);
    actieLijstPrintAlfabet.push_back(printQObject);
    actieLijstPrintAlfabet.push_back(printRObject);
    actieLijstPrintAlfabet.push_back(printSObject);
    actieLijstPrintAlfabet.push_back(printTObject);
    actieLijstPrintAlfabet.push_back(printUObject);
    actieLijstPrintAlfabet.push_back(printVObject);
    actieLijstPrintAlfabet.push_back(printWObject);
    actieLijstPrintAlfabet.push_back(printXObject);
    actieLijstPrintAlfabet.push_back(printYObject);
    actieLijstPrintAlfabet.push_back(printZObject);
    actieLijstPrintAlfabet.push_back(printEndLine);

    std::unique_ptr<state::state> statePrintAlfabet = std::make_unique<state::state>(actieLijstPrintAlfabet);
    statePrintAlfabet->run();

}

