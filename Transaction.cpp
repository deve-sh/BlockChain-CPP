#include <string>

class Transaction {
    private:
        std::string payer;
        std::string payee;
        float amount;

    public:
        float getAmount(){
            return this->amount;
        }

        std::string getPayer(){
            return this->payer;
        }

        std::string getPayee(){
            return this->payee;
        }

        Transaction(std::string payer, std::string payee, float amount){
            this->amount = amount;
            this->payer = payer;
            this->payee = payee;
        }

		Transaction() {
			this->amount = 0;
			this->payer = "";
			this->payee = "";
		}
}