#include <iostream>
#include <string>

using namespace std;

int main(){

    string  firstName = "JAI";
    string about = "This is about \"my\" life";

    cout << firstName << endl;
    cout << about << endl;



    return 0;
}

// \a	Bell (alert)
// \b	Backspace
// \f	Form feed
// \n	New line
// \r	Carriage return
// \t	Horizontal tab
// \v	Vertical tab
// \'	Single quotation mark
// \"	Double quotation mark
// \\	Backslash
// \?	Literal question mark
// \ ooo	ASCII character in octal notation
// \x hh	ASCII character in hexadecimal notation
// \x hhhh	Unicode character in hexadecimal notation if this escape sequence is used in a wide-character constant or a Unicode string literal.

// For example, WCHAR f = L'\x4e00' or WCHAR b[] = L"The Chinese character for one is \x4e00".