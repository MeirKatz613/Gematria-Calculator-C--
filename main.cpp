#include <iostream>
#include <unordered_map>
#include <string>
[[maybe_unused]] std::string AskGematria(){
    std::cout << "What do you want the gematria of?\n";
    std::string Gematria;
    std::getline(std::cin, Gematria);
    return Gematria;

}


[[maybe_unused]] int ConvertLetters(const std::string & Letters){
//    Converts letters to numerical value.
    std::unordered_map <char, double > Gematria_Values = {
            {' ', 0},
            {'א', 1},
            {'ב',  2},
            {'ג', 3},
            {'ד', 4},
            {'ה', 5},
            {'ו', 6},
            {'ז', 7},
            {'ח', 8},
            {'ט', 9},
            {'י', 10},
            {'כ', 20},
            {'ך', 20},
            {'ל', 30},
            {'מ', 40},
            {'מ', 40},
            {'ם', 40},
            {'נ', 50},
            {'ן', 50},
            {'ס', 60},
            {'ע', 70},
            {'פ', 80},
            {'ף', 80},
            {'צ', 90},
            {'ץ', 90},
            {'ק', 100},
            {'ר', 200},
            {'ש', 300},
            {'ת', 400}
    };

// Creates string Gematria

//    converts to uppercase
//            transform(Gematria.begin(), Gematria.end(), Gematria.begin(),::toupper);
//std::cin >> Gematria;
    int sum = 0;
    for (auto ch : Letters)
        sum += Gematria_Values[ch];
    return sum;
}

void PrintGematria(){
    std::string Gematria = AskGematria();
           if(!Gematria.empty()){
               std::cout << "The gematria of " << Gematria << " is " << ConvertLetters(Gematria) << " \n";
               std::cout << "Enter nothing to end program.\n";
               PrintGematria();
           }
           else {
               std::cout << "Hope you enjoyed\n";
           }

}

int main() {
//    Gives the value to the user.
    PrintGematria();
    return 0;
}
