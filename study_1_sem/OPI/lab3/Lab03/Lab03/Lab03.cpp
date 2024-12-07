#include <iostream>
//LitvinchukDarya2005
//4C 69 74 76 69 6E 63 68 75 6B 44 61 72 79 61 32 30 30 35
//4C 69 74 76 69 6E 63 68 75 6B 44 61 72 79 61 32 30 30 35
//004C 0069 0074 0076 0069 006E 0063 0068 0075 006B 0044 0061 0072 0079 0061 0032 0030 0030 0035

//ЛитвинчукДарья2005
//CB E8 F2 E2 E8 ED F7 F3 EA C4 E0 F0 FC FF 32 30 30 35
//D09B D0B8 D182 D0B2 D0B8 D0BD D187 D183 D0BA D094 D0B0 D180 D18C D18F 32 30 30 35
//041B 0438 0442 0432 0438 043D 0447 0443 043A 0414 0430 0440 044C 044F 0032 0030 0030 0035

//Литвинчук2005Darya
//CB E8 F2 E2 E8 ED F7 F3 EA 32 30 30 35 6B 44 61 72 79 61
//D09B D0B8 D182 D0B2 D0B8 D0BD D187 D183 D0BA 32 30 30 35 6B 44 61 72 79 61
//041B 0438 0442 0432 0438 043D 0447 0443 043A 0032 0030 0030 0035 4400 6100 7200 7900 6100

int main()
{
    int number = 0x12345678;
    char hello[] = "Hello, ";
    char lfie[] = "LitvinchukDarya2005";
    char rfie[] = "ЛитвинчукДарья2005";
    char lr[] = "Литвинчук2005Darya";

    wchar_t Lfie[] = L"litvinchukDarya2005";
    wchar_t Rfie[] = L"ЛитвинчукДарья2005";
    wchar_t LR[] = L"Литвинчук2005Darya";

    std::cout << hello << lfie << std::endl;
    return 0;
}

