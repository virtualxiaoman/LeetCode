//
//// Created by virtualС�� on 2025/3/14.
//
//#include <iostream>
//#include <string>
//
//int main() {
//    // ʾ�� 1: slow С�ڵ�ǰ�ַ�������
//    std::string str1 = "hello";
//    std::cout << "ԭʼ�ַ���: " << str1 << "|||����: " << str1.length() << std::endl;
//
//    int slow1 = 3;
//    str1.resize(slow1);
//    std::cout << "�������ַ���: " << str1 << "|||����: " << str1.length() << std::endl;
//
//    // ʾ�� 2: slow ���ڵ�ǰ�ַ�������
//    std::string str2 = "world";
//    std::cout << "\nԭʼ�ַ���: " << str2 << "|||����: " << str2.length() << std::endl;
//
//    int slow2 = 10;
//    str2.resize(slow2);
//    std::cout << "�������ַ���: ";
//    for (char c : str2) {
//        std::cout << c;
//    }
//    std::cout << "|||����: " << str2.length() << std::endl;
//
//    return 0;
//}