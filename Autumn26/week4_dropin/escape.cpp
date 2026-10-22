#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Generate and display a random starting position
    // Initialise the move counter
    std::srand(std::time(NULL));
    int row = std::rand() %6+2;
    int col = std::rand() %6+2;
    std::cout<<row<<" "<<col<<std::endl;
    int row1 = row;
    int col1 = col;

    // While the knight has not reached a corner square:
        // Read destination coordinates from the user
        // If the move is valid:
            // Update position, increment move counter, display new position
        // Otherwise:
            // Display invalid move message
    int a1,a2;
    bool corner{false};
    int count;
    while(!corner)
    {
        std::cout<<"new try start, finish with 5 valid step"
        <<std::endl;
        std::cout<<"current position: "<<row1<<" "
        <<col1<<std::endl;
        int row=row1;
        int col=col1;   
        count=0;
        while(!corner && count<5){
            bool valid=false;
            std::cin>>a1>>a2;//the place that user want to go
            
            //check whether a1 a2 is valid move respect to row,col
            if(a1==row-2||a1==row+2){
                if(a2==col-1||a2==col+1){
                    valid=true;
                }
            }else if(a1==row-1||a1==row+1){
                if(a2==col-2||a2==col+2){
                    valid=true;
                }
            }
            if(a1<1 || a1>8 || a2>8 ||a2<1){
                valid=false;
            }
            if(valid){
                if((a1==1 ||a1==8) && (a2==1 ||a2==8)){
                    corner=true;
                }
            }else {
                std::cout<<"invalid move"<<std::endl;
            }
            if(valid){
                row=a1;
                col=a2;
                count++;
            }
            std::cout<<" current row: "<<row
                    <<" current col: "<<col
                    <<" current valid: "<<valid
                    <<" current valid move: "<<count<<std::endl;
        }
    }
    std::cout<<"reach corner!"<<std::endl;
    std::cout<<"total valid move: "<<count<<std::endl;
    // Display the total number of valid moves
    // taken to reach a corner square.
}