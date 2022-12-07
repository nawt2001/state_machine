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


std::queue<Actions::iAction*> actieLijstPrintAlfabet;





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
