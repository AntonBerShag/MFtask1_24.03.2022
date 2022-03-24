#pragma once
#include <iostream>
#include <string>

struct DB {
	std::string titel;
	int notesCount = 0;
	std::string notes;
};

void addNote(DB& base);
void clearNotes(DB& base);
void showDB(DB& base);