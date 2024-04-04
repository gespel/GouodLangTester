#include "gouodlib/GouodLang/Lexer.h"
#include "gouodlib/GouodLang/Interpreter.h"

int main() {
    Lexer l;
    Interpreter i;
    i.interpret(l.tokenize("function asd() { x2 = 4 + 1; return x2; } x3 = asd();"));
    i.printDebug();

    return 0;
}