//
//// Created by virtual小满 on 2025/3/14.
//
//#include <iostream>
//#include <string>
//
//int main() {
//    // 示例 1: slow 小于当前字符串长度
//    std::string str1 = "hello";
//    std::cout << "原始字符串: " << str1 << "|||长度: " << str1.length() << std::endl;
//
//    int slow1 = 3;
//    str1.resize(slow1);
//    std::cout << "调整后字符串: " << str1 << "|||长度: " << str1.length() << std::endl;
//
//    // 示例 2: slow 大于当前字符串长度
//    std::string str2 = "world";
//    std::cout << "\n原始字符串: " << str2 << "|||长度: " << str2.length() << std::endl;
//
//    int slow2 = 10;
//    str2.resize(slow2);
//    std::cout << "调整后字符串: ";
//    for (char c : str2) {
//        std::cout << c;
//    }
//    std::cout << "|||长度: " << str2.length() << std::endl;
//
//    return 0;
//}