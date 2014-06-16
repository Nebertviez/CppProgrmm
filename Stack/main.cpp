#include "Stack.hpp"

int main()
{
    Stack<int> s_int(5);
    Stack<std::string> s_string(5);
    s_int.push(1);
    s_int.push(2);
    s_int.push(3);
    s_int.push(4);
    s_int.push(5);

    std::cout << s_int << std::endl;

    std::cout << s_int.pop() << std::endl;
    std::cout << s_int.pop() << std::endl;

    std::cout << s_int << std::endl;

    s_string.push("one");
    s_string.push("two");
    s_string.push("three");
    s_string.push("four");
    s_string.push("five");

    std::cout << s_string << std::endl;

    std::cout << s_string.pop() << std::endl;
    std::cout << s_string.pop() << std::endl;

    std::cout << s_string << std::endl;
    
    Stack<char> st(2);

    st.push('a');
    st.push('b');
    std::cout << st << std::endl;

    return 0;
}
