#include <iostream>
using namespace std;
int knife = 0;
int  lantern = 0;
int matches = 0;
int playerHP = 20;
int damage = 0;
int damage2 = 0;
int roomChoose;
int pots = 0;
int foobreze = 0;
int pencil = 0;
int pencilUsage = 0;
int mathRoom = 0;
int gun = 0;
int bullets = 0;
int flashlight = 0;
string first;
string second;
int pencilChoose;
void Battle(string enemyName, int enemyHP, int enemyATK)
{
    cout << "You encountered " << enemyName << "! Time to fight!" << endl;
    cout << "Your health is " << playerHP << "." << endl;
    while (playerHP > 1 && enemyHP > 1)
    {
        int choose;
        cout << "Press 0 to punch. ";
        if (knife == 1)
        {
            cout << "Press 1 to use knife. ";
        }
        else
        {
        }
        
        if (lantern == 1)
        {
            cout << "Press 2 to use lantern. ";
        }
        else
        {
        }
        if (foobreze == 1)
        {
            cout << "Press 3 to use foobreze. ";
        }
        else
        {
        }
        if (pencil == 1)
        {
            cout << "Press 4 to use the pencil. ";
        }
        else
        {
        }
        if (gun == 1)
        {
            cout << "Press 5 to use the gun. ";
        }
        else
        {
        }
        if (flashlight == 1)
        {
            cout << "Press 6 to use the flashlight ";
        }
        // add more weapons as we add more.
        cin >> choose;
        
        if (choose == 0)
        {
            if (enemyName == "Dr. Eithers")
            {
                cout << "You watch as your fist passes through her!" << endl;
                cout << "Mwa ha ha! I am the GRIM REAPER!" << endl;
            }
            else
            {
                cout << "You punched the enemy!" << endl;
                enemyHP -= 5;
                damage += 5;
            }
        }
        // punch.
        else if (choose == 1)
        {
            if (knife == 1)
            {
                if (enemyName == "Dr. Eithers")
                {
                    cout << "You watch as your knife passes through her!" << endl;
                    cout << "Mwa ha ha! I am the GRIM REAPER! You need light to defeat me!" << endl;
                }
                else
                {
                    cout << "You used the knife!" << endl;
                    enemyHP -= 7;
                    damage += 7;
                }
            }
            else
            {
                cout << "You don't have that..." << endl;
            }
        }
        // knife.
        if (choose == 2)
        {
            if (lantern == 1)
            {
                if (matches > 0)
                {
                    cout << "You lit the lantern!" << endl;
                    matches--;
                    if (enemyName == "Dr. Eithers")
                    {
                        cout << "That did damage!" << endl;
                        enemyHP -= 15;
                    }
                    else
                    {
                        cout << "That doesn't affect this enemy..." << endl;
                    }
                }
                else
                {
                    cout << "You don't have enough matches..." << endl;
                }
            }
            else
            {
                cout << "You don't have that..." << endl;
            }
        }
        // lantern.
        else if (choose == 3)
        {
            if (foobreze == 1)
            {
                if (enemyName == "Dr. Eithers")
                {
                    cout << "That did a lot of damage!" << endl;
                    cout << "ARRRRRRGH!!!" << endl;
                    enemyHP -= 50;
                    damage += 50;
                }
                else
                {
                    cout << "You used the foobreze!" << endl;
                    enemyHP -= 10;
                    damage += 10;
                }
            }
            else
            {
                cout << "You don't have that..." << endl;
            }
        }
        // foobreze.
        if (choose == 4)
        {
            if (pencil == 1)
            {
                if (pencilUsage == 0)
                {
                    if (enemyName == "Dr. Eithers")
                    {
                        cout << "You watch as your pencil passes through her!" << endl;
                        cout << "Mwa ha ha! I am the GRIM REAPER! You need light to defeat me!" << endl;
                        pencilUsage = 1;
                    }
                    cout << "You threw the pencil!" << endl;
                    enemyHP -= 60;
                    damage += 60;
                    pencilUsage = 1;
                }
                else
                {
                    cout << "You already threw the pencil!" << endl;
                }
            }
            else
            {
                cout << "You don't have that..." << endl;
            }
        }
        // pencil.
        
        else if (choose == 5)
        {
            if (gun == 1)
            {
                if (bullets > 0)
                {
                    if (enemyName == "Dr. Eithers")
                    {
                        cout << "You watch as the bullet passes through her!" << endl;
                        cout << "Mwa ha ha! I am the GRIM REAPER! You need light to defeat me!" << endl;
                        bullets--;
                    }
                    cout << "You used the gun!" << endl;
                    enemyHP -= 15;
                    damage += 15;
                    bullets -= 1;
                }
                else
                {
                    cout << "You don't have enough bullets..." << endl;
                }
            }
            else
            {
                cout << "You don't have that..." << endl;
            }
        }
        // gun.
        
        if (choose == 6)
        {
            if (flashlight == 1)
            {
                if (enemyName == "Dr. Eithers")
                {
                    cout << "That did damage!" << endl;
                    enemyHP -= 10;
                    damage += 10;
                }
                else
                {
                    cout << "You used the flashlight!" << endl;
                    cout << "It doesn't affect this enemy..." << endl;
                }
            }
            else
            {
                cout << "You don't have that..." << endl;
            }
        }
        
        //add more weapons as we make more.
        cout << "Enemy's health is " << enemyHP << endl;
        cout << "Enemy's turn!" << endl;
        playerHP -= enemyATK;
        damage2 += enemyATK;
        cout << "Your health is " << playerHP << "." << endl;
    }
    if (playerHP < 1)
    {
        cout << "You lost! Restarting battle now." << endl;
        playerHP += damage2;
        enemyHP += damage;
        damage2 = 0;
        damage = 0;
        Battle(enemyName, enemyHP, enemyATK);
    }
    else 
    {
        cout << "You won!" << endl;
        playerHP += damage2;
        damage = 0;
        damage2 = 0;
    }
}

void Bedroom();
void Kitchen();
void Basement();
void LeaveTheHouse();

void Bedroom()
{
    cout << "You are in your bedroom. Press 0 to go to the kitchen. ";
    cout << "Press 1 to go to the basement. ";
    cout << "Press 2 to go to school ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        Kitchen();
    }
    else if (roomChoose == 1)
    {
        Basement();
    }
    if (roomChoose == 2)
    {
        LeaveTheHouse();
    }
    else
    {
    }
}

void Kitchen()
{
   cout << "You are in the kitchen. Press 0 to loot the kitchen. ";
   cout << "Press 1 to go to the bedroom. ";
   cout << "Press 2 to go to the basement. ";
   cout << "Press 3 to go to school. ";
   cin >> roomChoose;
   if (roomChoose == 0)
   {
       if (knife == 0)
       {
           cout << "You got the knife!" << endl;
           knife = 1;
           Kitchen();
       }
       else
       {
           cout << "You already looted the kitchen." << endl;
           Kitchen();
       }
   }
   else if (roomChoose == 1)
   {
       Bedroom();
   }
   if (roomChoose == 2)
   {
       Basement();
   }
   else if(roomChoose == 3)
   {
       LeaveTheHouse();
   }
}

void Basement()
{
    cout << "You are in the basement. Press 0 to loot the basement. ";
    cout << "Press 1 to go to the bedroom. ";
    cout << "Press 2 to go to the kitchen. ";
    cout << "Press 3 to go to school. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        if (lantern == 0)
        {
            cout << "You got a lantern and 6 matches!" << endl;
            lantern = 1;
            matches = 6;
            Basement();
        }
        else
        {
            cout << "You already looted the basement." << endl;
            Basement();
        }
    }
    else if (roomChoose == 1)
    {
        Bedroom();
    }
    if (roomChoose == 2)
    {
        Kitchen();
    }
    else if (roomChoose == 3)
    {
        LeaveTheHouse();
    }
}

void LeaveTheHouse()
{
    cout << "You tried to leave, but your mom stopped you!" << endl;
    Battle("mom", 20, 5);
}
void Hallway();
void Cafeteria(); 
void Science();
void History();
void Math();
void Gym();
void TortureArea();

void Hallway()
{
    cout << "You are in the hallway. Press 0 to continue walking. ";
    cout << "Press 1 to go to the cafeteria. ";
    cout << "Press 2 to go to the science room. ";
    cout << "Press 3 to go to the history room. ";
    cout << "Press 4 to go to the math room. ";
    cout << "Press 5 to go to the gym. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        TortureArea();
    }
    else if (roomChoose == 1)
    {
        Cafeteria();
    }
    if (roomChoose == 2)
    {
        Science();
    }
    else if (roomChoose == 3)
    {
        History();
    }
    if (roomChoose == 4)
    {
        Math();
    }
    else if (roomChoose == 5)
    {
        Gym();
    }
}

void Cafeteria()
{
    cout << "You are in the cafeteria. Press 0 to loot the cafeteria. ";
    cout << "Press 1 to go to the hallway. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        if (pots == 0)
        {
            pots = 1;
            playerHP += 20;
            cout << "You found pots and pans!" << endl;
            cout << "You tried to loot the cafeteria, but a lunch lady stopped you!" << endl;     
            Battle("lunch lady", 25, 7);
            Cafeteria();
        }
        else
        {
            cout << "You already looted the cafeteria..." << endl;
            Cafeteria();
        }
    }
    else if (roomChoose == 1)
    {
        Hallway();
    }
}
// end of cafeteria.

void Science()
{
    cout << "You are in the science room. Press 0 to loot the science room. ";
    cout << "Press 1 to go to the hallway. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        if (foobreze == 0)
        {
            cout << "You smell a sickeningly sweet scent..." << endl;
            cout << "Agh! Did somebody fart!? Aaaaaagh!!! Erase it! Erase it all!!!" << endl;
            cout << "Hey! Who are you?! Did you fart!? Aaaaaaaagh!!!" << endl;
            Battle("Mrs Roomos, the science room", 25, 9);
            cout << "Hey! How dare you defeat my room!" << endl;
            Battle("Ms. Broom", 20, 7);
            cout << "You got extremly powerful foobreze!" << endl;
            foobreze = 1;
            Science();
        }
        else
        {
            cout << "You already looted the science room..." << endl;
            Science();
        }
    }
    else if (roomChoose == 1)
    {
        Hallway();
    }
}
// end of science room.

void History()
{
    cout << "You are in the history room. Press 0 to loot the history room. ";
    cout << "Press 1 to go to the hallway. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        if (pencil == 0)
        {
            cout << "As you were looting the history room, you heard a man talk to you. " << endl;
            cout << "Hey! Do you like Twicondaoga, the pencil brand? " << endl;
            cout << "Press 0 for yes. Press 1 for no. ";
            cin >> pencilChoose;
            if (pencilChoose == 0)
            {
                cout << "Good student! Here you go!" << endl;
                cout << "You got a pencil!" << endl;
                pencil = 1;
                History();
            }
            else if (pencilChoose == 1)
            {
                cout << "What?! Why, you..." << endl;
                Battle("Mr. Splitspleen", 30, 9);
                cout << "You got the pencil!" << endl;
            }
        }
        else
        {
            cout << "You already looted the history room..." << endl;
            History();
        }
    }
    else if (roomChoose == 1)
    {
        Hallway();
    }
}
// end of history room.

void Math()
{
    cout << "You are in the math room. Press 0 to loot the math room. ";
    cout << "Press 1 to go to the hallway. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        if (mathRoom == 0)
        {
            cout << "You tried to loot the math room, but a teacher stopped you!" << endl;
            cout << "SIT DOWN NOW!!!!!!" << endl;
            Battle("Ms Gondalas", 30, 7);
            cout << "You hear a phone ringing, so you decide to pick it up." << endl;
            cout << "Hello! This is the Kill Anyone in a Room Service! (KARS) Who would you like us to kill? Please make it a two letter name. ";
            cin >> first;
            cin >> second;
            cout << "Thank you. We have accepted your call." << endl;
            Math();
        }
        else
        {
            cout << "You already looted the math room..." << endl;
            Math();
        }
    }
    else if (roomChoose == 1)
    {
        Hallway();
    }
    
}
// end of math room.

void Gym()
{
    cout << "You tried to enter the gym, but you were blown away by a blast of stinky gas!" << endl;
    cout << "Behold the power of the fart! I am the FOOFURMAN!!!" << endl;
    Battle("the Foofurman", 40, 6);
    cout << "LOL! I'm never defeated!" << endl;
    cout << "You were blown back into the hallway!" << endl;
    Hallway();
}
// end of gym.
void TortureArea()
{
    cout << "You are seen eating a doughnut in the hallway. Hey! Iz me! Mr Chaimberz! Why u doin that! Only eat at the tables! U gyet a detenzion!" << endl;
    Battle("mr chaimberz", 30, 10);
}\
// end of tourture area.
void TourtureAreaProgress()
{
    cout << "Press 0 to explore a little. Press 1 to progress forward. ";
    cin >> roomChoose;
    if (roomChoose == 0)
    {
        if (gun == 1)
        {
            cout << "You've already explored..." << endl;
        }
        else
        {
            cout << "You got the gun and six bullets!" << endl;
            gun = 1;
            bullets = 6;
            cout << "As you try to leave a flashlight shines on you..." << endl;
            cout << "Get out! You rat!" << endl;
            Battle("Random Guy", 90, 2);
            cout << "You got a flashlight!" << endl;
            flashlight = 1;
            TourtureAreaProgress();
        }
    }
    else if (roomChoose == 1)
    {
        
        cout << "Do you know why I took your teddy bear?" << endl;
        cout << "He wasn't wearing his uniform! It's a Monday! And you know..." << endl;
        cout << "YOU'RE NOT WEARING A UNIFORM, EITHER!!" << endl;
        Battle("Dr. Eithers", 100, 5);
        cout << "You got your teddy bear back!" << endl;
    }
}
// end of tourture area.
int main()
{
    cout << "Your school principal has stolen your teddy bear! Get it back!" << endl;
    Bedroom();
    cout << "You decide to ride your fish to school. After five years of riding to school, your fish breaks down and turns into murderous max the doughnut. He is just a normal doughnut, but you decide to fight him anyway." << endl;            ;
    Battle("harmless murderous max the doughnut", 10, 0);
    cout << "you luckily broke down right in front of your school, so you walk in." << endl;
    Hallway();
    cout << "You enter a back area of the school you have never seen before." << endl;
    cout << "As you take a step forward, a gate closes behind you. You are trapped." << endl;
    TourtureAreaProgress();
    cout << "This game was made by Conspiracy Games." << endl;
    cout << "Game design by Brian Bieber and Jacob Sousa" << endl;
    cout << "Thank you for playing! Play more of our games in the future!" << endl;
    return 0;
}
