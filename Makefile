build:
	clang++ -o main main.cpp gouodlib/GouodLang/Lexer.cpp gouodlib/GouodLang/Interpreter.cpp
	./main