#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>


constexpr int MAX_NUMBER_OF_ITEMS = 3;

constexpr float CalculateHeight(float height, float number){
	return height/(MAX_NUMBER_OF_ITEMS+1)*number;
}

class Menu{
	protected:
		
		int selectedItemIndex;
		sf::Font font;
		sf::Text menu[20];
		
	public:
		Menu(float width, float height){
			if(!font.loadFromFile("Fonts/Pokemon Solid.ttf")){
				//handle error
			}
			
			selectedItemIndex = 0;
			
			menu[0].setFont(font);
			menu[0].setFillColor(sf::Color::Red);
			menu[0].setString("Play");
			menu[0].setPosition(sf::Vector2f(width/2, CalculateHeight(height,1)));
			menu[0].setCharacterSize(100);
			
			menu[1].setFont(font);
			menu[1].setFillColor(sf::Color::White);
			menu[1].setString("Instructions");
			menu[1].setPosition(sf::Vector2f(width/2, CalculateHeight(height,2)));
			menu[1].setCharacterSize(100);
			
			menu[2].setFont(font);
			menu[2].setFillColor(sf::Color::White);
			menu[2].setString("Exit");
			menu[2].setPosition(sf::Vector2f(width/2, CalculateHeight(height,3)));
			menu[2].setCharacterSize(100);
		}
		
		~Menu(){
		}
		
		virtual void draw(sf::RenderWindow &window){
			for(int i=0; i< MAX_NUMBER_OF_ITEMS; i++){
				window.draw(menu[i]);
			}
		}
		
		virtual void MoveUp(){
			if(selectedItemIndex - 1 >= 0){
				menu[selectedItemIndex].setFillColor(sf::Color::White);
				selectedItemIndex--;
				menu[selectedItemIndex].setFillColor(sf::Color::Red);
			}
		}
		
		virtual void MoveDown(){
			if(selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS){
				menu[selectedItemIndex].setFillColor(sf::Color::White);
				selectedItemIndex++;
				menu[selectedItemIndex].setFillColor(sf::Color::Red);
			}
		}
		
		int GetPressedItem(){
			return selectedItemIndex;
		}
		
		
		
};

#endif
