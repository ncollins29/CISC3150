#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int * credit_pos(std::vector<int> v, int n, int credit);

int main(int argc, char ** argv) {

    std::ifstream infile(argv[1]);
    if(!infile) {
        std::cout << "could not open the file" << infile << std::endl;
        return EXIT_FAILURE;
    }
    
    std::ofstream outfile (argv[2]);
    if(!outfile) {
    std::cout << "could not open the file" << outfile << std::endl;
        return EXIT_FAILURE;
    }

    int num_cases, i = 0, n_items, credit;
    
    infile >> num_cases;
    
    while(i < num_cases){
        infile >> credit;
        infile >> n_items;
        int price;
        std::vector<int> prices;
        for(int j=0; j < n_items; j++){
            infile >> price;
            prices.push_back(price);
        }
        int * loc = credit_pos(prices, n_items, credit);
        
        outfile <<"Case #"<< i+1 <<": " << loc[0] <<" "<< loc[1] << std::endl;
        i++;
    }
}

int * credit_pos(std::vector<int> prices, int n_items, int credit)
{
    int  temp[2];
    for(int i=0; i<n_items-1; i++){
        for(int j=i+1; j < n_items; j++){
            if(!(prices[i] + prices[j] == credit));
            else 
                temp[0] = i + 1, temp[1] = j + 1;
            
        }
    }
    
    return temp;
}
