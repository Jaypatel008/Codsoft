#include <iostream>

int main() {
    int selected_movie;
    int number_of_seats;
    int movie_conformed;
    int seat_valid ;

    int booked_seats_1[] = {1, 2, 3, 4, 5, 10, 11, 12, 15, 17, 18, 19, 26, 27, 28, 29, 30, 34, 35, 36, 37, 38, 40, 41, 50, 51, 52};
    int booked_seats_2[] = {1, 2, 3, 4, 7, 9, 11, 13, 14, 15, 18, 19, 22, 25, 26, 28, 29, 30, 33, 35, 37, 39, 41, 43, 44, 46, 48, 49, 50, 51};
    int booked_seats_3[] = {2, 3, 5, 6, 10, 12, 13, 16, 17, 19, 22, 24, 25, 28, 29, 30, 31, 33, 35, 38, 39, 41, 43, 47, 48, 50, 51};

    int filled_1 = sizeof(booked_seats_1) / sizeof(booked_seats_1[0]);
    int avail_1 = 52 - filled_1;
    int filled_2 = sizeof(booked_seats_2) / sizeof(booked_seats_2[0]);
    int avail_2 = 52 - filled_2;
    int filled_3 = sizeof(booked_seats_3) / sizeof(booked_seats_3[0]);
    int avail_3 = 52 - filled_3;

    std::cout << ".....Welcome to Movie Booking system....." << std::endl;
    std::cout << std::endl;
    std::cout << "Please fill the details according to your requirements" << std::endl;
    std::cout << std::endl;
    std::cout << "We have total 3  movies available for now " << std::endl;
    std::cout << std::endl;
    std::cout << "1. KGF chapter 2 at prize 150 ruppes" << std::endl;
    std::cout << "2. Puspa at prize 130 ruppes" << std::endl;
    std::cout << "3. Beast at prize 120 ruppes" << std::endl;
    std::cout << std::endl;
    std::cout << "Chose your movie (as 1,2 or 3): " << std::ends;
    std::cin >> selected_movie;
    std::cout << std::endl;

    switch (selected_movie)
    {
        case 1: std::cout << ".....KGF chapter 2....." <<std::endl;
        movie_conformed = 1 ;
        std::cout << "unavailable seats (already occupied) are : " << std::ends;
        std::cout << filled_1 << " out of 52" << std::endl;
        std::cout << std::endl;

        std::cout << "Unavailable seat number :" << std::ends;
        for (int i = 0; i < filled_1; i++) {
        std::cout << booked_seats_1[i] << std::ends;
        if (i != filled_1 - 1) {
            std::cout << "," << std::ends;
        }
        else {
            std::cout << "" << std::endl;
            }
        }
        std::cout << std::endl;
            std::cout << "availabe seats :" << avail_1 << std::endl;
        break;

        case 2: std::cout << ".....Puspa....." <<std::endl;
        movie_conformed = 2 ;
        std::cout << "unavailable seats (already occupied) are : " << std::ends;
        std::cout << filled_2 << " out of 52" << std::endl;
        std::cout << std::endl;

        std::cout << "Unavailable seat number :" << std::ends;
        for (int i = 0; i < filled_2; i++) {
        std::cout << booked_seats_2[i] << std::ends;
        if (i != filled_2 - 1) {
            std::cout << "," << std::ends;
        }
        else {
            std::cout << "" << std::endl;
            }
        }
        std::cout << std::endl;
            std::cout << "availabe seats: " << avail_2 << std::endl;
        break;

        case 3: std::cout << ".....Beast....." <<std::endl;
        movie_conformed = 3 ;
        std::cout << "unavailable seats (already occupied) are : " << std::ends;
        std::cout << filled_3 << " out of 52" << std::endl;
        std::cout << std::endl;

        std::cout << "Unavailable seat number :" << std::ends;
        for (int i = 0; i < filled_3; i++) {
        std::cout << booked_seats_3[i] << std::ends;
        if (i != filled_3 - 1) {
            std::cout << "," << std::ends;
        }
        else {
            std::cout << "" << std::endl;
            }
        }
        std::cout << std::endl;
            std::cout << "availabe seats :" << avail_3 << std::endl;
        break;
    }

    std::cout << "how many seats you want to book? : " <<std::ends;
    std::cin >> number_of_seats;
    std::cout << std::endl;

    switch (movie_conformed)
    {
        case 1:
        if (number_of_seats > avail_1 ) {
            std::cout << "sorry...We do not have that number of available seats." << std::endl;
        }
        break;

        case 2:
        if (number_of_seats > avail_2 ) {
            std::cout << "sorry...We do not have that number of available seats." << std::endl;
        }
        break;

        case 3:
        if (number_of_seats > avail_3 ) {
            std::cout << "sorry...We do not have that number of available seats." << std::endl;
        }
        break;
    }

    int* chosen_seats = new int[number_of_seats];
    std::cout<< "please enter the seat.no that you want to book" <<std::endl;

    switch(movie_conformed){
    case 1:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
        std::cout << "enter seat.no " << i << " :" << std::ends;
        std::cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 52) {
            std::cout << "Invalid seat number. Please enter a valid seat number (1 to 52)." << std::endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                    std::cout << "You had already chosen that seat before. Enter another seat number." << std::endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_1; m++) {
                    if (booked_seats_1[m] == chosen_seats[i - 1]) {
                        std::cout << "Selected seat is already occupied. Please choose another seat." << std::endl;
                        break;
                        break;
                    } 
                    else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    case 2:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
        std::cout << "enter seat.no " << i << " :" << std::ends;
        std::cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 52) {
            std::cout << "Invalid seat number. Please enter a valid seat number (1 to 52)." << std::endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                    std::cout << "You had already chosen that seat before. Enter another seat number." << std::endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_2; m++) {
                    if (booked_seats_2[m] == chosen_seats[i - 1]) {
                        std::cout << "Selected seat is already occupied. Please choose another seat." << std::endl;
                        break;
                    } else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    case 3:
    for (int i = 1; i <= number_of_seats; i++) {
    seat_valid = 0;
    do {
        std::cout << "enter seat.no " << i << " :" << std::ends;
        std::cin >> chosen_seats[i - 1];
        
        if (chosen_seats[i - 1] < 1 || chosen_seats[i - 1] > 52) {
            std::cout << "Invalid seat number. Please enter a valid seat number (1 to 52)." << std::endl;
        } else {
            bool alreadyChosen = false;
            for (int j = 0; j < i - 1 ; j++) {
                if (chosen_seats[j] == chosen_seats[i - 1]) {
                    std::cout << "You had already chosen that seat before. Enter another seat number." << std::endl;
                    alreadyChosen = true;
                    break;
                }
            }
            if (!alreadyChosen) {
                for (int m = 0; m < filled_3; m++) {
                    if (booked_seats_3[m] == chosen_seats[i - 1]) {
                        std::cout << "Selected seat is already occupied. Please choose another seat." << std::endl;
                        break;
                    } else {
                        seat_valid = 1;
                        }
                    }
                }
            }
        } while (seat_valid == 0);
    }
    break;

    }

    std::cout << std::endl << std::endl;
    std::cout << "..... TOTAL BILL ....." << std::endl;
    std::cout << std::endl;
    std::cout << "Movie Name : " << std::ends;

    switch(selected_movie){
        case 1 : std::cout << "KGF chapter 2 " << std::endl;
        break;

        case 2 : std::cout << "Puspa " << std::endl;
        break;
        
        case 3 : std::cout << "Beast " << std::endl;
        break;

    }

    std::cout << "Seats Booked : " << std::ends;
    std::cout << number_of_seats << std::endl;
    std::cout << std::endl;

    std::cout << "Booked seats' number " << std::endl;

    for (int i = 1; i <= number_of_seats; i++)
    {
        std::cout << "Seat number " << i << " : " << std::ends; 
        std::cout << chosen_seats[i - 1] << std::endl; 
    }
    
    std::cout << std::endl;

    std::cout << "Ticket Cost Per Seat: " << std::ends;

    switch (selected_movie)
    {
    case 1: std::cout << "150 Rupees " << std::endl;
        break;

    case 2: std::cout << "130 Rupees " << std::endl;
        break;

    case 3: std::cout << "120 Rupees " << std::endl;
        break;

    }

    std::cout<< "Total Cost : " << std::ends;

    switch (selected_movie)
    {
    case 1: std::cout << 150 * number_of_seats << std::ends;
        break;

    case 2: std::cout << 130 * number_of_seats << std::ends;
        break;

    case 3: std::cout << 120 * number_of_seats << std::ends;
        break;

    }

    std::cout << " Rupees" << std::endl;

    std::cout << std::endl;
    std::cout<< "..... THANK YOU FOR PUCHASING TICKECTS ....." << std::endl;
    std::cout << "..... ENJOY THE MOVIE ....." << std::endl;
    std::cout << std::ends;  

    return 0;
}
