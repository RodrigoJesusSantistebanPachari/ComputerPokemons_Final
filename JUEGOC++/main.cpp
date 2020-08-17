#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <thread>
#include "pokemonclass.h"
#include "menu.h"
#include "Seleccion.h"
#include "Seleccion2.h"

using namespace sf;

void f(){
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
	
	// Create the main window
    RenderWindow window(VideoMode(1920, 1080), "Computer Science's Pokemons", Style::Close | Style::Resize);
   
    
   	Menu menu(window.getSize().x, window.getSize().y);
   	Selection selection(window.getSize().x, window.getSize().y);
   	Selection2 selection2(window.getSize().x, window.getSize().y);
        
    Texture background;   
    Texture backgroundmenu;
    Texture instructionss;
    Texture select;
    
    if (!background.loadFromFile("Images/fondo.png"))
        return EXIT_FAILURE;
        
	if (!backgroundmenu.loadFromFile("Images/fondoo.png"))
        return EXIT_FAILURE;
    
    if (!instructionss.loadFromFile("Images/instrucciones.png"))
        return EXIT_FAILURE;
        
    if (!select.loadFromFile("Images/select.png"))
        return EXIT_FAILURE;

   //p1.complete(&skin, Vector2u(4,6), 0.2f, 100.0f);
    
    Sprite backgroundd(background);
    Sprite backgrounddmenu(backgroundmenu);
    Sprite instructions(instructionss);
    Sprite selectt(select);
    
    
    // Create a graphical text to display
    
    Font font;
    if (!font.loadFromFile("Fonts/Pokemon Solid.ttf"))
        return EXIT_FAILURE;
    
    
	std::string pokemonone;
	std::string pokemontwo;
    
    float deltaTime = 0.0f;
    Clock clock;
    
    
    
    // Start the game loop
    while (window.isOpen())
    {
  
        // Process events
        Event event;
        while (window.pollEvent(event)){
        	
        	if(Keyboard::isKeyPressed(Keyboard::Up)){
        		menu.MoveUp();
			}
			
			if(Keyboard::isKeyPressed(Keyboard::Down)){
				menu.MoveDown();
			}
			
			if(Keyboard::isKeyPressed(Keyboard::Return)){
				if(menu.GetPressedItem()==0){
					
				    while(window.isOpen()){
				    	
				    	
				    	Event event1;
				    	
				    	while(window.pollEvent(event1)){
				    		if(event1.type == Event::Closed)
								window.close();
							
							if(Keyboard::isKeyPressed(Keyboard::W)){
        						selection.MoveUp();
							}	
							
							if(Keyboard::isKeyPressed(Keyboard::S)){
        						selection.MoveDown();
							}
							
							if(Keyboard::isKeyPressed(Keyboard::Up)){
        						selection2.MoveUp();
							}	
							
							if(Keyboard::isKeyPressed(Keyboard::Down)){
        						selection2.MoveDown();
							}
							
							if(Keyboard::isKeyPressed(Keyboard::Q)){
								if(selection.GetPressedItem()==0){
									pokemonone = "Charmander";
								}
								
								if(selection.GetPressedItem()==1){
									pokemonone = "Squirtle";
								}
								
								if(selection.GetPressedItem()==2){
									pokemonone = "Bulbasaur";
								}
								
								if(selection.GetPressedItem()==3){
									pokemonone = "Caterpie";
								}
								
								if(selection.GetPressedItem()==4){
									pokemonone = "Butterfree";
								}
								
								if(selection.GetPressedItem()==5){
									pokemonone = "Diglet";
								}
								
								if(selection.GetPressedItem()==6){
									pokemonone = "Machoke";
								}
								
								if(selection.GetPressedItem()==7){
									pokemonone = "Mankey";
								}
								
								if(selection.GetPressedItem()==8){
									pokemonone = "Oddish";
								}
								
								if(selection.GetPressedItem()==9){
									pokemonone = "Pikachu";
								}
								
								if(selection.GetPressedItem()==10){
									pokemonone = "Ratata";
								}
								
								if(selection.GetPressedItem()==11){
									pokemonone = "Clefairy";
								}
								
								if(selection.GetPressedItem()==12){
									pokemonone = "Drowzee";
								}
								
								if(selection.GetPressedItem()==13){
									pokemonone = "Jynx";
								}
								
								if(selection.GetPressedItem()==14){
									pokemonone = "Meowth";
								}
								
								if(selection.GetPressedItem()==15){
									pokemonone = "Cubone";
								}
								
								if(selection.GetPressedItem()==16){
									pokemonone = "Hitmonlee";
								}
								
								if(selection.GetPressedItem()==17){
									pokemonone = "Starmie";
								}
								
								if(selection.GetPressedItem()==18){
									pokemonone = "Voltorb";
								}
								
								if(selection.GetPressedItem()==19){
									pokemonone = "Koffing";
								}
								
							}
							
							if(Keyboard::isKeyPressed(Keyboard::Return)){
								if(selection2.GetPressedItem()==0){
									pokemontwo = "Charmander";
								}
								
								if(selection2.GetPressedItem()==1){
									pokemontwo = "Squirtle";
								}
								
								if(selection2.GetPressedItem()==2){
									pokemontwo = "Bulbasaur";
								}
								
								if(selection2.GetPressedItem()==3){
									pokemontwo = "Caterpie";
								}
								
								if(selection2.GetPressedItem()==4){
									pokemontwo = "Butterfree";
								}
								
								if(selection2.GetPressedItem()==5){
									pokemontwo = "Diglet";
								}
								
								if(selection2.GetPressedItem()==6){
									pokemontwo = "Machoke";
								}
								
								if(selection2.GetPressedItem()==7){
									pokemontwo = "Mankey";
								}
								
								if(selection2.GetPressedItem()==8){
									pokemontwo = "Oddish";
								}
								
								if(selection2.GetPressedItem()==9){
									pokemontwo = "Pikachu";
								}
								
								if(selection2.GetPressedItem()==10){
									pokemontwo = "Ratata";
								}
								
								if(selection2.GetPressedItem()==11){
									pokemontwo = "Clefairy";
								}
								
								if(selection2.GetPressedItem()==12){
									pokemontwo = "Drowzee";
								}
								
								if(selection2.GetPressedItem()==13){
									pokemontwo = "Jynx";
								}
								
								if(selection2.GetPressedItem()==14){
									pokemontwo = "Meowth";
								}
								
								if(selection2.GetPressedItem()==15){
									pokemontwo = "Cubone";
								}
								
								if(selection2.GetPressedItem()==16){
									pokemontwo = "Hitmonlee";
								}
								
								if(selection2.GetPressedItem()==17){
									pokemontwo = "Starmie";
								}
								
								if(selection2.GetPressedItem()==18){
									pokemontwo = "Voltorb";
								}
								
								if(selection2.GetPressedItem()==19){
									pokemontwo = "Koffing";
								}
								
							}
							
							if(Keyboard::isKeyPressed(Keyboard::Space) && (pokemonone != "") && (pokemontwo != "")){
								
			        			Pokemon p1(pokemonone,1);
			   					Pokemon p2(pokemontwo,2);
			   					
			   					int turn = 0;
			   					
			   					
			   					//Names
			   
			   					Text pokemon1;
			   					pokemon1.setFont(font);
			   					pokemon1.setCharacterSize(130);
			    				pokemon1.setString(p1.getName());
			    				pokemon1.setOrigin(-90,-110);
				   
			    				Text pokemon2;
			  					pokemon2.setFont(font);
								pokemon2.setCharacterSize(130);
			   					pokemon2.setString(p2.getName());
			   					pokemon2.setOrigin(-1150,-110);
			   
			   
			   					//Health
								Text pokemon1health;
							    pokemon1health.setFont(font);
							    pokemon1health.setCharacterSize(30);
							    pokemon1health.setString(std::to_string(p1.getHealth()));
							    pokemon1health.setOrigin(-460, -390);
			    
							    Text pokemon2health;
							    pokemon2health.setFont(font);
							    pokemon2health.setCharacterSize(30);
							    pokemon2health.setString(std::to_string(p2.getHealth()));
							    pokemon2health.setOrigin(-1380,-390);
							    
							    std::string life1 = std::to_string(p1.getHealth());
							    std::string life2 = std::to_string(p2.getHealth());
							    
							    //Health
								Text lifee1;
							    lifee1.setFont(font);
							    lifee1.setCharacterSize(30);
							    lifee1.setString(life1);
							    lifee1.setOrigin(-700, -390);
			    
							    Text lifee2;
							    lifee2.setFont(font);
							    lifee2.setCharacterSize(30);
							    lifee2.setString(life2);
							    lifee2.setOrigin(-1600,-390);
								
								while(window.isOpen()){
								
									int cont = 0;
									
									if(p1.getHealth()<=0 || p2.getHealth()<=0){

										for(int i =0; i<3000; i++){
											Event closeevent;
											while(window.pollEvent(closeevent)){
												if(closeevent.type == Event::Closed){
													window.close();
												}
											}
											
											
							    			
											window.clear();
											p1.p1.Draw(window);
											p2.p1.Draw(window);
											if(p1.getHealth()<=0){
												Text pokemonwinner;
			   									pokemonwinner.setFont(font);
			   									pokemonwinner.setCharacterSize(130);
			    								pokemonwinner.setString(p2.getName()+" won the game");
			    								pokemonwinner.setOrigin(-90,-110);
			    								window.draw(pokemonwinner);
											}
											
											if(p2.getHealth()<=0){
												Text pokemonwinner;
			   									pokemonwinner.setFont(font);
			   									pokemonwinner.setCharacterSize(130);
			    								pokemonwinner.setString(p1.getName()+" won the game");
			    								pokemonwinner.setOrigin(-90,-110);
			    								window.draw(pokemonwinner);
											}
											
											window.display();
											
										}
										break;
								   	}
									
									deltaTime = clock.restart().asSeconds();
									
									Event gameevent;
									
									
									while(window.pollEvent(gameevent)){
									if(gameevent.type == Event::Closed){
											window.close();
										}
									}
									
									
									if(Keyboard::isKeyPressed(Keyboard::V) && (turn==0)){
										p1.heal();
										std::thread sleep(f);
										sleep.join();
										turn = 1;
									}
									
									if(Keyboard::isKeyPressed(Keyboard::P) && (turn==1)){
										p2.heal();
										std::thread sleep(f);
										sleep.join();
										turn = 0;
									}
									
									
									p1.p1.Update(deltaTime);
									if(Keyboard::isKeyPressed(Keyboard::C) && (turn==0)){
										std::thread sleep(f);
										sleep.join();
										p1.attack(p2);
										turn = 1;
									}
									
									
									p2.p1.Update(deltaTime);
									if(Keyboard::isKeyPressed(Keyboard::O) && (turn==1)){
										std::thread sleep(f);
										sleep.join();
										p2.attack(p1);
										turn = 0;
									}
									
			       					//p1.player.setTextureRect(p1.getAnimation().uvRect);
			       					
									window.clear();
			       					
			       					window.draw(backgroundd);
			       					
			       					window.draw(pokemon1);
			       					window.draw(pokemon2);
			       					
			       					window.draw(pokemon1health);
			       					window.draw(pokemon2health);
			       					
			       					window.draw(lifee1);
			       					window.draw(lifee2);
			       					
									pokemon1health.setString(std::to_string(p1.getHealth()));
									pokemon2health.setString(std::to_string(p2.getHealth()));
									 
									//window.draw(p1.getRectangleShape());
									p1.p1.Draw(window);
									p2.p1.Draw(window);
									
									
									window.display();
									
									
								}
							}				
						}
						
						window.clear();
						window.draw(selectt);
						selection.draw(window);
						selection2.draw(window);
						window.display();
						
						if(Keyboard::isKeyPressed(Keyboard::Escape)){
							break;
						}

				    	
					}
					
				}
				if(menu.GetPressedItem()==1){
					while(window.isOpen()){
						
						Event gameevent;
						
						
						while(window.pollEvent(gameevent)){
						if(gameevent.type == Event::Closed){
								window.close();
							}
						}
						
						if(Keyboard::isKeyPressed(Keyboard::Escape)){
							break;
						}
						
						window.clear();
						window.draw(instructions);
						window.display();
					}
					
				}
				if(menu.GetPressedItem()==2){
					window.close();
				}
			}
        	
            // Close window: exit
            if (event.type == Event::Closed)
                window.close();
        }
    	
    	
        
        
        // Clear screen
       	window.clear();
        // Draw the string
       
       	window.draw(backgrounddmenu);
       	
        menu.draw(window);
        
        
        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}
