cmake_minimum_required(VERSION 3.22)
project(state_machine)

set(CMAKE_CXX_STANDARD 20)

add_executable(state_machine main.cpp state.cpp state.h iAction.h iTransitions.h Actions/LedOn.cpp Actions/LedOn.h Actions/print3.cpp Actions/print3.h Actions/print2.cpp
        Actions/print2.h Actions/print1.cpp Actions/print1.h
        Actions/PrintLetters/printLetterA.cpp Actions/PrintLetters/printLetterA.h
        Actions/PrintLetters/printLetterB.cpp Actions/PrintLetters/printLetterB.h
        Actions/PrintLetters/printLetterC.cpp Actions/PrintLetters/printLetterC.h
        Actions/PrintLetters/printLetterD.cpp Actions/PrintLetters/printLetterD.h
        Actions/PrintLetters/printLetterE.cpp Actions/PrintLetters/printLetterE.h
        Actions/PrintLetters/printLetterF.cpp Actions/PrintLetters/printLetterF.h
        Actions/PrintLetters/printLetterG.cpp Actions/PrintLetters/printLetterG.h
        Actions/PrintLetters/printLetterH.cpp Actions/PrintLetters/printLetterH.h
        Actions/PrintLetters/printLetterI.cpp Actions/PrintLetters/printLetterI.h
        Actions/PrintLetters/printLetterJ.cpp Actions/PrintLetters/printLetterJ.h
        Actions/PrintLetters/printLetterK.cpp Actions/PrintLetters/printLetterK.h
        Actions/PrintLetters/printLetterL.cpp Actions/PrintLetters/printLetterL.h
        Actions/PrintLetters/printLetterM.cpp Actions/PrintLetters/printLetterM.h
        Actions/PrintLetters/printLetterN.cpp Actions/PrintLetters/printLetterN.h
        Actions/PrintLetters/printLetterO.cpp Actions/PrintLetters/printLetterO.h
        Actions/PrintLetters/printLetterP.cpp Actions/PrintLetters/printLetterP.h
        Actions/PrintLetters/printLetterQ.cpp Actions/PrintLetters/printLetterQ.h
        Actions/PrintLetters/printLetterR.cpp Actions/PrintLetters/printLetterR.h
        Actions/PrintLetters/printLetterS.cpp Actions/PrintLetters/printLetterS.h
        Actions/PrintLetters/printLetterT.cpp Actions/PrintLetters/printLetterT.h
        Actions/PrintLetters/printLetterU.cpp Actions/PrintLetters/printLetterU.h
        Actions/PrintLetters/printLetterV.cpp Actions/PrintLetters/printLetterV.h
        Actions/PrintLetters/printLetterW.cpp Actions/PrintLetters/printLetterW.h
        Actions/PrintLetters/printLetterX.cpp Actions/PrintLetters/printLetterX.h
        Actions/PrintLetters/printLetterY.cpp Actions/PrintLetters/printLetterY.h
        Actions/PrintLetters/printLetterZ.cpp Actions/PrintLetters/printLetterZ.h
        Actions/PrintSpecialCharacters/printSpatie.cpp Actions/PrintSpecialCharacters/printSpatie.h
        Actions/PrintSpecialCharacters/printExclamationMark.h Actions/PrintSpecialCharacters/printExclamationMark.cpp
        Actions/PrintSpecialCharacters/printEndLine.cpp Actions/PrintSpecialCharacters/printEndLine.h
        program.cpp program.h program.h program.h)
