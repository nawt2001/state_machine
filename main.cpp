#include <iostream>
#include "state.h"
#include "iAction.h"
#include <queue>
#include "Actions/LedOn.h"
#include "Actions/print1.h"
#include "Actions/print2.h"
#include "Actions/print3.h"
#include "Actions/PrintLetters/printLetterA.h"
#include "Actions/PrintLetters/printLetterB.h"
#include "Actions/PrintLetters/printLetterC.h"
#include "Actions/PrintLetters/printLetterD.h"
#include "Actions/PrintLetters/printLetterE.h"
#include "Actions/PrintLetters/printLetterF.h"
#include "Actions/PrintLetters/printLetterG.h"
#include "Actions/PrintLetters/printLetterH.h"
#include "Actions/PrintLetters/printLetterI.h"
#include "Actions/PrintLetters/printLetterJ.h"
#include "Actions/PrintLetters/printLetterK.h"
#include "Actions/PrintLetters/printLetterL.h"
#include "Actions/PrintLetters/printLetterM.h"
#include "Actions/PrintLetters/printLetterN.h"
#include "Actions/PrintLetters/printLetterO.h"
#include "Actions/PrintLetters/printLetterP.h"
#include "Actions/PrintLetters/printLetterQ.h"
#include "Actions/PrintLetters/printLetterR.h"
#include "Actions/PrintLetters/printLetterS.h"
#include "Actions/PrintLetters/printLetterT.h"
#include "Actions/PrintLetters/printLetterU.h"
#include "Actions/PrintLetters/printLetterV.h"
#include "Actions/PrintLetters/printLetterW.h"
#include "Actions/PrintLetters/printLetterX.h"
#include "Actions/PrintLetters/printLetterY.h"
#include "Actions/PrintLetters/printLetterZ.h"

#include "Actions/PrintSpecialCharacters/printEndLine.h"
#include "Actions/PrintSpecialCharacters/printExclamationMark.h"
#include "Actions/PrintSpecialCharacters/printSpatie.h"
#include <memory>


int main() {
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
std::vector<Actions::iAction*> actieLijstPrintDemo_Woord1;
std::vector<Actions::iAction*> actieLijstPrintDemo_Spatie;
std::vector<Actions::iAction*> actieLijstPrintDemo_Woord2;
std::vector<Actions::iAction*> actieLijstPrintDemo_Woord3;
std::vector<Actions::iAction*> actieLijstPrintDemo_EindeZin;
std::vector<Actions::iAction*> actieLijstPrintDemo_Uitroepteken;


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
//
//std::unique_ptr<state::state> statePrintAlfabet = std::make_unique<state::state>(actieLijstPrintAlfabet);


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

//std::unique_ptr<state::state> statePrintEndLine = std::make_unique<state::state>(actieLijstPrintDemo_EindeZin);
//std::unique_ptr<state::state> statePrintUitroepTeken = std::make_unique<state::state>(std::move(statePrintEndLine),actieLijstPrintDemo_Uitroepteken);
//std::unique_ptr<state::state> statePrintWoord3 = std::make_unique<state::state>(std::move(statePrintUitroepTeken),actieLijstPrintDemo_Woord3);
//std::unique_ptr<state::state> statePrintSpatie2 = std::make_unique<state::state>(std::move(statePrintWoord3), actieLijstPrintDemo_Spatie);
//std::unique_ptr<state::state> statePrintWoord2 = std::make_unique<state::state>(std::move(statePrintSpatie2),actieLijstPrintDemo_Woord2);
//std::unique_ptr<state::state> statePrintSpatie1 = std::make_unique<state::state>(std::move(statePrintWoord2),actieLijstPrintDemo_Spatie);
//std::unique_ptr<state::state> statePrintWoord1 = std::make_unique<state::state>(std::move(statePrintSpatie1),actieLijstPrintDemo_Woord1);

std::unique_ptr<state::state> state1 = std::make_unique<state::state>(actieLijstPrintDemo_Woord1);
std::unique_ptr<state::state> state2 = std::make_unique<state::state>(actieLijstPrintDemo_Spatie);
std::unique_ptr<state::state> state3 = std::make_unique<state::state>(actieLijstPrintDemo_Woord2);
std::unique_ptr<state::state> state4 = std::make_unique<state::state>(actieLijstPrintDemo_Spatie);
std::unique_ptr<state::state> state5 = std::make_unique<state::state>(actieLijstPrintDemo_Woord3);
std::unique_ptr<state::state> state6 = std::make_unique<state::state>(actieLijstPrintDemo_Woord3);

//state3->link(std::move(state4));
state5->link(std::move(state6));
state4->link(std::move(state5));
state3->link(std::move(state4));
state2->link(std::move(state3));
state1->link(std::move(state2));

state1->run();

//statePrintWoord1->run();

//statePrintWoord1->run();
//statePrintSpatie1->run();
//statePrintWoord2->run();



//    std::queue<Actions::iAction*> actieLijst1;
//    std::queue<Actions::iAction*> actieLijst2;
//    std::queue<Actions::iAction*> actieLijst3;
//    std::queue<Actions::iAction*> actieLijst4;
//
//    auto print1 = new print1::print1();
//    auto print2 = new print2::print2();
//    auto print3 = new print3::print3();
//
//    actieLijst1.push(print2);
//    actieLijst1.push(print3);
//    actieLijst2.push(print1);
//    actieLijst3.push(print3);
//    actieLijst4.push(print1);
//
//    //program run start state
//    std::unique_ptr<state::state> state4 = std::make_unique<state::state>(actieLijst1);
//    std::unique_ptr<state::state> state3 = std::make_unique<state::state>(std::move(state4), actieLijst2);
//    std::unique_ptr<state::state> state2 = std::make_unique<state::state>(std::move(state3), actieLijst3);
//    std::unique_ptr<state::state> state1 = std::make_unique<state::state>(std::move(state2), actieLijst4);

    return 0;
}
