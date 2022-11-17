#ifndef ALGORITHMS_AND_DATA_STRUCTURES_LABS_FORM4_H
#define ALGORITHMS_AND_DATA_STRUCTURES_LABS_FORM4_H

#define WORD_SEPARATOR ' '

typedef struct str {
    char s[1024];
    unsigned N;
} String;

typedef String *string1;

void WriteToStr(string1 st, const char *s);
void WriteFromStr(char *s, string1 st);

void InputStr(string1 st);
void OutputStr(string1 st);

int Comp(string1 s1, string1 s2);

void Delete(string1 s, unsigned Index, unsigned Count);
void Insert(string1 s1, string1 s, unsigned Index);
void Concat(string1 s1, string1 s2, string1 srez);
void Copy(string1 s, unsigned Index, unsigned Count, string1 Subs);

unsigned Length(string1 s);
unsigned Pos(string1 SubS, string1 s);

int StrError;                                                           // Переменная ошибок


string1 *SudWord(char *s, unsigned n);

#endif
