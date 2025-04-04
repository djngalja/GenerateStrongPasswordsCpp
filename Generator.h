#ifndef GENERATOR_H_INCLUDED
#define GENERATOR_H_INCLUDED

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <map>
#include <algorithm>
#include <random>

class Generator {
    std::vector<std::string> m_input_vector;
    std::vector<std::string> m_temp_vector;
    std::size_t m_length;
    const std::string m_special_chars = "'-!\"#$%&()*,./:;?@[]^_`{|}~+<=>";
    void ResizeVector();
    void CopyVector(std::vector<std::string> &temp_vector, std::size_t length);
    bool ContainsDigits();
    bool ContainsLetters();
    bool ContainsUpperCase();
    bool ContainsLowerCase();
    bool ContainsLowerCase(const std::string &str);
    bool ContainsChar(char c);
    bool ContainsSpecialChar();
    bool ContainsSpecialChar(const std::string &str);
    void AddDigitsOrLetters(bool add_letters = false);
    void AddLowerOrUpperCase(bool add_upper = false);
    char RandomSpecialChar();
    char RandomLowerCase();
    char RandomUpperCase();
    char RandomDigit();
    char RandomChar();
    char AddChar(const std::string &str, bool last = false);
    std::string JoinVector();
    void FinalCheck(std::string &str);
    void ReplaceChar(std::string &str, char c);
    void Test();
public:
    Generator();
    void SetInput();
    void SetLength();
    void GeneratePassword();
};

// helper functions:
void shuffle_vec(std::vector<std::string>&);
bool has_digit(const std::string&);
bool has_up_case(const std::string&);
bool get_questions(const std::string&, std::vector<std::string>&);
std::vector<std::string> get_input();
std::size_t get_len();
void split_input(const std::string&, std::vector<std::string>&);

#endif // GENERATOR_H_INCLUDED
