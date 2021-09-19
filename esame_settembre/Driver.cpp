#include <iostream>
#include <vector>
#include <iomanip>
#include "List.h"
#include "Page.h"
#include <ctime>

using std::cout;
using std::vector;

void rankUpdate(Page &page, 
    const vector<Page> &pages, 
    const vector<List> &web); // Page with rank to be modified

void initPages(vector<Page> &pages, int N); // Init pages with random values

// Does not work really well, rand values are not always correct
void initWeb(vector<List> &web, vector<Page> pages);

int main(){
    const int N{5}; // Numero di pagine
    vector<Page> pages = vector<Page>(N);
    initPages(pages, N);

    vector<List> web = vector<List>(N);
    initWeb(web, pages);

    // Stampo il Web
    cout << "Stampa del WEB senza rank update: \n";

    for (int i=0;i<N;i++){
        cout << "Pagina " << i << ": ";
        web[i].display();
    }

    // Stampo rank di ogni pagina
    cout << "Stampa rank pagine non aggiornati\n";
    for (int i=0;i<N;i++){
        cout << "Rank pagina " << pages[i].getId() << ": " << std::setprecision(2) << pages[i].getP() << "\n";
    }

    for (int i=0;i<N;i++){
        rankUpdate(pages[i], pages, web);
    }

    // Updated Rank
    cout << "Stampa rank pagine aggiornati\n";
    for (int i=0;i<N;i++){
        cout << "Rank pagina " << pages[i].getId() << ": " << pages[i].getP() << "\n";
    }

    return 0;
}
/*
    @params
        page: page with rank to be modified
        pages: vector containing all pages (IT IS NOT WEB!!!)
        web: vector with pages and their linked pages
*/
void rankUpdate(Page &page, const vector<Page> &pages, const vector<List> &web){
    int pageId = page.getId();
    const double delta = 0.6f;
    double k = (double)(1-delta)/pages.size(); // N = pages.size();

    double sum{0};
    for (int i=0; i<web.size(); i++){

        if (i != pageId && web[i].contains(pageId)){
            Page container = pages[i];
            sum += (double)container.getP()/container.getL();
        }
    }

    double newP = k + delta*sum;
    page.setP(newP);
}

void initPages(vector<Page> &pages, int N){

    Page page{N};
    srand(time(nullptr)*10);  
    for (int i=0;i<N;i++){
        page.setId(i);
        int numOfLinks = rand()%(N-1);
        page.setL(numOfLinks);

        pages[i] = page;
    }
}

void initWeb(vector<List> &web, vector<Page> pages){
    
    srand(time(nullptr)*10); 
    for (int i=0;i<web.size();i++){
        
        int numOfLinks = pages[i].getL();
        
        for (int j=0;j<numOfLinks; j++){
            int randPageId;

            randPageId = rand()%(numOfLinks);

            // Create randPageId different from current pageId
            // It does take a lot of time some times, so I removed it
            /*
            do{
                randPageId = rand()%(numOfLinks);
            }while(rangePageId != i)
            */

            web[i].push(randPageId);
            
        }
    }
}