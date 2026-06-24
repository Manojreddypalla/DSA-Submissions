class TrieNode {
public:

    TrieNode* children[26];

    bool isEnd;

    TrieNode() {

        isEnd = false;

        for(int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class PrefixTree {
public:

    TrieNode* root;

    PrefixTree() {

        root = new TrieNode();
    }
    
    void insert(string word) {

        TrieNode* node = root;

        for(char ch : word) {

            int index = ch - 'a';

            // create path if missing
            if(node->children[index] == nullptr) {
                node->children[index] = new TrieNode();
            }

            // move deeper
            node = node->children[index];
        }

        // mark word ending
        node->isEnd = true;
    }
    
    bool search(string word) {

        TrieNode* node = root;

        for(char ch : word) {

            int index = ch - 'a';

            // path does not exist
            if(node->children[index] == nullptr) {
                return false;
            }

            // move deeper
            node = node->children[index];
        }

        // exact word must end here
        return node->isEnd;
    }
    
    bool startsWith(string prefix) {

        TrieNode* node = root;

        for(char ch : prefix) {

            int index = ch - 'a';

            // prefix path missing
            if(node->children[index] == nullptr) {
                return false;
            }

            // move deeper
            node = node->children[index];
        }

        // prefix path exists
        return true;
    }
};