#include "gouodlib/GouodLang/GouodLang.h"

int main() {
    GouodLang gl;
    //gl.interpretString("function asd() { x2 = 2; return x2; } x3 = asd(); x = 7 + 7; x; 8 + 7 + 3; asd();");
    gl.interpretFile("gouodlib/GouodLang/Examples/first.gouod");

    return 0;
}