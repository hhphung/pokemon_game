
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
#include<string>
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include<ncurses.h>
#include <vector>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define height 21
#define width 80
#define worldX 399
#define worldY 399





typedef enum {
PC, hiker, rival, pacer, wanderer, stationary, walker
}player_type;



class stats{
private:
int id;
int damage_class_id;
string identifier;
int is_battle_only;
int game_index;

public:
void set_id(int i){
    id = i;
}
int get_id(){
    return id;
}
void set_damage_class_id(int i){
    damage_class_id = i;
}
int get_damage_class_id(){
    return damage_class_id;
}
void set_identifier(string i){
    identifier = i;
}
string get_identifier(){
    return identifier;
}
void set_is_battle_only(int i){
    is_battle_only = i;
}
int get_is_battle_only(){
    return is_battle_only;
}
void set_game_index(int i){
    game_index = i;
}
int get_game_index(){
    return game_index;
}



};

class pokemon_stats{
    private:
    int pokemon_id;
    int stat_id;
    int base_stat;
    int effort;

    public:
    void set_pokemon_id(int i){
        pokemon_id = i;
    }
    void set_stat_id(int i){
        stat_id = i;
    }

    void set_base_stat(int i){
        base_stat = i;
    }
    void set_effort(int i){
      effort  =i;  
    }

//
 int get_pokemon_id(){
        return pokemon_id;
    }
    int get_stat_id(){
        return stat_id;
    }

    int get_base_stat(){
        return base_stat;
    }
    int get_effort(){
      return effort;  
    }

};

class experience{
private:
int growth_rate_id;
int level;
int experience;
public:
void set_growth_rate_id(int i){
growth_rate_id= i;
}
void set_level(int i){
    level=i;
}
void set_experience(int i){
    experience=i;
}

//
int get_growth_rate_id(){
return growth_rate_id;
}
int get_level(){
    return level;
}
int get_experience(){
    return experience;
}


void print(){
    string output= to_string(growth_rate_id);
    if(growth_rate_id== -1){
      output="";
    }
    cout<<"Growth Rate ID: "<<output<<endl;  
    

    output=to_string(level);
    if(level == -1){
        output="";
    }
    cout<<"Level: "<<output<<endl;  

     output=to_string(experience);
    if(experience == -1){
        output="";
    }
    cout<<"Experience: "<<output<<endl;  

cout<<""<<endl;
}


};


class type_name{
private:
int type_id;
int local_language_id;
string name;

public:
void set_type_id(int i){
    type_id = i;
}
void set_local_language_id(int i){
    local_language_id = i;
}
void set_name(string i){
    name = i;
}

int get_type_id(){
    return type_id;
}
int get_local_language_id(){
   return local_language_id;
}
string get_name(){
    return name;
}


void print(){
    string output= to_string(type_id);
    if(type_id== -1){
      output="";
    }
    cout<<"Type ID: "<<output<<endl;  
    


    output=to_string(local_language_id);
    if(local_language_id == -1){
        output="";
    }
    cout<<"Local Language ID: "<<output<<endl;  

    cout<<"Identifier: "<<name<<endl;

cout<<""<<endl;
}

};


class poke_spec{
private:
int id;
string identifier;
int generation_id;
int evolves_from_species_id;
int evolution_chain_id;
int color_id;
int shape_id;
int habitat_id;
int gender_rate;
int capture_rate;
int base_happiness;
int is_baby;
int hatch_counter;
int has_gender_differences;
int growth_rate_id;
int forms_switchable;
int is_legendary;
int is_mythical;
int order;
int conquest_order;

public:
void set_id(int i){
    id = i;
}
void set_identifier(string i){
    identifier = i;
}
void set_generation_id(int i){
    generation_id = i;
}
void set_evolves_from_species_id(int i){
    evolves_from_species_id = i;
}
void set_evolution_chain_id(int i){
    evolution_chain_id = i;
}
void set_color_id(int i){
    color_id = i;
}
void set_shape_id(int i){
    shape_id = i;
}
void set_habitat_id(int i){
    habitat_id = i;
}
void set_gender_rate(int i){
    gender_rate =i;
}
void set_capture_rate(int i){
    capture_rate= i;
}
void set_base_happiness(int i){
    base_happiness = i;
}
void set_is_baby(int i){
    is_baby = i;
}
void set_hatch_counter(int i){
    hatch_counter = i;
}
void set_has_gender_differences(int i){
    has_gender_differences = i;
}
void set_growth_rate_id(int i){
    growth_rate_id = i;
}
void set_forms_switchable(int i){
    forms_switchable = i;
}
void set_is_legendary(int i){
    is_legendary = i;
}
void set_is_mythical(int i){
    is_mythical = i;
}
void set_order(int i){
    order = i;
}
void set_conquest_order(int i){
    conquest_order=i;
}


//

int get_id(){
    return id;
}
string get_identifier(){
    return identifier;
}
int get_generation_id(){
    return generation_id;
}
int get_evolves_from_species_id(){
    return evolves_from_species_id;
}
int get_evolution_chain_id(){
    return evolution_chain_id;
}
int get_color_id(){
    return color_id;
}
int get_shape_id(){
    return shape_id;
}
int get_habitat_id(){
    return habitat_id;
}
int get_gender_rate(){
    return gender_rate;
}
int get_capture_rate(){
    return capture_rate;
}
int get_base_happiness(){
    return base_happiness;
}
int get_is_baby(){
    return is_baby;
}
int get_hatch_counter(){
    return hatch_counter;
}
int get_has_gender_differences(){
    return has_gender_differences;
}
int get_growth_rate_id(){
    return growth_rate_id;
}
int get_forms_switchable(){
    return forms_switchable;
}
int get_is_legendary(){
    return is_legendary;
}
int get_is_mythical(){
    return is_mythical;
}
int get_order(){
    return order;
}
int get_conquest_order(){
    return conquest_order;
}









void print(){
     string output= to_string(id);
    if(id == -1){
      output="";
    }
    cout<<"ID: "<<output<<endl;  
    
    cout<<"Identifier: "<<identifier<<endl;
   
    output=to_string(generation_id);
    if(generation_id == -1){
        output="";
    }
    cout<<"Generation ID: "<<output<<endl;  

    output = to_string(evolves_from_species_id);
    if(evolves_from_species_id == -1){
         output="";
    }
    cout<<"Evolves From Species ID: "<<output<<endl; 

     output=to_string(evolution_chain_id);
    if(evolution_chain_id == -1){
        output="";
    }
    cout<<"Evolution Chain ID: "<< output<<endl; 

    output = to_string(color_id);
    if(color_id== -1){
           output="";
    }
    cout<<"Color ID: "<<output<<endl;   

    output= to_string(shape_id);
    if(shape_id == -1){
          output="";
    }
     cout<<"Shape ID: "<<output<<endl;   



     output= to_string(habitat_id);
    if(habitat_id == -1){
        output="";
    }
    cout<<"Habitat ID: "<<output<<endl;  

    output= to_string(gender_rate);
    if(gender_rate == -1){
        output="";
    }
    cout<<"Gender Rate: "<<output<<endl;  

     output= to_string(capture_rate);
    if(capture_rate == -1){
        output="";
    }
    cout<<"Capture Rate: "<<output<<endl;  

    output= to_string(base_happiness);
    if(base_happiness == -1){
        output="";
    }
    cout<<"Base Happiness: "<<output<<endl;  

    output= to_string(is_baby);
    if(is_baby == -1){
        output="";
    }
    cout<<"Is Baby: "<<output<<endl;  

    output= to_string(hatch_counter);
    if(hatch_counter == -1){
        output="";
    }
    cout<<"Hatch Counter: "<<output<<endl;  

    output= to_string(has_gender_differences);
    if(has_gender_differences == -1){
        output="";
    }
    cout<<"Has Gender Differences: "<<output<<endl;  

    output= to_string(growth_rate_id);
    if(growth_rate_id == -1){
        output="";
    }
    cout<<"Growth Rate ID: "<<output<<endl;  

     output= to_string(forms_switchable);
    if(forms_switchable == -1){
        output="";
    }
    cout<<"Forms Switchable: "<<output<<endl;  

     output= to_string(is_legendary);
    if(is_legendary == -1){
        output="";
    }
    cout<<"Is Legendary: "<<output<<endl;

    output= to_string(is_mythical);
    if(is_mythical == -1){
        output="";
    }
    cout<<"Is Mythical: "<<output<<endl;

     output= to_string(order);
    if(order == -1){
        output="";
    }
    cout<<"Order: "<<output<<endl;

     output= to_string(conquest_order);
    if(conquest_order == -1){
        output="";
    }
    cout<<"Conquest Order: "<<output<<endl;

cout<<""<<endl;
}

};

class poke_move{
private:
int pokemon_id;
int version_group_id;
int move_id;
int pokemon_move_method_id;
int level;
int order;


public:
void set_pokemon_id(int i){
     pokemon_id = i;
}
void set_version_group_id(int i){
    version_group_id = i;
}

void set_move_id(int i){
    move_id = i;
}

void set_pokemon_move_method_id(int i){
    pokemon_move_method_id = i;
}
void set_level(int i){
    level = i;
}

void set_order(int i){
    order = i;
}

//
int get_pokemon_id(){
     return pokemon_id;
}
int get_version_group_id(){
    return version_group_id ;
}

int get_move_id(){
    return move_id;
}

int get_pokemon_move_method_id(){
    return pokemon_move_method_id;
}
int get_level(){
   return level;
}

int get_order(){
    return order;
}

void print(){
    string output= to_string(pokemon_id);
    if(pokemon_id == -1){
      output="";
    }
    cout<<"Pokemon ID: "<<output<<endl;  
    

   
    output=to_string(version_group_id);
    if(version_group_id == -1){
        output="";
    }
    cout<<"Version Group ID: "<<output<<endl;  

    output = to_string(move_id);
    if(move_id == -1){
         output="";
    }
    cout<<"Move ID: "<<output<<endl; 

     output=to_string(pokemon_move_method_id);
    if(pokemon_move_method_id == -1){
        output="";
    }
    cout<<"Pokemon Move Method ID: "<< output<<endl; 

    output = to_string(level);
    if(level == -1){
           output="";
    }
    cout<<"Level: "<<output<<endl;   

    output= to_string(order);
    if(order == -1){
          output="";
    }
     cout<<"Order: "<<output<<endl;   



cout<<""<<endl;
}




};


class moves{
    private:
    int id;
    string identifier;
    int generation_id;
    int type_id;
    int power;
    int pp;
    int accuracy;
    int priority;
    int target_id;
    int damage_class_id;
    int effect_id;
    int effect_chance;
    int contest_type_id;
    int contest_effect_id;
    int super_contest_effect_id;

    public:
    void set_id(int i){
    id = i;
    }

    void set_identifier(string i){
        identifier = i;
    }

   void set_generation_id(int i){
       generation_id = i;
    }

    void set_type_id(int i){
        type_id = i;
    }

    void set_power(int i){
        power = i;
    }
    void set_pp(int i){
        pp = i;
    }

    void set_accuracy(int i){
        accuracy = i;
    }

    void set_priority(int i){
        priority = i;
    }
    void set_target_id(int i){
        target_id = i;
    }
    void set_damage_class_id(int i){
        damage_class_id = i;
    }
    void set_effect_id(int i){
        effect_id = i;
    }

    void set_effect_chance(int i){
        effect_chance = i;
    }
    void set_contest_type_id(int i){
        contest_type_id = i;
    }

    void set_contest_effect_id(int i){
        contest_effect_id = i;
    }

    void set_super_contest_effect_id(int i){
        super_contest_effect_id = i;
    }

    //

    int get_id(){
    return id;
    }

   string get_identifier(){
        return identifier;
    }

   int get_generation_id(){
       return generation_id;
    }

    int get_type_id(){
        return type_id;
    }

    int get_power(){
        return power;
    }
    int get_pp(){
        return pp;
    }

    int get_accuracy(){
        return accuracy;
    }

    int get_priority(){
        return priority;
    }
    int get_target_id(){
        return target_id;
    }
    int get_damage_class_id(){
        return damage_class_id;
    }
    int get_effect_id(){
        return effect_id;
    }

    int get_effect_chance(){
        return effect_chance;
    }
    int get_contest_type_id(){
        return contest_type_id;
    }

    int get_contest_effect_id(){
        return contest_effect_id;
    }

    int get_super_contest_effect_id(){
        return super_contest_effect_id;
    }

void print(){
    string output= to_string(id);
    if(id == -1){
      output="";
    }
    cout<<"ID: "<<output<<endl;  
    
    cout<<"Identifier: "<<identifier<<endl;
   
    output=to_string(generation_id);
    if(generation_id == -1){
        output="";
    }
    cout<<"Generation ID: "<<output<<endl;  

    output = to_string(type_id);
    if(type_id == -1){
         output="";
    }
    cout<<"Type ID: "<<output<<endl; 

     output=to_string(power);
    if(power == -1){
        output="";
    }
    cout<<"Power: "<< output<<endl; 

    output = to_string(pp);
    if(pp == -1){
           output="";
    }
    cout<<"PP: "<<output<<endl;   

    output= to_string(accuracy);
    if(accuracy == -1){
          output="";
    }
     cout<<"Accuracy: "<<output<<endl;   



     output= to_string(priority);
    if(priority == -1){
        output="";
    }
    cout<<"Priority: "<<output<<endl;  

    output= to_string(target_id);
    if(target_id == -1){
        output="";
    }
    cout<<"Target ID: "<<output<<endl;  

     output= to_string(damage_class_id);
    if(damage_class_id == -1){
        output="";
    }
    cout<<"Damage Class ID: "<<output<<endl;  

    output= to_string(effect_id);
    if(effect_id == -1){
        output="";
    }
    cout<<"Effect ID: "<<output<<endl;  

    output= to_string(effect_chance);
    if(effect_chance == -1){
        output="";
    }
    cout<<"Effect Chance: "<<output<<endl;  

    output= to_string(contest_type_id);
    if(contest_type_id == -1){
        output="";
    }
    cout<<"Contest Type ID: "<<output<<endl;  

    output= to_string(contest_effect_id);
    if(contest_effect_id == -1){
        output="";
    }
    cout<<"Contest Effect ID: "<<output<<endl;  

    output= to_string(super_contest_effect_id);
    if(super_contest_effect_id == -1){
        output="";
    }
    cout<<"Super Contest Effect ID: "<<output<<endl;  


cout<<""<<endl;
}
};

class pokemon_file{
private:
int id;
string identifier;
int species_id;
int h;
int weight;
int base_experience;
int order;
int is_default;
public:
void set_id(int i){
    id = i;
}

void set_identifier(string i){
    identifier = i;
}

void set_species_id(int i){
    species_id = i;
}

void set_h(int i){
    h  = i;
}
void set_weight(int i){
weight = i;
}

void set_base_experience(int i){
    base_experience = i;
}

void set_order(int i){
    order = i;
}

void set_is_default(int i){
    is_default = i;
}

//
int get_id(){
    return id;
}

string get_identifier(){
    return identifier;
}

int get_species_id(){
    return species_id;
}

int get_h(){
    return h;
}
int get_weight(){
return weight;
}

int get_base_experience(){
    return base_experience;
}

int get_order(){
    return order;
}

int get_is_default(){
    return is_default;
}

void print(){
    string output= to_string(id);
    if(id == -1){
      output="";
    }
    cout<<"ID: "<<output<<endl;  
    
    cout<<"Identifier: "<<identifier<<endl;
   
    output=to_string(species_id);
    if(species_id == -1){
        output="";
    }
    cout<<"Species ID: "<<output<<endl;  

    output = to_string(h);
    if(h == -1){
         output="";
    }
    cout<<"Height: "<<output<<endl; 

     output=to_string(weight);
    if(weight == -1){
        output="";
    }
    cout<<"Weight: "<< output<<endl; 

    output = to_string(base_experience);
    if(base_experience == -1){
           output="";
    }
    cout<<"Base Experience: "<<output<<endl;   

    output= to_string(order);
    if(order == -1){
          output="";
    }
     cout<<"Order: "<<output<<endl;   



     output= to_string(is_default);
    if(is_default == -1){
        output="";
    }
    cout<<"Order: "<<output<<endl;  

cout<<""<<endl;

}




};
class pokemon{
public:

pokemon(){

}
pokemon_file poke;
int level;
vector<moves> move;

int hp;
int attack;
int defence;
int special_attack;
int special_defense;
int speed;
int current_hp;


public:
void set_current_hp(int i){
    current_hp = i;
}
int get_current_hp(){
    return current_hp;
}
void set_poke(pokemon_file i){
    poke = i;
}
pokemon_file get_poke(){
return poke;
}

void set_level(int i){
    level = i;
}
int get_level(){
    return level;
}

void set_move(vector<moves> i){
    move = i;
}
vector<moves> get_move(){
    return move;
}

void set_hp(int i){
    hp = i;
}
int get_hp(){
    return hp;
}

void set_attack(int i){
attack = i;
}
int get_attack(){
    return attack;
}

void set_defence(int i){
    defence = i;
}
int get_defence(){
    return defence;
}

void set_special_attack(int i){
    special_attack = i;
}

int get_special_attack(){
    return special_attack;
}

void set_special_defense(int i){
    special_defense = i;
}

int get_special_defense(){
    return special_defense;
}

void set_speed(int i)
{
    speed = i;
}

int get_speed(){
    return speed;
}

string to_string(){
    string output ="Name: " + poke.get_identifier()+'\n';
    output+="Move1: "+move.at(0).get_identifier()+'\n';
    output+="Move2: "+move.at(1).get_identifier()+'\n';
    output+= "HP: "+  std::to_string(hp)+'\n';
    output+= "Attack: "+ std::to_string(attack)+'\n';
    output+= "Defense: "+ std::to_string(defence)+'\n';
    output+= "Special_attack: "+  std::to_string(special_attack)+'\n';
    output+= "Special_defense: "+std::to_string(special_defense)+'\n';
    output+= "Speed: "+std::to_string(speed)+'\n';
    return output;
}



};
class player{
   public:
    int x;
    int y;
    player_type type;
    char next_move;
    char player_symbol;
    int directionY;
    int directionX;
    int path [height][width];
    int move_turn;
    bool avaiable;
    int poke_ball;
    int potions;
    int revive;
   
    vector<pokemon*> poke;
    //pokemon_file p,int l,vector<moves> m,int h,int att,int def,int sa,int sd,int sp,int chp
    void push_data(pokemon* p){
        //pokemon*  x= new pokemon(p->get_poke(), p->get_level(), p->get_move(), p->get_hp(), p->get_attack(), p->get_defence(), p->get_special_attack(), p->get_special_defense(), p->get_speed(), p->get_current_hp());
        poke.push_back(p);
    }
    bool get_avaiable(){
        return avaiable;
    }

    

};

class map_game{
public:
int start1;
int start2;
int exist1;
int exist2;
char a[height][width];
int currentX;
int currentY;
vector<player*> trainer;

void push_data(player* p){
        //pokemon*  x= new pokemon(p->get_poke(), p->get_level(), p->get_move(), p->get_hp(), p->get_attack(), p->get_defence(), p->get_special_attack(), p->get_special_defense(), p->get_speed(), p->get_current_hp());
        trainer.push_back(p);
    }
};
map_game *world[worldX][worldY] = {};
vector<stats> stat_list;
vector<pokemon_stats> pokemon_stats_list;
vector<experience> experience_list;
vector<type_name> type_name_list;
vector<poke_spec> poke_spec_list;
vector<poke_move> pm_list;
vector<moves> move_list;
vector<pokemon_file> poke_list;
int currentX = 199;
int currentY = 199;

void fill_map(char map [height][width]){
    for (int i = 0; i < height; i ++){
        for(int j = 0; j < width; j ++){


       if(j == 0 || j == width-1 || i == 0 || i == height -1){
               map[i][j]  = '%';

          }
          else{
           map[i][j] = ' ';
          }
        }

    }

}
void fill_rock_tree(char map [height][width]){
srand (time(NULL));
char arr [] = {'^', '%'};
int index;
    for (int i = 0; i < height; i ++){
        for(int j = 0; j < width; j ++){
            index = rand()%2;
            if(map[i][j]==' '){
                map[i][j] = arr[index];
            }



        }

    }

}
void fill_grass(char map [height][width]){
    srand (time(NULL));
   int i;
    int j;

  for (i=(rand() % 5) + 10; i< 20; i++)
  {
        for(j =1 ; j <(rand() % 5) + 13; j++)
        {
            if(map[i][j] != 'C' && map[i][j] != 'M' && map[i][j] != '#'){
            map[i][j] = ',';
            }
        }

    }


for (i=1; i< 9; i++)
  {
        for(j =(rand() % 10) + 60; j <79; j++)
        {
            if(map[i][j] != 'C' && map[i][j] != 'M' && map[i][j] != '#'){
            map[i][j] = ',';
            }
        }

    }




}

void fill_clearing(char map [height][width]){
     srand (time(NULL));
   int i;
    int j;



  for (i=(rand() % 3) + 1; i< 20; i++)
  {
        for(j =(rand() % 3) + 1 ; j <(rand() % 5) + 35; j++)
        {
            if(map[i][j] != 'C' && map[i][j] != 'M'&& map[i][j] != '#'){
            map[i][j] = '.';
            }
        }

    }

   for (i=(rand() % 3) + 1; i< 20; i++)
  {
        for(j =(rand() % 5) + 35; j <79; j++)
        {
            if(map[i][j] != 'C' && map[i][j] != 'M'&& map[i][j] != '#'){
            map[i][j] = '.';
            }
        }

    }




}

int high_or_low(int end, int start){
    if (end > start){
        return 1;
    }
    else if (start > end){
       return -1;
    }
    else{
        return 0;
    }
}

void fill_road(char map [height][width], int start1, int start2, int exist1, int exist2,player* player){
     srand (time(NULL));

map[0][start1] = '#';
map[height-1][exist1] = '#';
map[start2][0] = '#';
map[exist2][width-1] = '#';

int i = rand() % 10 + 6;
int j = rand() % 40 + 20;




int ranX = rand() %5 + 5;
int ranY = rand() % 5 +40;

if(player->player_symbol != '@'){
map[ranX][ranY] = '@';
}
int ran2X = ranX;
int ran2Y = ranY;



for (int x = 1; x <= ranY ; x ++){
     int y = high_or_low(ranX, start2);
     if(map[start2][x] != 'C' && map[start2][x] != 'M' && map[start2][x] != '@'){
    map[start2][x] = '#';
     }
    if(x == ranY && ranY != 79){
        start2 = ranX;
        ranY = 79;
        ranX = exist2;
    }



    if(start2 != ranX){
    start2+= y;
   if(map[start2][x] != 'C' && map[start2][x] != 'M' && map[start2][x] != '@' ){
    map[start2][x] = '#';
     }
    }

    if(x == j){
        int k = x;
        for(int b = start2+1; b < start2 +3; b++){
            map[b][k] = 'M';
            k++;
            map[b][k] = 'M';
            k--;


        }
    }

}





for (int x = 1; x <= ran2X; x ++){
  int y = high_or_low(ran2Y, start1);
    if(map[x][start1] != 'C' &&  map[x][start1] != 'M' && map[x][start1] != '@'){
    map[x][start1] = '#';
}
    if(x == ran2X && ran2X != 20){
         int k = start1;
         while(k != ran2Y+y){
             map[x][k] = '#';
             k+=y;
         }

        start1 = ran2Y;
        ran2X = 20;
        ran2Y = exist1;
    }

    if(start1 != exist1){
    start1+= y;
    if(map[x][start1] != 'C' &&  map[x][start1] != 'M' &&  map[x][start1] != '@'){
    map[x][start1] = '#';
}
    }



      if(x == i){
        int k = x;
        for(int b = start1+1; b < start1 +3; b++){
            map[k][b] = 'C';
            k++;
            map[k][b] = 'C';
            k--;


        }
    }
}


}

void print_map(char map [height][width], int current_screen){
 
clear();
int top = height +1;
for (int i = 1; i < top; i ++){
        for(int j = 0; j < width; j ++){
           // printf("%c",map[i][j]);

            mvaddch(i, j, map[i-1][j]);

        }

    }

}

void copy_map(char from [height][width], char to [height][width]){
    for (int i = 0; i < height; i ++){
        for(int j = 0; j < width; j ++){
            to[i][j] = from[i][j];

        }


    }
}

int min(int a, int b){
    if(a > b){
        return b;
    }
    else if( b > a){
         return b;
    }
    else{
        return a;
    }
}

bool all_true(bool visited [height][width]){
    for (int i = 0; i < height; i ++){
        for(int j = 0; j < width; j ++){
             if(visited[i][j] == false){
                 return false;
             }

        }

    }


    return true;
}

void initialize_map(char map [height][width],int start1, int start2,int exist1,int exist2,player* player){
fill_map(map);
fill_clearing(map);
fill_grass(map);
fill_road(map, start1, start2, exist1, exist2,player);
fill_rock_tree(map);
}

void find_path(char map [height][width],int path [height][width],bool visited [height][width] ,int x, int y,  player_type type){
int posX [] ={0, 1, -1, 0, 1, -1, -1, 1 };
int posY []= {1, 0, 0, -1, 1, 1, -1, -1 };
visited[x][y] = true;
int rock;
int clearing = 10;
int tall_grass;

int minX;
int minY;
int min = INT_MAX;

if(type == hiker){
rock = 15;
tall_grass = 15;
}
else if(type == rival){
tall_grass = 20;
rock = INT_MAX;
}

 for (int i = 0; i < 8; i++) {
    int newX = x + posX[i];
    int newY = y + posY[i];
    char c = map[newX][newY];
 if(newX < 21 && newX >=0  && newY < 80 && newY >=0){
     if (c == '%' && type == hiker && newX < 20 && newX >0  && newY < 79 && newY >0){
          int value = rock  + path[x][y];
          int least= MIN (value,  path[newX][newY]);
             path[newX][newY] = least;

    }
    else if(c == ','){
          int value = tall_grass  + path[x][y];
        int least= MIN (value,  path[newX][newY]);
        path[newX][newY] = least;

    }
    else if( c =='#' || c == '.'){
       int value = clearing   + path[x][y];
       int least= MIN (value,  path[newX][newY]);
        path[newX][newY] = least;

    }


 }

}


for(int i = 0; i < height; i++){
    for(int j = 0; j < width; j++){
        if(visited[i][j] == false && path[i][j] <= min){
           min= path[i][j];
           minX = i;
           minY = j;

        }

    }
}

if(min != INT_MAX && visited[minX][minY] == false){

   find_path(map, path, visited ,minX, minY,type);


}

}
pokemon* encounter_pokemon(){
  
    
    pokemon *output= new pokemon() ;
    
    vector<poke_move> list;
    pokemon_file enemy = poke_list.at(rand()% poke_list.size());
    output->set_poke(enemy);   // print pokemon name
    int distance= abs(currentX -199) +  abs(currentY-199);
    int min =1;
    int max =distance;
    if(distance > 200){
        min = (distance-200)/2;
        max = 100;
    }
     int level = rand() % (abs(max - min) + 1)+ min;
    output->set_level(level);
   
    for(int i = 0; i < pm_list.size(); i ++){
        if(pm_list.at(i).get_pokemon_move_method_id() == 1 && pm_list.at(i).get_pokemon_id() == enemy.get_id()){
            if(level >=pm_list.at(i).get_level()){
             list.push_back(pm_list.at(i));
            }
        }
    }
    
  




    vector<moves> move;
    for(int i = 0; i < 2; i ++){
        int first_move = rand() %list.size();
        int move_id = list.at(first_move).get_move_id();
        for(int j = 0; j < move_list.size();  j++){
            if(move_id == move_list.at(j).get_id()){
                 move.push_back(move_list.at(j));
                 break;
            }
        }
    }
   
    output->set_move(move);
   

   

   for(int i =0; i < pokemon_stats_list.size();i++){
        if(pokemon_stats_list.at(i).get_pokemon_id() == enemy.get_id()){
           
             for(int j = 0; j < stat_list.size(); j++){
                    if(pokemon_stats_list.at(i).get_stat_id() == stat_list.at(j).get_id()){
                         int IV = rand() % 16;
                    
                        if(stat_list.at(j).get_identifier() =="hp"){
                            int stat =  ((((pokemon_stats_list.at(i).get_base_stat() + IV) *2)* level)/100) +level +10;
                               output->set_hp(stat);
                               output->set_current_hp(stat);
                            
                        }
                        else{
                                int stat = ((((pokemon_stats_list.at(i).get_base_stat() + IV)*2) *level)/100) +5 ;
                                if(stat_list.at(j).get_identifier() == "attack"){
                                    output->set_attack(stat);
                                }
                                else if(stat_list.at(j).get_identifier() == "defense"){
                                    output->set_defence(stat);
                                }
                                else if(stat_list.at(j).get_identifier() == "special-attack"){
                                    output->set_special_attack(stat);
                                }
                                else if(stat_list.at(j).get_identifier() == "special-defense"){
                                    output->set_special_defense(stat);
                                }
                                else if(stat_list.at(j).get_identifier() == "speed"){
                                    output->set_speed(stat);
                                }
                                
                        }
                        break;
                    }
                 } 
         
        }
    }


string  gender [] = {"Male", "Female"};


string shiny = "False";
if(rand() % 8192 == 0){
shiny = "True";
}


return output;

}
void add_trainer(map_game *current_map,int num_trainer, char map [height][width]){
player_type kind[7] = {PC, hiker, rival, pacer, wanderer, stationary, walker};
pokemon* first = encounter_pokemon();
player *h = new player();

 h->type = hiker;
int hikerX;
int hikerY;

h->player_symbol = 'H';
h->move_turn = 0;
h->avaiable = true;
h->push_data(first);
current_map->push_data(h);


pokemon* second = encounter_pokemon();
player *r=  new player();
     r->type = rival;


r->player_symbol = 'R';
r->avaiable = true;
r->move_turn = 0;
r->push_data(second);
current_map->push_data(r);
for(int a = 0; a < 2; a ++){
   hikerX = rand() %14 + 4;
   hikerY = rand() % 55 +15;
    if(map[hikerX][hikerY] == '.' || map[hikerX][hikerY] == ','){
        current_map->trainer.at(a)->x = hikerX;
         current_map->trainer.at(a)->y = hikerY;
          current_map->trainer.at(a)->next_move = map[hikerX][hikerY];
        
    }
    else{
        a = 0;
    }
}

map[h->x][h->y] = h->player_symbol;
map[r->x ][r->y] = r->player_symbol;




for(int i = 2; i < num_trainer; i++){
    pokemon* third = encounter_pokemon();
    player *ran=  new player();
ran->type = kind[rand()%4 +3];
ran->directionY = 1;
ran->directionX = 0;
ran->avaiable = true;
ran->push_data(third);
int X;
int Y;

for(int j = 2; j <=i; j ++){
X = rand() %14 + 4;
Y = rand() % 55 +15;
if(X == ran->x || Y == ran->y || map[X][Y] != ',' && map[X][Y] != '.'){
    j = 2;
}

}



ran->x = X;
ran->y = Y;
ran->move_turn = 0;
if(ran->type == pacer){
    ran->player_symbol ='P';
    ran->next_move = map[ran->x][ran->y];
}
else if(ran->type == wanderer){
    ran->player_symbol ='W';
    ran->next_move = map[ran->x][ran->y];
}
else if(ran->type == stationary){
    ran->player_symbol ='S';
}

else if(ran->type == walker){
    ran->next_move = map[ran->x][ran->y];
    ran->player_symbol ='N';
}

map[ran->x][ran->y] = ran->player_symbol;
current_map->push_data(ran);

}

}

void map_to_map(char map [height][width],int num_trainer,int string, int *currentX, int *currentY, player* player){
srand (time(NULL));

int start1;
int start2;
int exist1;
int exist2;
if(string == 0 || string== 1
|| string== 2
|| string== 3
){
 if(string== 0){
     if(*currentX >= 339){
         printf("index out of bound\n");

     }
exist1 = world[*currentX][*currentY]->start1;
start1 = rand() % 10 +41;
start2 = rand() % 10 + 1;
exist2 = rand() % 10 + 5;
*currentX +=1;
player->y = exist1;
player->x= 20;

if(world[*currentX][*currentY] != NULL){
   player->y = world[*currentX][*currentY]->exist1;
    player->x= 20;
}



 }
 else if (string== 1){
      if(*currentX <=0){
         printf("index out of bound\n");

     }
start1 = world[*currentX][*currentY]->exist1;
start2 = rand() % 10 + 1;
exist1 = rand() % 10 +41;
exist2 = rand() % 10 + 5;
player->y = start1;
player->x = 0;
*currentX-=1;

if(world[*currentX][*currentY] != NULL){
player->y = world[*currentX][*currentY]->start1;
player->x = 0;
}


 }
 else if(string== 2){

      if(*currentY <=0){
         printf("index out of bound\n");

     }
exist2 = world[*currentX][*currentY]->start2;
start1 = rand() % 10 +41;
start2 = rand() % 10 + 1;
exist1 = rand() % 10 +41;
player->x = exist2;
player->y =79;
*currentY -=1;

if(world[*currentX][*currentY] != NULL){
  player->x = world[*currentX][*currentY]->exist2;
player->y =79;
}


 }
 else if(string== 3){
     if(*currentY >= 339){
         printf("index out of bound\n");

     }
start1 = rand() % 10 +41;
start2 = world[*currentX][*currentY]->exist2;
exist1 = rand() % 10 +41;
exist2 = rand() % 10 + 5;
player->x = start2;
player->y = 0;
*currentY+=1;
if(world[*currentX][*currentY] != NULL){
  player->x = world[*currentX][*currentY]->start2;
player->y =0;
}
 }


map_game *n= new map_game;
 

initialize_map(n->a, start1, start2, exist1, exist2,player);

n->start1 = start1;
n->start2 = start2;
n->exist1 = exist1;
n->exist2 = exist2;

add_trainer(n,num_trainer, n->a);


if(world[*currentX][*currentY] == NULL){
 world[*currentX][*currentY] = n;
}



world[*currentX][*currentY]->a[player->x][player->y] = '@';

}

}

void initial_path_map(char map [height][width],int path [height][width], bool visited[height][width] ,player* player ){
for(int i = 0; i < height; i++){
    for(int j = 0; j < width; j++){
        visited[i][j] = false;
        if(map[i][j] == '@'){
        path[i][j] = 0;
            player->x =i;
            player->y = j;
            player->player_symbol = '@';
        }

        else{
             path[i][j] = INT_MAX;
        }

    }
}
}

void print_path_map(int path [height][width], char map [height][width]){
for (int i = 0; i < height; i ++){
        for(int j = 0; j < width; j ++){
           if(path[i][j] == 0){
               printf("  ");
           }

           else if(path[i][j] != INT_MAX){
               int k = path[i][j];
            printf("%02d" ,k%100);
           }

           else{
               printf("--");
           }
        }
        printf("\n");

    }
}

void revive(player *play){
     int32_t key;
        clear();
        int p = 0;
        mvprintw(0,0, "Pokemon List, press the following number to pick pokemon that you like or ESC to return");
        for(int i = 0; i <play->poke.size(); i ++){
            p+=1;
            string poke = to_string(p)+ ": " +play->poke.at(i)->get_poke().get_identifier()+ " " + to_string(play->poke.at(i)->get_current_hp()) + "/"+ to_string(play->poke.at(i)->get_hp());
            mvprintw(p,0, poke.data());
            refresh();
        }
        bool pick = false;

        while(!pick){
        key = getch();
        if(key == 27){
        pick = true;
         }
      
        else if(key < p+49){
            if( play->poke.at(key-49)->get_current_hp() <=0){
            play->poke.at(key-49)->set_current_hp( play->poke.at(key-49)->get_hp());
            pick = true;
            }  
        }
        else{
            clear();
            mvprintw(0,0, "Invalid choice");
            usleep(100000);
             pick = true;
        }
     }
clear();
mvprintw(0,0, "Bag List, press the following number to use item or ESC to return");
string balls ="1. Number of pokemon balls: "  +   to_string(play->poke_ball);
mvprintw(1,0,balls.data());
string rev ="2. Number of revive: " + to_string(play->revive);
mvprintw(2,0,rev.data());
string pot = "3. Number potions: "+ to_string(play->potions);
mvprintw(3,0,pot.data());

play->revive = play->revive -1;

}

void heal(player *play){
int32_t key;
        clear();
        int p = 0;
        mvprintw(0,0, "Pokemon List, press the following number to pick pokemon that you like or ESC to return");
        for(int i = 0; i <play->poke.size(); i ++){
            p+=1;
            string poke = to_string(p)+ ": " +play->poke.at(i)->get_poke().get_identifier()+ " " + to_string(play->poke.at(i)->get_current_hp()) + "/"+ to_string(play->poke.at(i)->get_hp());
            mvprintw(p,0, poke.data());
            refresh();
        }
        bool pick = false;

        while(!pick){
        key = getch();
        if(key == 27){
        pick = true;
         }
      
        else if(key < p+49){
            if( (play->poke.at(key-49)->get_current_hp() + 20) < play->poke.at(key-49)->get_hp()){
            play->poke.at(key-49)->set_current_hp(play->poke.at(key-49)->get_current_hp() + 20);
            pick = true;
            }
            else{
             play->poke.at(key-49)->set_current_hp( play->poke.at(key-49)->get_hp());
            pick = true;
            }  
        }
        else{
            clear();
            mvprintw(0,0, "Invalid choice");
            usleep(100000);
            pick = true;
        }
     }
clear();
mvprintw(0,0, "Bag List, press the following number to use item or ESC to return");
string balls ="1. Number of pokemon balls: "  +   to_string(play->poke_ball);
mvprintw(1,0,balls.data());
string rev ="2. Number of revive: " + to_string(play->revive);
mvprintw(2,0,rev.data());
string pot = "3. Number potions: "+ to_string(play->potions);
mvprintw(3,0,pot.data());

play->potions = play->potions -1;

}

void in_Bag(player *play,pokemon* att_poke, pokemon* def_poke){
        clear();
        int p = 0;
        int32_t key;
        mvprintw(0,0, "Bag List, press the following number to use item or ESC to return");
        string balls ="1. Number of pokemon balls: "  +   to_string(play->poke_ball);
        mvprintw(1,0,balls.data());
        string rev ="2. Number of revive: " + to_string(play->revive);
        mvprintw(2,0,rev.data());
        string pot = "3. Number potions: "+ to_string(play->potions);
        mvprintw(3,0,pot.data());
        bool over = false;

       while(!over){
            key = getch();
            switch (key)
            {
            case 27:{
            over = true;
             break;
            }
            case '2':{
                revive(play);
                break;
            }
             case '3':{
                heal(play);
                break;
            }
        
            }

        }
clear();
string att_poke_name ="Attack Poke: "+ att_poke->get_poke().get_identifier();
mvprintw(1,0, (att_poke_name.data()));
string att_currenthp = "Current health: " +std::to_string(att_poke->get_current_hp()) + "/" +std::to_string(att_poke->get_hp());
mvprintw(2,0, att_currenthp.data());
string def_poke_name ="Enemy Poke: "+ def_poke->get_poke().get_identifier();
mvprintw(4,0, (def_poke_name.data()));
string def_currenthp = "Current health: " +std::to_string(def_poke->get_current_hp()) +"/" + std::to_string(def_poke->get_hp());
mvprintw(5,0, def_currenthp.data());

}
void show_poke(player *play,pokemon* att_poke, pokemon* def_poke){
        int32_t key;
        clear();
        int p = 0;
        mvprintw(0,0, "Pokemon List, press the following number to pick pokemon that you like or ESC to return");
        for(int i = 0; i <play->poke.size(); i ++){
                p+=1;
                string poke = to_string(p)+ ": " +play->poke.at(i)->get_poke().get_identifier()+ " " + to_string(play->poke.at(i)->get_current_hp()) + "/"+ to_string(play->poke.at(i)->get_hp());
                mvprintw(p,0, poke.data());
           
               refresh();
        }
        bool pick = false;

        while(!pick){
        key = getch();
        if(key == 27){
        pick = true;
         }
      
        else if(key < p+49){
            *att_poke = *play->poke.at(key-49);
            pick = true;  
        }
        else{

        }
     }
clear();
string att_poke_name ="Attack Poke: "+ att_poke->get_poke().get_identifier();
mvprintw(1,0, (att_poke_name.data()));
string att_currenthp = "Current health: " +std::to_string(att_poke->get_current_hp()) + "/" +std::to_string(att_poke->get_hp());
mvprintw(2,0, att_currenthp.data());
string def_poke_name ="Enemy Poke: "+ def_poke->get_poke().get_identifier();
mvprintw(4,0, (def_poke_name.data()));
string def_currenthp = "Current health: " +std::to_string(def_poke->get_current_hp()) +"/" + std::to_string(def_poke->get_hp());
mvprintw(5,0, def_currenthp.data());
     

}
pokemon* replace_poke(player *play){
    pokemon* output = play->poke.at(0);
    for(int i = 0; i < play->poke.size(); i ++){
        if(play->poke.at(i)->get_current_hp() >0){
            output = play->poke.at(i);
            break;
        }
    }
    return output;
}

void pick_move(player *play,pokemon* att_poke,moves att_skill, bool *fight ){
bool pick_move = false;
int32_t key;
 while(!pick_move){
            key = getch();
            switch (key)
            {
            case 27:{
            pick_move = true;
             break;
            }
            case '1':{
                att_skill= att_poke->get_move().at(0);
                pick_move = true;
                *fight = true;
                break;
            }
             case '2':{
                att_skill= att_poke->get_move().at(1);
                pick_move = true;
                *fight = true;
                break;
            }
       
            }

        }
}

void fight(player *play,player *enemy,pokemon* att_poke, pokemon* def_poke,moves att_skill,moves def_skill, int battle){
        bool win = false;
        bool fight = false;
        int32_t key;
        clear();
        int p = 0;
        mvprintw(0,0, "press the following number to pick Movethat you like or ESC to return");
        for(int i = 0; i <att_poke->get_move().size(); i ++){
                p+=1;
                string poke = to_string(p)+ ". "+ "Move: " + att_poke->get_move().at(p-1).get_identifier();
                mvprintw(p,0, poke.data());
                refresh();
         }
    pick_move(play, att_poke, att_skill, &fight);

    string  direction [] = {"v", "^"};
    int turn = 0;

    if(fight){

    int strike = 0;
    bool game_over = false;
    if(def_skill.get_priority() > att_skill.get_priority()){
        turn = 1;
    }

 
    while(!game_over){
    clear();
    int random = (rand() % 15 +85) /100;
    int crit = 1;
    int type =1;
    int STAB = 1;
    int attack =0;
    int defence = 0;
    int power = 0;
    int level = 0;
  //   if(turn == 0){
        attack = att_poke->get_attack();
        defence = def_poke->get_defence();
        power = att_skill.get_power();
        level = att_poke->get_level();
    //  }
      /*  
       else{
        attack = def_poke->get_attack();
        defence = att_poke->get_defence();
        power = def_skill.get_power();
        level = def_poke->get_level();
        } */
       // strike = ((((level*2/5)+2) *power)*attack)*crit*random*STAB*type;
        //strike = ((((((level*2) /5) + 2)* power*(attack/defence))/50) +2)*crit*random*STAB*type;
         strike = 5;//((((((att_poke->get_level()*2) /5) + 2)*att_skill.get_power()*(att_poke->get_attack()/def_poke->get_defence()))/50) +2)*crit*random*STAB*type;
 
 
 
    while(strike > 0 && def_poke->get_current_hp() > 0 && att_poke->get_current_hp()> 0){  
 
    refresh();
    string att_poke_name ="Attack Poke: "+ att_poke->get_poke().get_identifier();
    mvprintw(1,0, (att_poke_name.data()));
    refresh();
    string att_currenthp = "Current health: " +std::to_string(att_poke->get_current_hp()) + "/" +std::to_string(att_poke->get_hp());
    mvprintw(2,0, att_currenthp.data());
    refresh();
    mvprintw(3,0,direction[turn].data());
   
    refresh();
    string def_poke_name ="Enemy Poke: "+ def_poke->get_poke().get_identifier();
    mvprintw(4,0, (def_poke_name.data()));
    refresh();
    string def_currenthp = "Current health: " +std::to_string(def_poke->get_current_hp()) +"/" + std::to_string(def_poke->get_hp());
    mvprintw(5,0, def_currenthp.data());
       
 
    refresh();
    strike-=1;
    if(turn == 0){
    int i = def_poke->get_current_hp() - 1;
    def_poke->set_current_hp(i);
    }
    else if (turn == 1){
        int i = att_poke->get_current_hp() - 1;
        att_poke->set_current_hp(i);
    }
    usleep(500000);
   
    clear();
    }
    strike = 5;
 
    if(def_poke->get_current_hp() <= 0 || att_poke->get_current_hp() <= 0){
        game_over =true;
    }
       
       
    if(turn == 0){
        turn = 1;
    }
    else{
        turn = 0;
    }
    usleep(500000);
          if(def_poke->get_current_hp() <= 0){
           if(battle ==1 &&def_poke->get_current_hp() <=0){
            def_poke = replace_poke(enemy);
             turn = 0;
             game_over =true;
             win = true;
           }
           if(battle ==0 && def_poke->get_current_hp() <=0){
                def_poke->set_current_hp(def_poke->get_hp());
                play->push_data(def_poke);
                game_over =true;
                win = true;

           }
        }
        else{
            *att_poke = *replace_poke(play);
            if(att_poke->get_current_hp() <=0){
                turn = 0;
                game_over =true;
            }
        }
    }
   
    clear();
     
     

}
    if(!win){
    clear();
     mvprintw(0,0, "Press Q to esc, Press P to pick pokemon ,Press B to Bag, Press F to fight");
    string att_poke_name ="Attack Poke: "+ att_poke->get_poke().get_identifier();
    mvprintw(1,0, (att_poke_name.data()));
    refresh();
    string att_currenthp = "Current health: " +std::to_string(att_poke->get_current_hp()) + "/" +std::to_string(att_poke->get_hp());
    mvprintw(2,0, att_currenthp.data());
    refresh();
    string def_poke_name ="Enemy Poke: "+ def_poke->get_poke().get_identifier();
    mvprintw(4,0, (def_poke_name.data()));
    refresh();
    string def_currenthp = "Current health: " +std::to_string(def_poke->get_current_hp()) +"/" + std::to_string(def_poke->get_hp());
    mvprintw(5,0, def_currenthp.data());
    }
    else{
     clear();
     mvprintw(0,0, "The fight is over, press Q to return");
    }

     

}
void engage_battel(player *play,player *enemy, pokemon* first, int battle){
clear();


bool fight_over = false;

int32_t key;
string type_fight;
pokemon* att_poke = play->poke.at(0);

pokemon* def_poke; 

moves att_skill = att_poke->get_move().at(0);
moves def_skill;

if(battle == 1){
    type_fight ="A battle between the PC and Trainer: Press Q to esc, Press P to pick pokemon ,Press B to Bag, Press F to fight";
     def_poke = enemy->poke.at(0);
    def_skill = def_poke->get_move().at(rand()%att_poke->get_move().size());
}
else if(battle ==0){
    type_fight="A battle between the PC and Pokemon: Press Q to esc,Press P to pick pokemon ,Press B to Bag, Press F to fight,";
    def_poke =first;
    def_skill = def_poke->get_move().at(rand()%att_poke->get_move().size());
}

mvprintw(0,0,type_fight.data());



mvprintw(0,0,type_fight.data());
string att_poke_name ="Attack Poke: "+ att_poke->get_poke().get_identifier();
mvprintw(1,0, (att_poke_name.data()));
string att_currenthp = "Current health: " +std::to_string(att_poke->get_current_hp()) + "/" +std::to_string(att_poke->get_hp());
mvprintw(2,0, att_currenthp.data());
string def_poke_name ="Enemy Poke: "+ def_poke->get_poke().get_identifier();
mvprintw(4,0, (def_poke_name.data()));
string def_currenthp = "Current health: " +std::to_string(def_poke->get_current_hp()) +"/" + std::to_string(def_poke->get_hp());
mvprintw(5,0, def_currenthp.data());



int attempt=0;
while (!fight_over)
{
    key = getch();
      switch(key){
        case 'p':
            {
            show_poke(play,att_poke, def_poke);
            break;
            }
        case 'f':{
            fight(play,enemy,att_poke,def_poke,att_skill,def_skill, battle);
            break;
        }

        case 'b':{
            in_Bag(play,att_poke, def_poke);
            break;
        }
      

        case 'q':{
         fight_over =true;
             }

      }

  
}


}

void moving_hiker_and_rival (char map [height][width],int path [height][width], player *enemy, int *current_screen,player *play){
int way = 10;
int tall_grass = 20;
int clearing = 10;
int rock = 15;
int tree = 15;


if(enemy->player_symbol == 'H' || enemy->player_symbol == 'R'){
int moveX[] = {0, 1, -1, 0, 1, -1, -1, 1 };
int moveY[] = {1, 0, 0, -1, 1, 1, -1, -1 };

if(enemy->player_symbol == 'H'){
    tall_grass = 15;
}

int leastX,leastY;
int min = INT_MAX;
int c;
for (int i = 0; i < 8; i ++){
int newX = enemy->x + moveX[i];
int newY = enemy->y + moveY[i];
c = map[newX][newY] ;
if(c ==64){
    break;
}
else  if(min > path[newX][newY] ){
    min= path[newX][newY];
    leastX = newX;
    leastY = newY;
   
}
}

if(c == 64){
pokemon* o =encounter_pokemon();
engage_battel(play,enemy,o,1);
if(replace_poke(enemy)->get_current_hp()<= 0){
map[enemy->x][enemy->y] = enemy->next_move;
enemy ->avaiable =false;
return;
}

}



map[enemy->x][enemy->y] = enemy->next_move;
enemy->next_move = map[leastX][leastY];
map[leastX][leastY] = enemy->player_symbol;
enemy->x = leastX;
enemy->y = leastY;



if( enemy->next_move == '#'){
    enemy->move_turn = enemy->move_turn + way;
}

else if( enemy->next_move == '^' && enemy->player_symbol == 'R'){
    enemy->move_turn = enemy->move_turn + tree;
}

else if( enemy->next_move == '%' && enemy->player_symbol == 'R'){
    enemy->move_turn = enemy->move_turn + rock;
}

else if( enemy->next_move == '.'){
    enemy->move_turn = enemy->move_turn + clearing;
}

else if( enemy->next_move == ','){
    enemy->move_turn = enemy->move_turn + tall_grass;
}

}
else if(enemy->player_symbol == 'P' || enemy->player_symbol == 'W' || enemy->player_symbol == 'N'){
int way = 10;
int tall_grass = 20;
int clearing = 10;
 if(enemy->player_symbol == 'P'){

   if(map[enemy->x][(enemy->y) +enemy->directionY ] != '.' && map[enemy->x][(enemy->y) +enemy->directionY ] != '#'&& map[enemy->x][(enemy->y) +enemy->directionY ] != ','){
    if(enemy->directionY == 1){
        enemy->directionY = -1;
    }
    else{
       enemy->directionY = 1;
    }
}

    int newY = enemy->y + enemy->directionY;
    map[enemy->x][enemy->y] = enemy->next_move;
    enemy->next_move = map[enemy->x][newY];
    map[enemy->x][newY] = enemy->player_symbol;
    enemy->y = newY;
}
else if(enemy->player_symbol == 'W' ){
int dirX[4] = {1,-1,0,0};
int dirY[4] = {0,0,1,-1};

while(map[(enemy->x) + enemy->directionX] [(enemy->y) +enemy->directionY] != enemy->next_move){
int move =  rand() % 4;
enemy->directionX = dirX[move];
enemy->directionY = dirY[move];
}

 int newY = enemy->y + enemy->directionY;
 int newX = enemy->x + enemy->directionX;
    enemy->next_move = map[newX][newY];
    map[newX][newY] = enemy->player_symbol;
    map[enemy->x][enemy->y] = enemy->next_move;
    enemy->y = newY;
    enemy->x = newX;

}

else if(enemy->player_symbol == 'N' ){
  if(map[enemy->x][(enemy->y) +enemy->directionY ] != enemy->next_move ){
    if(enemy->directionY == 1){
        enemy->directionY = -1;
    }
    else{
       enemy->directionY = 1;
    }
}

    int newY = enemy->y + enemy->directionY;
    enemy->next_move = map[enemy->x][newY];
    map[enemy->x][newY] = enemy->player_symbol;
    map[enemy->x][enemy->y] = enemy->next_move;
    enemy->y = newY;


}

if( enemy->next_move == '#'){
    enemy->move_turn = enemy->move_turn + way;
}
else if( enemy->next_move == ','){
    enemy->move_turn = enemy->move_turn + tall_grass;
}
else if( enemy->next_move == '.'){
    enemy->move_turn = enemy->move_turn + clearing;
}

}

}

void reset_NPC_turn_time(vector<player *>trainer,int num_trainer){
    int i;
    for (i = 0; i < num_trainer; i++){
       if(trainer.at(i) != NULL){
        trainer.at(i)->move_turn = 0;
       }
    }
}
int min_move(vector<player *>trainer,int num_trainer){
    int min = INT_MAX;
     for(int i = 0; i < trainer.size(); i ++){
         player *enemy = trainer.at(i);
         if(enemy ->get_avaiable()){
         if(enemy->player_symbol !='S'){
             if(min > enemy->move_turn){
                 min = enemy->move_turn;
             }
         }
         }
     }

     return min;

}
void move_NPC(vector<player *>trainer,int num_trainer, char map [height][width],int hiker_path[height][width],int rival_path[height][width], bool visited[height][width],player *PC,int *current_screen){
    
    int smallest = min_move(trainer,num_trainer);
    for (int i = 0; i < num_trainer; i ++){
    player *enemy = trainer.at(i);
    if(enemy->get_avaiable()){
    if(enemy->player_symbol != 'S' && enemy->move_turn == smallest){
    map[enemy->x][enemy->y] = enemy->player_symbol;
    initial_path_map(map, hiker_path, visited,PC);
    find_path(map,hiker_path,  visited ,PC->x, PC->y, hiker);
    initial_path_map(map, rival_path, visited,PC);
    find_path(map,rival_path, visited,PC->x, PC->y, rival);
    if(enemy->type == hiker){
     moving_hiker_and_rival(map, hiker_path, enemy,current_screen,PC);
        if(*current_screen  == 4){
        map[enemy->x][enemy->y] = enemy->next_move;
       trainer[i] = NULL;
        return;
    }
    }
    else if(enemy->type == rival){
        moving_hiker_and_rival(map, rival_path, enemy,current_screen,PC);
     if(*current_screen  == 4){
        map[enemy->x][enemy->y] = enemy->next_move;
        trainer[i] = NULL;
        return;
    }
    }
    else if(enemy->type == pacer ||enemy->type == wanderer ||enemy->type == walker){
     moving_hiker_and_rival(map, rival_path, enemy,current_screen,PC);
    }
    }
    }
}
}

void move_PC(map_game *current_map,int num_trainer, char *input, int *currentX, int *currentY, player *player, int *current_screen,int hiker_path [height][width],int rival_path [height][width],bool visited[height][width]){
char c;
int path =10;
int clearing = 10;
int tall_grass = 20;
if(*current_screen ==1){
int newX;
int newY;
int smallest = min_move(current_map->trainer,num_trainer);



if(strcmp(input,  "up_l")== 0){

if(current_map->a[player->x-1][player->y-1] != '^' && current_map->a[player->x-1][player->y-1] != '%'){
newX = player->x-1;
newY = player->y-1;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 


move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);



}

}

else if(strcmp(input,  "up")== 0){


    if(player->x == 0){
        
        map_to_map(current_map->a,num_trainer ,0, currentX, currentY,player);
          current_map = world[*currentX][*currentY];
          reset_NPC_turn_time(current_map->trainer,num_trainer);
          player->move_turn =0;
          return;
    }
    else{
if(current_map->a[player->x-1][player->y] != '^' && current_map->a[player->x-1][player->y] != '%'){
newX = player->x-1;
newY = player->y;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


    }

}
}

else if(strcmp(input,  "up_r")== 0){
if(current_map->a[player->x-1][player->y+1] != '^' && current_map->a[player->x-1][player->y+1] != '%'){
newX = player->x-1;
newY = player->y+1;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


}
}

else if(strcmp(input,  "right")== 0){
   
     if(player->y == 79){
        map_to_map(current_map->a,num_trainer,3, currentX, currentY,player);
        current_map = world[*currentX][*currentY];
        reset_NPC_turn_time(current_map->trainer,num_trainer);
        player->move_turn =0;
        return;
        }
else{
     if(current_map->a[player->x][player->y+1] != '^' && current_map->a[player->x][player->y+1] != '%'){
newX = player->x;
newY = player->y+1;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move;  

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


}
}
}

else if(strcmp(input,  "down_r")== 0){
    if(current_map->a[player->x+1][player->y+1] != '^' && current_map->a[player->x+1][player->y+1] != '%'){
newX = player->x+1;
newY = player->y+1;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


}
}

else if(strcmp(input,  "down")== 0){

    if(player->x == 20){
        map_to_map(current_map->a,num_trainer,1, currentX, currentY,player);
        current_map = world[*currentX][*currentY];
        reset_NPC_turn_time(current_map->trainer,num_trainer);
        player->move_turn =0;
        return;
          
    }
    else{
         if(current_map->a[player->x+1][player->y] != '^' && current_map->a[player->x+1][player->y] != '%'){
newX = player->x+1;
newY = player->y;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


}
}
}

else if(strcmp(input,  "down_l")== 0){
    if(current_map->a[player->x+1][player->y-1] != '^' && current_map->a[player->x+1][player->y-1] != '%'){
    newX = player->x+1;
newY = player->y-1;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


}
}
else if(strcmp(input,  "left")== 0){
   
     if(player->y == 0 ){
        map_to_map(current_map->a,num_trainer,2, currentX, currentY,player);
        current_map = world[*currentX][*currentY];
         reset_NPC_turn_time(current_map->trainer,num_trainer);
          player->move_turn =0;
          return;
    }
    else{
         if(current_map->a[player->x][player->y-1] != '^' && current_map->a[player->x][player->y-1] != '%'){
     newX = player->x;
newY = player->y-1;
current_map->a[player->x][player->y] = player->next_move;
player->next_move  = current_map->a[newX][newY];
current_map->a[newX][newY] = '@';
player->x = newX;
player->y = newY;
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


    }
}
}

else if(strcmp(input,  "rest")== 0){
c=player->next_move; 

move_NPC(current_map->trainer,num_trainer,current_map->a, hiker_path, rival_path, visited, player, current_screen);


}

}




if(c== '#'){
    player->move_turn = player->move_turn + path;
}
else if( c == ','){
        player->move_turn = player->move_turn + tall_grass;
       if(rand()%9 == 0){
        pokemon* o =encounter_pokemon();
        engage_battel(player,NULL,o,0);
        return;
       }
   
}
else if( c == '.'){
    player->move_turn = player->move_turn + clearing;
}



}

void display_NPC(vector<player *>trainer,int num_trainer, player *player, int current_screen, int *current_list_index,int change){
    
    int index = 0;
    if(current_screen == 2){
    int X;
    int Y;
    clear();
    int final;

    if(num_trainer > 24){
     
    *current_list_index += change;

     if(*current_list_index < 0){
        *current_list_index = 0;
    }
    
  final = num_trainer - *current_list_index;

    
    if(final > 24){
        final = 24 + *current_list_index;

    } 
    else{
        *current_list_index -=1;
         final = num_trainer;
    }
    }
    else{
        *current_list_index = 0;
         final = num_trainer;
    }
  
    for(int i = *current_list_index; i < final; i ++){
       
        char output[100]="";
        char cordiX[5]="";
        char cordiY[5]="";
        if(trainer[i] != NULL){
            
        X = (trainer.at(i)->x) - player->x;
        Y = (trainer.at(i)->y) - player->y;
        output[0] = trainer.at(i)->player_symbol;
        output[1] = ' ';
        if(X > 0){

            sprintf(cordiX, "%i", X);
            strcat(output, cordiX);
            strcat(output, " south, and ");

        }

        else if(X < 0){

            sprintf(cordiX, "%i", abs(X));
            strcat(output, cordiX);
            strcat(output, " north, and ");

        }

        if(Y > 0){

            sprintf(cordiY, "%i", abs(Y));
            strcat(output, cordiY);
            strcat(output, " west");

        }

      else  if(Y < 0){
            sprintf(cordiY, "%i", abs(Y));
            strcat(output, cordiY);
            strcat(output, " east");

        }

         mvprintw(index-*current_list_index,0,output);
         index+=1;

    }

    }

    }
}

void move_in_mart_center(char map [height][width],player *player){
    int newX;
    int newY;

int dirX[4] = {1,-1,0,0};
int dirY[4] = {0,0,1,-1};

for(int i = 0; i < 4; i ++){
     newX = (player->x) + dirX[i];
     newY = (player->y) + dirY[i];

     if(newX >= 0 && newX <=20 && newY >= 0 && newY <=79){
         if(map[newX][newY] == 'M' || map[newX][newY] == 'C'){
             clear();
             mvprintw(0,0,"Enter a pokemon mart or pokemon center, press '<' to return");
             break;
         }
     }



}




}

//27

void input_file(string name,vector<pokemon_stats>& pokemon_stats_list,vector<experience>& experience_list,vector<type_name>& type_name_list,vector<poke_spec>& poke_spec_list,vector<poke_move>& pm_list,vector<moves>& move_list,vector<pokemon_file>& poke_list,  vector<stats>& stat_list){
char* home = getenv("HOME");
string h (home);
string input = h + "/.poke327/" + name+ ".csv";


if(name == "stats"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line ;
getline(i,line);
line ="";
while(getline(i,line)){
stringstream input(line);
stats ex;  
int c = -1;

getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_id(c);


getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_damage_class_id(c);

std::getline(input,s,',');
ex.set_identifier(s);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_is_battle_only(c);


getline(input,s,'\n');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_game_index(c);


stat_list.push_back(ex);
index +=1;
line= "";


}


}

if(name == "pokemon_stats"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line ;
getline(i,line);
line ="";
while(getline(i,line)){
stringstream input(line);
pokemon_stats name;  
int c = -1;

getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
name.set_pokemon_id(c);


getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
name.set_stat_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
name.set_base_stat(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
name.set_effort(c);


pokemon_stats_list.push_back(name);
index +=1;
line= "";


}


}


if(name == "experience"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line ;
getline(i,line);
line ="";
while(getline(i,line)){
stringstream input(line);
experience ex;  
int c = -1;

getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_growth_rate_id(c);


getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_level(c);

getline(input,s,'\n');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ex.set_experience(c);


experience_list.push_back(ex);
index +=1;
line= "";


}


}

if(name == "type_names"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line ;
getline(i,line);
line ="";
while(getline(i,line)){
stringstream input(line);
type_name name;  
int c = -1;

getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
name.set_type_id(c);


getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
name.set_local_language_id(c);

getline(input,s,'\n');
name.set_name(s);


type_name_list.push_back(name);
index +=1;
line= "";


}


}

if(name =="pokemon_species"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line ;
getline(i,line);
line ="";

while(getline(i,line)){
stringstream input(line);
poke_spec ps;  
int c = -1;
getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_id(c);



getline(input,s,',');
ps.set_identifier(s);

std::getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_generation_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_evolves_from_species_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_evolution_chain_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_color_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_shape_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_habitat_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_gender_rate(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_capture_rate(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_base_happiness(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_is_baby(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_hatch_counter(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_has_gender_differences(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_growth_rate_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_forms_switchable(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_is_legendary(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_is_mythical(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_order(c);



getline(input,s,'\n');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
ps.set_conquest_order(c);


poke_spec_list.push_back(ps);
index +=1;
line= "";


}


}

if(name =="pokemon_moves"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line = "";
while(getline(i,line)){
stringstream input(line);
poke_move pm;  
int c = -1;
getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
pm.set_pokemon_id(c);


getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
pm.set_version_group_id(c);


getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
pm.set_move_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
pm.set_pokemon_move_method_id(c);

getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
pm.set_level(c);


getline(input,s,'\n');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
pm.set_order(c);


pm_list.push_back(pm);
index +=1;
line= "";

}

}
if(name == "moves"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line = "";
while(getline(i,line)){
stringstream input(line);
moves m;  
int c = -1;
getline(input,s,',');
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_id(c);

getline(input,s,',');
m.set_identifier(s);
std::getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_generation_id(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_type_id(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_power(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_pp(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_accuracy(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_priority(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_target_id(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_damage_class_id(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_effect_id(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_effect_chance(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_contest_type_id(c);
getline(input,s,',');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_contest_effect_id(c);
getline(input,s,'\n');
c = -1;
if(!s.empty()){
c= atoi(s.c_str());
}
m.set_super_contest_effect_id(c);


move_list.push_back(m);
index +=1;
line= "";

}

}

if(name == "pokemon"){

int index = 0;
ifstream i;
i.open(input);  
string s="";
string line = "";
while(getline(i,line)){
stringstream input(line);
pokemon_file p;  
int c = -1;
std::getline(input,s,',');
c=  atoi(s.c_str());
p.set_id(c);
std::getline(input,s,',');
p.set_identifier(s);
std::getline(input,s,',');
c=  atoi(s.c_str());
p.set_species_id(c);
std::getline(input,s,',');
c=  atoi(s.c_str());
p.set_h (c);
std::getline(input,s,',');
c=  atoi(s.c_str());
p.set_weight(c);
std::getline(input,s,',');
c=  atoi(s.c_str());
p.set_base_experience(c);
std::getline(input,s,',');
c=atoi(s.c_str());
p.set_order(c);
std::getline(input,s,'\n');
c=  atoi(s.c_str());
p.set_is_default(c);


poke_list.push_back(p);
index +=1;
line= "";
}

}
}

int main(int argc, char *args[]){
  srand (time(NULL));
   int num_trainer = 10; 
    if (argc == 3) {
        if (strcmp(args[1], "--numtrainers") == 0) {
            num_trainer = atoi(args[2]);
        }
    }

    
   
    input_file("pokemon",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
    input_file("moves",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
    input_file("pokemon_moves",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
    //input_file("pokemon_species",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
    // input_file("type_names",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
   // input_file("experience",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
    input_file("pokemon_stats",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
    input_file("stats",pokemon_stats_list, experience_list, type_name_list, poke_spec_list, pm_list, move_list, poke_list,stat_list);
   
 
    


int current_screen =1;   // 1 for the map, 2 for the list of NPC, 3 for the pokemoncent, 4 for battle
int current_list = 0; 
map_game *current_map;
current_map = new map_game();

char map [height][width];
int start1 = rand() % 10 +41;
int start2 = rand() % 10 +1;
int exist1 = rand() % 10 +41;
int exist2 = rand() % 10 + 5;
current_map->currentX = 199;
current_map->currentY = 199;
player *play;
play = new player();
      play->type = PC;
play->next_move = '#';
play->potions =15;
play->poke_ball = 15;
play->revive = 15;

initialize_map(map,start1, start2, exist1, exist2,play);

copy_map(map, current_map->a);
current_map->exist1 = exist1;
current_map->exist2 = exist2;
current_map->start1 = start1;
current_map-> start2 = start2;

int hiker_path [height][width];
int rival_path [height][width];
bool visted[height][width];



add_trainer(current_map,num_trainer, current_map->a);

initial_path_map(current_map->a, hiker_path,visted,play);
world[currentX][currentY] = current_map;




initscr();
noecho();
raw();
keypad(stdscr, TRUE);
curs_set(0);





bool game_over = true;
int32_t key;

pokemon* first = encounter_pokemon();

pokemon* second = encounter_pokemon();

pokemon* third= encounter_pokemon();



mvprintw(0,0,"Please choose your pokemon, press 1 or 2 or 3 to choose");

mvprintw(1,0,"1");
mvprintw(2,0,first->to_string().data());

mvprintw(12,0,"2");
mvprintw(13,0,second->to_string().data());

mvprintw(23,0,"3");
mvprintw(24,0,third->to_string().data());


while(game_over){
    key = getch();
     switch(key){
        case '1':
            {
            play->push_data(first);
            game_over = false;
            break;
            }
         case '2':
            {
            play->push_data(second);
            game_over = false;
            break;
            }
             case '3':
            {
            play->push_data(third);
            game_over = false;
            break;
            }
     }    
}

 play->push_data(third);


clear();
print_map(current_map->a,current_screen);





while(!game_over){
  
mvprintw(0,0,to_string(current_map->trainer.at(0)->avaiable).data());
    key = getch();
    current_map = world[currentX][currentY];
      if(current_list < 0){
        current_list = 0;
         }

    switch(key){

        case '7':{
            char input[] = "up_l";
            move_PC(current_map,num_trainer, input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a,current_screen);
            break;
        }
        
        case '8':
            {
            char input[]  = "up";
            move_PC(current_map,num_trainer ,input,(int *) &currentX, (int *) &currentY, play,(int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a,current_screen);
            break;
            }
        case '9':
            {
            char input[]  = "up_r";
            move_PC(current_map,num_trainer,input,(int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a,current_screen);
            break;
            }
        case '6':
            {
            char input[] = "right";
            move_PC(current_map,num_trainer ,input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a, current_screen);
            break;
            }
        case '3':
            {
            char input[]  = "down_r";
            move_PC(current_map,num_trainer ,input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            print_map(current_map->a,current_screen);
            break;
            }
        case '2':
            {
            char input[] = "down";
            move_PC(current_map, num_trainer,input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a,current_screen);
            break;
            }
        case '1':
            {
            char input[] = "down_l";
            move_PC(current_map,num_trainer,input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a,current_screen);
            break;
            }
        case '4':
            {
            char input[] = "left";
            move_PC(current_map,num_trainer ,input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            current_map = world[currentX][currentY];
            print_map(current_map->a,current_screen);
            break;
            }
        case '5':
            {
            current_map = world[currentX][currentY];
            char input[]  = "rest";
            move_PC(current_map, num_trainer,input, (int *) &currentX, (int *) &currentY, play, (int *)&current_screen,hiker_path, rival_path, visted);
            print_map(current_map->a,current_screen);
            break;
            }
        case 't':
            {
            current_screen = 2;
            display_NPC(current_map->trainer,num_trainer, play,current_screen,(int *)&current_list,0);
            break;
            }
        case KEY_UP:
            {
            display_NPC(current_map->trainer,num_trainer ,play,current_screen,(int *)&current_list, -1);
            break;
            }
        case KEY_DOWN:
            {
            display_NPC(current_map->trainer,num_trainer ,play,current_screen,(int *)&current_list, 1);
            break;
            }
         case 27:
            {
             current_screen =1;
             current_list = 0;
            print_map(current_map->a,current_screen);
            break;
            }
        case '>':
            {
            move_in_mart_center(current_map->a, play);
            break;
            }
        case '<':
            {
            clear();
            print_map(current_map->a,current_screen);
            break;
            }
              
        case 'q':
            {
            game_over = true;
            break;
            }
          
    }

     refresh();
}


endwin();



 return 0;
}
