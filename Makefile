build: 
	g++-10 -std=c++20 -o main main.cpp gouodlib/GouodLang/Core/Lexer.cpp gouodlib/GouodLang/Core/Interpreter.cpp gouodlib/GouodLang/Core/Function.cpp gouodlib/GouodLang/GouodLang.cpp
	./main