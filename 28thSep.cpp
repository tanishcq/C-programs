// demonstrate inheritence
#include <iostream>
#define string std::string
#define coute(x) std::cout << x << std::endl
#define coutes(x, y) std::cout << x << " and " << y << std::endl

class guitar {
  public:       
    string play = "starting playing!";
    void strum() {
      coute("Tun tun tun tun tun....");
    }
};

class chords: public guitar {
  public:
    string amp = "Amp connected";
};

int main(){
    system("cls");
    chords music;
    coutes(music.amp, music.play);
    music.strum();
    return 0;
}