#include "gouodlib/GouodLang/Lexer.h"
#include "gouodlib/GouodLang/Interpreter.h"

int main() {
    Lexer l;
    Interpreter i;
    i.interpret(l.tokenize("x = 3 + 2 * 2 * 2; y = x + 1 + 1;"));
    i.printDebug();

    return 0;
}