#include "gouodlib/GouodLang/Lexer.h"
#include "gouodlib/GouodLang/Interpreter.h"

int main() {
    Lexer l;
    Interpreter i;
    i.interpret(l.tokenize("function asd() { x2 = 2; return x2; } asd();"));
    i.printDebug();

    return 0;
}