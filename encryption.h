#ifndef ENCRYPTION_H
#define ENCRYPTION_H

#include <string>

using namespace std;

bool performCaesarCipher(std::string& content, bool encrypt);
bool encryptFile(const string& filename, bool encrypt);

#endif // ENCRYPTION_H