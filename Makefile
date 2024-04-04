build: 
	g++ -o main main.cpp gouodlib/GouodLang/Core/Lexer.cpp gouodlib/GouodLang/Core/Interpreter.cpp gouodlib/GouodLang/Core/Function.cpp
	./main