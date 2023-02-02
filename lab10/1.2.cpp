#include <iostream>
using namespace std;

void display (char text [], const int size);
void rotateLeft (char text [], const int size);

int main ()
{
    const int textLength = 15;

    char greenText1 [textLength] = {'P' , 'R', 'O', 'G', 'R', 'A', 'M', 'M', 'I', 'N', 'G', ' ', ' ', ' ', ' '};

    char greenText2 [textLength] = {'I' , 'S', ' ', 'F', 'U', 'N', '!', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    display (greenText1, textLength);
    rotateLeft (greenText1, textLength);
    display (greenText1, textLength);
    rotateLeft (greenText1, textLength);
    display (greenText1, textLength);
    rotateLeft (greenText1, textLength);
    display (greenText1, textLength);
    rotateLeft (greenText1, textLength);
    display (greenText1, textLength);
    rotateLeft (greenText1, textLength);

    display (greenText2, textLength);

    return 0;
}

void display (char text [], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << text [i];
    }

    cout << endl;
}

void rotateLeft (char text [], const int size)
{
    int tempChar = text [0];

    for (int i = 0; i < size - 1; i++)
    {
        text [i] = text [i + 1];
    }

    text [size - 1] = tempChar;
}