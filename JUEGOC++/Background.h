#ifndef BACKGROUND_H
#define BACKGROUND_H

#include<iostream>
#include <SFML/Graphics.hpp>
#include "DynamicArray.h"
#include <memory>

/*class Background{
	public:
		virtual void draw() = 0;
};

class Background1:public Background{
	private:
		sf::Texture background;
	public:
		draw(sf::RenderWindow &window){
			if (!background.loadFromFile("Images/background1.png"))
        		return EXIT_FAILURE;
    		sf::Sprite background1(background);
			window.draw(background1);
		}
};

class Background2:public Background{
	private:
		sf::Texture background;
	public:
		draw(sf::RenderWindow &window){
			if (!background.loadFromFile("Images/background2.png"))
        		return EXIT_FAILURE;
    		sf::Sprite background2(background);
			window.draw(background2);
		}
};

class Background3:public Background{
	private:
		sf::Texture background;
	public:
		draw(sf::RenderWindow &window){
			if (!background.loadFromFile("Images/background3.png"))
        		return EXIT_FAILURE;
    		sf::Sprite background3(background);
			window.draw(background3);
		}
};
*/

namespace std {
    template<class T> struct _Unique_if {
        typedef unique_ptr<T> _Single_object;
    };

    template<class T> struct _Unique_if<T[]> {
        typedef unique_ptr<T[]> _Unknown_bound;
    };

    template<class T, size_t N> struct _Unique_if<T[N]> {
        typedef void _Known_bound;
    };

    template<class T, class... Args>
        typename _Unique_if<T>::_Single_object
        make_unique(Args&&... args) {
            return unique_ptr<T>(new T(std::forward<Args>(args)...));
        }

    template<class T>
        typename _Unique_if<T>::_Unknown_bound
        make_unique(size_t n) {
            typedef typename remove_extent<T>::type U;
            return unique_ptr<T>(new U[n]());
        }

    template<class T, class... Args>
        typename _Unique_if<T>::_Known_bound
        make_unique(Args&&...) = delete;
}

class Create_Background{
	public:
		Create_Background(sf::Sprite background1, sf::Sprite background2, sf::Sprite background3){
			
			std::unique_ptr<int> background = make_unique<int[]>(5);
			
		}
};

#endif
