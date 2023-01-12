#include "strings.hpp"

string Text—ompression(string str, string alphabet, string signs) {
    bool situationsWithSigns;
    size_t i;
    i = str.find_first_of(alphabet);
    while (i < str.size()) {
        {
            situationsWithSigns = signs.size() > signs.find(str[i + 1]);
        }
        if (str[i] == str[i + 1] || situationsWithSigns) {
            i = str.find(" ", i);
            str.erase(str.begin() + i);
        }
        else {
            if (i + 1 == str.size()) {
                str.erase(str.begin() + i);
            }
            else {
                i = str.find(" ", i + 1);
            }
        }
    }
    return str;
}

string DeletingComments(string str) {
    size_t i = 0;
    size_t end = 0;
   while (i < str.size()) {
       i = str.find("//");
       end = (str.find('\n', i) + 1) - i;
       if (i < str.size()) {
           str.erase(i, end);
       }
   }
   i = 0;
   while (i < str.size()) {
       i = str.find("/*");
       end = (str.find("*/", i) + 2) - i;
       if (i < str.size()) {
           str.erase(i, end);
       }
   }
    
    return str;
}

string SearchAndSelection(string str1, string str2) {
    size_t i = 0;
    size_t end = 0;
    while (i < str1.size()) {
        i = str1.find(str2, i);
        end = str2.size() + i;
        
        if (i < str1.size()) {
            str1.insert(end, ")");
            str1.insert(i, "(");
            if (end ==  i + 1) {
                i = end + 1;
            }
            else {
                i = end;
            }
        }
    }
    return str1;
}