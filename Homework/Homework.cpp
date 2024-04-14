
#include <iostream>
#include <string>



class Player {
public:
    void SetData(int number, const std::string& PlayerName) {
        points = number;
        name = PlayerName;
    }

    void GetData() const {
        std::cout << name << ": " << points << std::endl;
    }


    int points = 0;
    std::string name;
};

int main() {
    int quantity;

    std::cout << "¬ведите количество игроков: ";
    std::cin >> quantity;


    Player* PlayersList = new Player[quantity];

    for (int i = 0; i < quantity; i++) {
        std::string name;
        int points;

        std::cout << "¬ведите данные игрока " << i + 1 << "  (очки им€): ";
        std::cin >> points >> name;


        PlayersList[i].SetData(points, name);
    }


    for (int i = 0; i < quantity; i++)
    {
        for (int j = i + 1; j < quantity; j++) {
            if (PlayersList[i].points > PlayersList[j].points)
            {
                auto temp = PlayersList[i];
                PlayersList[i] = PlayersList[j];
                PlayersList[j] = temp;

            }
        }
    }



    for (int i = 0; i < quantity; i++)
    {
        PlayersList[i].GetData();
    }
 
}


