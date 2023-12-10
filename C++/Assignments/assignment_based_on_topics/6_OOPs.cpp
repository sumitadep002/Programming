#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movie {
private:
    string name;
    string rating;
    int watched;

public:
    
    Movie(string name, string rating, int watched)
        : name(name), rating(rating), watched(watched) {}

    // getters and setters
    string getName() const { return name; }
    string getRating() const { return rating; }
    int getWatched() const { return watched; }
    void setName(string name) { this->name = name; }
    void setRating(string rating) { this->rating = rating; }
    void setWatched(int watched) { this->watched = watched; }

    
    void incrementWatched() { watched++; }

    
    void display() const {
        cout << name << ", " << rating << ", watched " << watched << " times";
    }
};

class Movies {
private:
    vector<Movie> movies;

public:
    
    void addMovie(string name, string rating, int watched) {
        for (const Movie& movie : movies) {
            if (movie.getName() == name) {
                cout << "Error: movie already exists in the collection\n";
                return;
            }
        }
        movies.push_back(Movie(name, rating, watched));
    }

    
    void incrementWatched(string name) {
        for (Movie& movie : movies) {
            if (movie.getName() == name) {
                movie.incrementWatched();
                return;
            }
        }
        cout << "Error: movie not found in the collection\n";
    }

    
    void displayAll() const {
        if (movies.size() == 0) {
            cout << "No movies in the collection\n";
        } else {
            for (const Movie& movie : movies) {
                movie.display();
                cout << endl;
            }
        }
    }
};

int main() {
    Movies movies;

    movies.addMovie("Dark knight Rises", "R", 3);
    movies.addMovie("Man of Steel", "R", 5);
    movies.addMovie("Iron Man", "PG-13", 2);
    movies.displayAll();

    cout << endl;

    movies.incrementWatched("Dark knight Rises");
    movies.incrementWatched("Man of Steel");
    movies.incrementWatched("Iron Man");
    movies.displayAll();

    return 0;
}
