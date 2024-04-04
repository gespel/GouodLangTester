#include "gouodlib/GouodLang/Core/Lexer.h"
#include "gouodlib/GouodLang/Core/Interpreter.h"

int main() {
    Lexer l;
    Interpreter i;
    i.interpret(l.tokenize("function asd() { x2 = 2; return x2; } x3 = asd(); x = 7 + 7; x; 8;"));
    i.printDebug();

    return 0;
}