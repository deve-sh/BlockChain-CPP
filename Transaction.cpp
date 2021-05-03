#include <string>

class Transaction {
    private:
        string payer;
        string payee;
        float amount;

    public:
        float getAmount(){
            return this.amount;
        }

        string getPayer(){
            return this.payer;
        }

        string getPayee(){
            return this.payee;
        }

        Transaction(string payer, string payee, float amount){
            this.amount = amount;
            this.payer = payer;
            this.payee = payee;
        }
}