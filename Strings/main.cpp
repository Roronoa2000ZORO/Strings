#include "strings.hpp"

int main() {
    setlocale(LC_ALL, "ru");
    
    //������� (����������)
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //������� ������� �� ������� ������� ����� ���� ��� ������������� ��������� ���. �����
    string signs = ".,!?:;";
    string Separation = "";

    cout << Separation.assign(100, '*') << endl;
    //������� 1
    string str1 = "    Meteorite      crashed on   my  head    !  ";
    cout << "������� 1\n" << "|"<< str1 << "|" << "\n" << "------------------" << endl;
    cout << "|" << Text�ompression(str1, alphabet, signs) << "|\n" << endl;
    cout << Separation.assign(100, '*') << endl;

    //������� 2
    string str2 = "//Start\nint main() {\n    int sum = 5 + 6;\n    std::cout << sum  << \" \" << 5 * 6/*������������� ������ ����� ����� 30*/ << std::endl;\n    /*����� ������� � ���\n    int sum2 = 5 * 6;\n    std::cout << sum  << \" \" << sum2 << std::endl;*/\n\n    return 0;// End\n\n}";
    cout << "������� 2\n" << str2 << "\n" << "------------------" << endl;
    cout << DeletingComments(str2) << "\n" << endl;
    cout << Separation.assign(100, '*') << endl;

    //������� 3
    string str3_1 = "agreement disagreement agreeable t� disagree agreeableness disagreeable agreeably";
    string str3_2 = "agree";
    cout << "������� 3\n" << str3_1 << " | " << str3_2 << "\n" << "------------------" << endl;
    cout << SearchAndSelection(str3_1, str3_2) << "\n" << endl;
    cout << Separation.assign(100, '*') << endl;

    return 0;
}