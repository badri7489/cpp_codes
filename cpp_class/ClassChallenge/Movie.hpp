#ifndef MOVIE_HPP
#define MOVIE_HPP
#include <iostream>
#include <string>

class Movie
{
private:
	std::string movie_name;
	std::string rating;
	int watched;

public:
	Movie(std::string name, std::string movie_rating, int number_watched);
	Movie(const Movie &source);
	~Movie();
	void set_movie_name(std::string name);
	std::string get_movie_name() const;
	void set_rating(std::string rating);
	std::string get_rating() const;
	void set_watched(int watched);
	int get_watched() const;
	void increment_watch(std::string name);
	void display() const;
};

#endif // MOVIE_HPP
