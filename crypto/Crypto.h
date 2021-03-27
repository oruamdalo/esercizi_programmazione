class Crypto{

    public:
        Crypto(int message) : msg{message}{
        };

        // Setters and getters
        void setMessage(int message){ msg = message; }
        int getMessage(){ return msg; }

        // Crypo functions
        void encryptMessage();

        void decryptMessage();

        bool isValid();


    private:
        int msg{0};
        int CORRECT_LENGTH{4};
};