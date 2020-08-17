#ifndef SELECCION2_H
#define SELECCION2_H

#include "menu.h"
#include <SFML/Graphics.hpp>



class Selection2:public Menu{
	
	public:
		Selection2(float width, float height):Menu(width, height){
			if(!font.loadFromFile("Fonts/Pokemon Solid.ttf")){
				//handle error
			}
			
			
			menu[0].setFont(font);
			menu[0].setFillColor(sf::Color::Blue);
			menu[0].setString("Charmander");
			menu[0].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 1)));
			menu[0].setCharacterSize(100);
			menu[0].setCharacterSize(32);
			
			menu[1].setFont(font);
			menu[1].setFillColor(sf::Color::White);
			menu[1].setString("Squirtle");
			menu[1].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 2)));
			menu[1].setCharacterSize(100);
			menu[1].setCharacterSize(32);
			
			menu[2].setFont(font);
			menu[2].setFillColor(sf::Color::White);
			menu[2].setString("Bulbasaur");
			menu[2].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 3)));
			menu[2].setCharacterSize(100);
			menu[2].setCharacterSize(32);
			
			menu[3].setFont(font);
			menu[3].setFillColor(sf::Color::White);
			menu[3].setString("Caterpie");
			menu[3].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 4)));
			menu[3].setCharacterSize(100);
			menu[3].setCharacterSize(32);
			
			menu[4].setFont(font);
			menu[4].setFillColor(sf::Color::White);
			menu[4].setString("Butterfree");
			menu[4].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 5)));
			menu[4].setCharacterSize(32);
			
			menu[5].setFont(font);
			menu[5].setFillColor(sf::Color::White);
			menu[5].setString("Diglet");
			menu[5].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 6)));
			menu[5].setCharacterSize(32);
			
			menu[6].setFont(font);
			menu[6].setFillColor(sf::Color::White);
			menu[6].setString("Machoke");
			menu[6].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 7)));
			menu[6].setCharacterSize(32);
			
			menu[7].setFont(font);
			menu[7].setFillColor(sf::Color::White);
			menu[7].setString("Mankey");
			menu[7].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 8)));
			menu[7].setCharacterSize(32);
			
			menu[8].setFont(font);
			menu[8].setFillColor(sf::Color::White);
			menu[8].setString("Oddish");
			menu[8].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 9)));
			menu[8].setCharacterSize(32);
			
			menu[9].setFont(font);
			menu[9].setFillColor(sf::Color::White);
			menu[9].setString("Pikachu");
			menu[9].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 10)));
			menu[9].setCharacterSize(32);
			
			menu[10].setFont(font);
			menu[10].setFillColor(sf::Color::White);
			menu[10].setString("Ratata");
			menu[10].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 11)));
			menu[10].setCharacterSize(32);
			
			menu[11].setFont(font);
			menu[11].setFillColor(sf::Color::White);
			menu[11].setString("Clefairy");
			menu[11].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 12)));
			menu[11].setCharacterSize(32);
			
			menu[12].setFont(font);
			menu[12].setFillColor(sf::Color::White);
			menu[12].setString("Drowzee");
			menu[12].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 13)));
			menu[12].setCharacterSize(32);
			
			menu[13].setFont(font);
			menu[13].setFillColor(sf::Color::White);
			menu[13].setString("Jynx");
			menu[13].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 14)));
			menu[13].setCharacterSize(32);
			
			menu[14].setFont(font);
			menu[14].setFillColor(sf::Color::White);
			menu[14].setString("Meowth");
			menu[14].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 15)));
			menu[14].setCharacterSize(32);
			
			menu[15].setFont(font);
			menu[15].setFillColor(sf::Color::White);
			menu[15].setString("Cubone");
			menu[15].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 16)));
			menu[15].setCharacterSize(32);
			
			menu[16].setFont(font);
			menu[16].setFillColor(sf::Color::White);
			menu[16].setString("Hitmonlee");
			menu[16].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 17)));
			menu[16].setCharacterSize(32);
			
			menu[17].setFont(font);
			menu[17].setFillColor(sf::Color::White);
			menu[17].setString("Starmie");
			menu[17].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 18)));
			menu[17].setCharacterSize(32);
			
			menu[18].setFont(font);
			menu[18].setFillColor(sf::Color::White);
			menu[18].setString("Voltorb");
			menu[18].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 19)));
			menu[18].setCharacterSize(32);
			
			menu[19].setFont(font);
			menu[19].setFillColor(sf::Color::White);
			menu[19].setString("Koffing");
			menu[19].setPosition(sf::Vector2f(1200, CalculateHeight1(height, 20)));
			menu[19].setCharacterSize(32);
			
			
			
		}
		
		void draw(sf::RenderWindow &window){
			for(int i=0; i< MAX_NUMBER_OF_POKEMON; i++){
				window.draw(menu[i]);
			}	
		}
		
		void MoveDown(){
			if(selectedItemIndex + 1 < MAX_NUMBER_OF_POKEMON){
				menu[selectedItemIndex].setFillColor(sf::Color::White);
				selectedItemIndex++;
				menu[selectedItemIndex].setFillColor(sf::Color::Blue);
			}
		}
		
		void MoveUp(){
			if(selectedItemIndex - 1 >= 0){
				menu[selectedItemIndex].setFillColor(sf::Color::White);
				selectedItemIndex--;
				menu[selectedItemIndex].setFillColor(sf::Color::Blue);
			}
		}
		
		
};

#endif
