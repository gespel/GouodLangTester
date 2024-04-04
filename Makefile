build:
	g++ -o main main.cpp gouodlib/GouodLang/Lexer.cpp gouodlib/GouodLang/Interpreter.cpp gouodlib/GouodLang/Function.cpp
	./main