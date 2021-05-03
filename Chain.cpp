#include <string>
#include <vector>

#include "Block.cpp"
#include "Transaction.cpp"

class Chain {
    static std::vector<Block> chainOfBlocks;
    int chainLength;

    public:
        Block* getFinalNode() {
            if (!chainLength) return NULL;
            
            Block tempBlock = chainOfBlocks[chainLength - 1];
            return new Block(
                tempBlock.getPrevHash(), 
                tempBlock.getTransaction(),
                tempBlock.getTimestamp()
            );
        }

        int addBlockToChain(std::string prevHash, Transaction transaction, float timeStamp){
            Block blockToAdd = Block(
                prevHash,
                transaction,
                timeStamp
            );
            chainOfBlocks.push_back(blockToAdd);
        }
};