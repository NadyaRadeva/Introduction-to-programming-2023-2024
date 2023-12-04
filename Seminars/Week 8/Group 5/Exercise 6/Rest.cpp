#include <iostream>
#include <cstring>

void eraseNth(char* originalStr, const char* toRemove, size_t n) {
    size_t originalLen = std::strlen(originalStr);
    size_t toRemoveLen = std::strlen(toRemove);

    char* foundPos = originalStr;
    for (size_t i = 0; i < n; ++i) {
        foundPos = std::strstr(foundPos, toRemove);
        if (foundPos == nullptr) {
            // Break if the substring is not found
            break;
        }
        ++foundPos; // Move to the next character to avoid finding the same occurrence
    }

    if (foundPos != nullptr) {
        size_t pos = foundPos - originalStr - 1;
        for (size_t i = pos; i < originalLen - toRemoveLen; ++i) {
            originalStr[i] = originalStr[i + toRemoveLen];
        }
        originalStr[originalLen - toRemoveLen] = '\0';
    }
}

void eraseAll(char* originalStr, char toRemove) {
    size_t originalLen = std::strlen(originalStr);
    size_t shift = 0;

    for (size_t i = 0; i < originalLen; ++i) {
        if (originalStr[i] == toRemove) {
            ++shift;
        } else {
            originalStr[i - shift] = originalStr[i];
        }
    }

    originalStr[originalLen - shift] = '\0';
}

void replaceFirst(char* originalStr, const char* toReplace, const char* replacement) {
    size_t originalLen = std::strlen(originalStr);
    size_t toReplaceLen = std::strlen(toReplace);
    size_t replacementLen = std::strlen(replacement);

    char* foundPos = std::strstr(originalStr, toReplace);

    if (foundPos != nullptr) {
        size_t pos = foundPos - originalStr;
        for (size_t i = pos; i < pos + replacementLen; ++i) {
            originalStr[i] = replacement[i - pos];
        }
        for (size_t i = pos + replacementLen; i < originalLen; ++i) {
            originalStr[i] = originalStr[i + toReplaceLen - replacementLen];
        }
        originalStr[originalLen - toReplaceLen + replacementLen] = '\0';
    }
}

void replaceNth(char* originalStr, const char* toReplace, const char* replacement, size_t n) {
    size_t originalLen = std::strlen(originalStr);
    size_t toReplaceLen = std::strlen(toReplace);
    size_t replacementLen = std::strlen(replacement);

    char* foundPos = originalStr;
    for (size_t i = 0; i < n; ++i) {
        foundPos = std::strstr(foundPos, toReplace);
        if (foundPos == nullptr) {
            // Break if the substring is not found
            break;
        }
        ++foundPos; // Move to the next character to avoid finding the same occurrence
    }

    if (foundPos != nullptr) {
        size_t pos = foundPos - originalStr - 1;
        for (size_t i = pos; i < pos + replacementLen; ++i) {
            originalStr[i] = replacement[i - pos];
        }
        for (size_t i = pos + replacementLen; i < pos + replacementLen + toReplaceLen - replacementLen; ++i) {
            originalStr[i] = originalStr[i + toReplaceLen - replacementLen];
        }
        originalStr[originalLen - toReplaceLen + replacementLen] = '\0';
    }
}

void replaceAll(char* originalStr, char toReplace, char replacement) {
    size_t originalLen = std::strlen(originalStr);

    for (size_t i = 0; i < originalLen; ++i) {
        if (originalStr[i] == toReplace) {
            originalStr[i] = replacement;
        }
    }
}

int main() {
    char originalStr[] = "Hello, World! Hello, Universe! Hello, World!";
    const char* toRemove = "Hello";
    const char* replacement = "Hi";

    std::cout << "Original: " << originalStr << std::endl;

    eraseNth(originalStr, toRemove, 2);
    std::cout << "After erasing second occurrence of \"" << toRemove << "\": " << originalStr << std::endl;

    eraseAll(originalStr, ' ');
    std::cout << "After erasing all spaces: " << originalStr << std::endl;

    replaceFirst(originalStr, "Hi", "Hello");
    std::cout << "After replacing the first occurrence of \"Hi\" with \"Hello\": " << originalStr << std::endl;

    replaceNth(originalStr, "Hi", "Hello", 2);
    std::cout << "After replacing the second occurrence of \"Hi\" with \"Hello\": " << originalStr << std::endl;

    replaceAll(originalStr, 'o', 'O');
    std::cout << "After replacing all occurrences of 'o' with 'O': " << originalStr << std::endl;

    return 0;
}
