#include <Arduino.h>

char a, b;
int c, d;
char e[8] = {1, 2, 3, 4, 5, 6, 7, 8};
long f, g;
int h[2][2];
char s[6] = "Hello";

// variables
void setup()
{
    a = 55;
    b = 82;
    c = a * b;
    d = (a - b) * 100;
    h[0][0] = e[0];
    h[0][1] = e[2];
    h[1][0] = e[4];
    h[1][1] = e[6];
    f = 12345 * a;
    g = 87654 * b;

    Serial.begin(9600);

    // 列出變數名稱、記憶體位址和數值
    Serial.println("變數名稱\t記憶體位址\t數值");
    Serial.print("a\t\t"); Serial.print((int)&a, HEX); Serial.print("\t\t"); Serial.println((int)a);
    Serial.print("b\t\t"); Serial.print((int)&b, HEX); Serial.print("\t\t"); Serial.println((int)b);
    Serial.print("c\t\t"); Serial.print((int)&c, HEX); Serial.print("\t\t"); Serial.println(c);
    Serial.print("d\t\t"); Serial.print((int)&d, HEX); Serial.print("\t\t"); Serial.println(d);
    for (int i = 0; i < 8; i++) {
        Serial.print("e["); Serial.print(i); Serial.print("]\t\t"); Serial.print((int)&e[i], HEX); Serial.print("\t\t"); Serial.println((int)e[i]);
    }
    Serial.print("f\t\t"); Serial.print((int)&f, HEX); Serial.print("\t\t"); Serial.println(f);
    Serial.print("g\t\t"); Serial.print((int)&g, HEX); Serial.print("\t\t"); Serial.println(g);
    Serial.print("h[0][0]\t\t"); Serial.print((int)&h[0][0], HEX); Serial.print("\t\t"); Serial.println(h[0][0]);
    Serial.print("h[0][1]\t\t"); Serial.print((int)&h[0][1], HEX); Serial.print("\t\t"); Serial.println(h[0][1]);
    Serial.print("h[1][0]\t\t"); Serial.print((int)&h[1][0], HEX); Serial.print("\t\t"); Serial.println(h[1][0]);
    Serial.print("h[1][1]\t\t"); Serial.print((int)&h[1][1], HEX); Serial.print("\t\t"); Serial.println(h[1][1]);
    Serial.print("s\t\t"); Serial.print((int)&s, HEX); Serial.print("\t\t"); Serial.println(s);
}

void loop()
{
}