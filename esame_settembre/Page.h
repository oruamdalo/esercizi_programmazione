#ifndef PAGE_H
#define PAGE_H

class Page{
    public:
        Page();
        Page(int); // int = numero di pagine del web

        // Setters
        void setId(int);
        void setL(int);
        void setP(double);

        // Getters
        int getId() const;
        int getL() const;
        double getP() const;

    private:
        int id;
        int L;
        double P;
};

#endif