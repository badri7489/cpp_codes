#include "Movie.hpp"

Movie::Movie(std::string name, std::string movie_rating, int number_watched)
    : movie_name(name), rating(movie_rating), watched(number_watched)
{
    std::cout << "Three args constructor called and initialised." << std::endl;
}

Movie::Movie(const Movie &source)
    : Movie(source.name, source.rating, source.watched)
{
    std::cout << "Copy constructor called" << std::endl;
}

Movie::~Movie()
{
    std::cout << "Destructor called." << std::endl;
}

void set_movie_name(std::string name)
{
    this->movie_name = name;
}

std::string Movie::get_movie_name() const
{
    return movie_name;
}

void set_rating(std::string rating)
{
    this->rating = rating;
}

std::string Movie::get_rating() const
{
    return rating;
}

void set_watched(int watched)
{
    this->watched = watched;
}

int get_watched() const
{
    return watched;
}

void Movie::increment_watch(std::string name)
{
    ++watched;
}

void Movie::display()
{
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}