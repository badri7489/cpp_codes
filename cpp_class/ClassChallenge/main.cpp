#include <iostream>
#include <string>
#include "Movie.hpp"

void increment_watched(Movies &movies, std::string name);
void add_movie(Movies &movies, std::string name, std::string rating, int watched);

void increment_watched(Movies &movies, std::string name)
{
	if(movies.increment_watched(name))
		std::cout << "watch incremented" << std::endl;
	else
		std::cout << "Not Found" << std::endl;
}

void add_movie(Movies &movies, std::string name, std::string rating, int watched)
{
	if(movies.add_movie(name, rating, watched))
		std::cout << name << " added" << std::endl;
	else
		std::cout << name << " already exists" << std::endl;
}

int main()
{
	Movies my_movies;
	
	my_movies.display();
	
	add_movie(my_movies, "Big", "PG-13", 2);
	add_movie(my_movies, "Ironman", "PG-13", 5);
	add_movie(my_movies, "Ironman 2", "PG-13", 7);
	
	increment_watched(my_movies, "Big");
	
	my_movies.display();
	std::cout << my_movie.get_movie_name() << std::endl;
	return 0;
}
