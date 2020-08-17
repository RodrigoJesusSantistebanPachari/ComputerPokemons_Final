#ifndef POKEMONCLASS_H
#define POKEMONCLASS_H
#include<iostream>
#include <cstdlib>
#include <ctime>
#include <SFML/Graphics.hpp>
#include "Animation.h"
#include "Player.h"
#include <memory.h>

using namespace std;
using namespace sf;

//Implementation of make_unique in C++11
template<typename T, typename... Args>
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

//Class Pokemon
class Pokemon{
	
	private:
		
		string type;
		string advantage1;
		string advantage2;
		string resistance1;
		string resistance2;
		string resistance3;
		float damageattack;
		float health;
		string name;
		//sf::
		Texture skin;
		
		unsigned int typeofplayer;		
		
	public:
		
		//The Observer
		Player p1;
		
		RectangleShape player;
		
		//Constructors
		
		Pokemon(){
		}
		
		Pokemon(float health, float damageattack, string type, string advantage1, string advantage2, string resistance1, string resistance2, string resistance3, string name){
			this->type = type;
			this->advantage1 = advantage1;
			this->advantage2 = advantage2;
			this->health = health;
			this->damageattack = damageattack;
			this->name = name;
			
		}
		
		//Constructor with name and typeofplayer(1 or 2)
		Pokemon(string name, int typeofplayer){
			this->name=name;
			this->typeofplayer = typeofplayer;
			
			/*float posx, posy;
			if(typeofplayer==1) posx = 400.0f;
			if(typeofplayer==2) posx = 1250.0;*/
			
			unique_ptr<float> posx = make_unique<float>(400.0f);
			
			if(typeofplayer==2) 
				*posx = 1250.0f;
			
			
				if(name == "Caterpie"){
					this->type =       "Bug";
					this->advantage1 = "Grass";
					this->advantage2 = "Psychic";
					this->resistance1 = "Fighting";
					this->resistance2 = "Grass";
					this->resistance3 = "Ground";
					this->health = 393;
					this->damageattack = 55;
					this->skin.loadFromFile("Images/Caterpie.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
					
				}
	
				else if(name == "Diglet"){
					this->type="Ground";
					this->advantage1 = "Electric";
					this->advantage2 = "Fire";
					this->resistance1 = "Electric";
					this->resistance2 = "Poison";
					this->resistance3 = "Rock";
					this->health = 465;
					this->damageattack = 53;
					this->skin.loadFromFile("Images/DIGLET.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
					
				}
				
				else if(name == "Butterfree"){
					this->type = "Bug";
					this->advantage1 = "Grass";
					this->advantage2 = "Psychic";
					this->resistance1 = "Fighting"; 
					this->resistance2 = "Grass";
					this->resistance3 = "Ground";
					this->health = 1701;
					this->damageattack = 167;
					this->skin.loadFromFile("Images/Butterfree.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
					
				}
				
				else if(name == "Charmander"){
					this->type = "Fire";
					this->advantage1 = "Grass";
					this->advantage2 = "Bug";
					this->resistance1 = "Fire"; 
					this->resistance2 = "Grass";
					this->resistance3 = "Bug";
					this->health = 831;
					this->damageattack = 116;
					this->skin.loadFromFile("Images/charmander.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Pikachu"){
					this->type = "Electric";
					this->advantage1 = "Flying";
					this->advantage2 = "Water";
					this->resistance1 = "Electric"; 
					this->resistance2 = "Flying";
					this->resistance3 = "Steel";
					this->health = 787;
					this->damageattack = 112;
					this->skin.loadFromFile("Images/Pikachu.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
					
				}
				
				else if(name == "Bulbasaur"){
					this->type = "Grass";
					this->advantage1 = "Water";
					this->advantage2 = "Rock";
					this->resistance1 = "Electric"; 
					this->resistance2 = "Grass";
					this->resistance3 = "Ground";
					this->health = 981;
					this->damageattack = 118;
					this->skin.loadFromFile("Images/Bulbasaur.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Squirtle"){
					this->type = "Water";
					this->advantage1 = "Fire";
					this->advantage2 = "Ground";
					this->resistance1 = "Fire"; 
					this->resistance2 = "Steel";
					this->resistance3 = "Water";
					this->health = 808;
					this->damageattack = 94;
					this->skin.loadFromFile("Images/squirtle.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Machoke"){
					this->type = "Fighting";
					this->advantage1 = "Dark";
					this->advantage2 = "Ice";
					this->resistance1 = "Bug"; 
					this->resistance2 = "Dark";
					this->resistance3 = "Rock";
					this->health = 1910;
					this->damageattack = 80;
					this->skin.loadFromFile("Images/MACHOKE.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Mankey"){
					this->type = "Fighting";
					this->advantage1 = "Dark";
					this->advantage2 = "Normal";
					this->resistance1 = "Bug"; 
					this->resistance2 = "Dark";
					this->resistance3 = "Rock";
					this->health = 1002;
					this->damageattack = 148;
					this->skin.loadFromFile("Images/MANKEY.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Oddish"){
					this->type = "Poison";
					this->advantage1 = "Rock";
					this->advantage2 = "Water";
					this->resistance1 = "Electric"; 
					this->resistance2 = "Grass";
					this->resistance3 = "Ground";
					this->health = 1069;
					this->damageattack = 131;
					this->skin.loadFromFile("Images/Oddish.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Ratata"){
					this->type = "Normal";
					this->advantage1 = "";
					this->advantage2 = "";
					this->resistance1 = "Ghost"; 
					this->resistance2 = "";
					this->resistance3 = "";
					this->health = 588;
					this->damageattack = 103;
					this->skin.loadFromFile("Images/RATATA.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Clefairy"){
					this->type = "Fairy";
					this->advantage1 = "Dark";
					this->advantage2 = "Fighting";
					this->resistance1 = "Bug"; 
					this->resistance2 = "Dark";
					this->resistance3 = "Fighting";
					this->health = 1085;
					this->damageattack = 107;
					this->skin.loadFromFile("Images/Clefairy.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Cubone"){
					this->type = "Ground";
					this->advantage1 = "Electric";
					this->advantage2 = "Fire";
					this->resistance1 = "Electric"; 
					this->resistance2 = "Poison";
					this->resistance3 = "Rock";
					this->health = 720;
					this->damageattack = 50;
					this->skin.loadFromFile("Images/cubone.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Drowzee"){
					this->type = "Psychic";
					this->advantage1 = "Fighting";
					this->advantage2 = "Poison";
					this->resistance1 = "Fighting"; 
					this->resistance2 = "Psychic";
					this->resistance3 = "";
					this->health = 950;
					this->damageattack = 70;
					this->skin.loadFromFile("Images/drowzee.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Jynx"){
					this->type = "Psychic";
					this->advantage1 = "Fighting";
					this->advantage2 = "Poison";
					this->resistance1 = "Fighting"; 
					this->resistance2 = "Psychic";
					this->resistance3 = "";
					this->health = 800;
					this->damageattack = 200;
					this->skin.loadFromFile("Images/Jynx.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Meowth"){
					this->type = "Normal";
					this->advantage1 = "";
					this->advantage2 = "";
					this->resistance1 = "Ghost"; 
					this->resistance2 = "";
					this->resistance3 = "";
					this->health = 638;
					this->damageattack = 92;
					this->skin.loadFromFile("Images/meowth.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Hitmonlee"){
					this->type = "Fighting";
					this->advantage1 = "Dark";
					this->advantage2 = "Ice";
					this->resistance1 = "Bug"; 
					this->resistance2 = "Dark";
					this->resistance3 = "Rock";
					this->health = 1100;
					this->damageattack = 80;
					this->skin.loadFromFile("Images/Hitmonlee.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Starmie"){
					this->type = "Water";
					this->advantage1 = "Fire";
					this->advantage2 = "Ground";
					this->resistance1 = "Fire"; 
					this->resistance2 = "Steel";
					this->resistance3 = "Water";
					this->health = 900;
					this->damageattack = 88;
					this->skin.loadFromFile("Images/starmie.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Voltorb"){
					this->type = "Electric";
					this->advantage1 = "Flying";
					this->advantage2 = "Water";
					this->resistance1 = "Electric"; 
					this->resistance2 = "Flying";
					this->resistance3 = "Steel";
					this->health = 600;
					this->damageattack = 232;
					this->skin.loadFromFile("Images/voltorb.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
				else if(name == "Koffing"){
					this->type = "Poison";
					this->advantage1 = "Rock";
					this->advantage2 = "Water";
					this->resistance1 = "Electric"; 
					this->resistance2 = "Grass";
					this->resistance3 = "Ground";
					this->health = 845;
					this->damageattack = 150;
					this->skin.loadFromFile("Images/Koffing.png");
					this->player.setSize(Vector2f(300.0f, 400.0f));
					this->player.setTexture(&skin);
					this->player.setPosition(*posx,560.0f);
					this->p1.complete(&skin, Vector2u(4,6), 0.2f, typeofplayer);
				}
				
			
			}
	
		
		//Getters
		
		float getDamageattack(){
			return damageattack;
		}
		
		float getHealth(){
			return health;
		}
		
		string getAdvantage1(){
			return advantage1;
		}
		
		string getAdvantage2(){
			return advantage2;
		}
		
		string getType(){
			return type;
		}
		
		string getName(){
			return name;
		}
		
		string getResistance1(){
			return resistance1;
		}
		
		string getResistance2(){
			return resistance2;
		}
		
		string getResistance3(){
			return resistance3;
		}
		
		Texture getTexture(){
			return this->skin;
		}
		
		RectangleShape getRectangleShape(){
			return this->player;
		}	
		

		
		int getTypeOfPlayer(){
			return typeofplayer;
		}
		
		
		//Setters
		
		void setType(string type){
			this->type = type;
		}
		
		void setDamageattack(float damageattack){
			this->damageattack = damageattack;
		}
		
		void setHealth(float health){
			this->health = health;
		}		
		
		void setAdvantage1(string advantage1){
			this->advantage1 = advantage1;
		}
		
		void setAdvantage2(string advantage2){
			this->advantage2 = advantage2;
		}
		
		void setName(string name){
			this->name=name;
		}
		
		void setResistance1(){
			this->resistance1 = resistance1;
		}
		
		void setResistance2(){
			this->resistance2 = resistance2;
		}
		
		void setResistance3(){
			this->resistance3 = resistance3;
		}
		//Functions
		
		void heal(){
			
			srand(time(NULL));
    		float random_number = (rand()%170)+1;
    		health += random_number;
    		//cout<<"\nYour Pokemon has gotten health. Your new Pokemon's health is -> " <<health;
    		
		}
		
		void attack(Pokemon &p2){
	
		//cout<<"\nYour First Pokemon's health is: " <<p1.getHealth()<<endl;
		if(advantage1 ==p2.getType() || advantage1 == p2.getType()){
	
		//	cout<<"\nA Pokemon is attacking with a CRITICAL ATTACK other Pokemon! "<<endl;
			p2.health-=damageattack*2;
		//	cout<<(p1.getDamageattack())*2<<" of DAMAGE!"<<endl;
	
		}
		
		else if(type==p2.getResistance1() || type==p2.getResistance2() || type==p2.getResistance3()){
		//	cout<<"\nA Pokemon is attacking other Pokemon with a low attack"<<endl;
			p2.health -= damageattack/2;
		//	cout<<(p1.getDamageattack())/2<<" of damage"<<endl;
		}

		else{
	
		//	cout<<"\nA Pokemon is attacking other Pokemon! "<<endl;
			p2.health-=damageattack;
		//	cout<<p1.getDamageattack()<<" of damage!"<<endl;
	
		}
		//cout<<"\nYour Second Pokemon's health now is: " <<p2.getHealth()<<endl;
		

		}
		

};

#endif



