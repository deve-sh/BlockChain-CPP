#include <string>

#include "./Transaction.cpp"

class Block {
    std::string prevHash;
    Transaction transaction;
    float timeStamp;

   public:
    Block(std::string prevHash, Transaction transaction, float timeStamp) {
        this->timeStamp = timeStamp;
        this->transaction = transaction;
        this->prevHash = prevHash;
    }

    std::string getPrevHash(){
        return this->prevHash;
    }

    Transaction getTransaction(){
        return this->transaction;
    }

    float getTimestamp(){
        return this->timeStamp;
    }
};