
static int index=0;
class Message {
private:
    string msg;
    int i;
public:
     

    Message() {}

    Message(string txt) : msg(txt) {}

    const string& get_text() {
        return msg;
    }

    const int& get_index() {
        return i;
    }

    void set_index(int j) {
        i = j;
    }

    bool operator< (Message& other) {
        bool answer = this->i < other.get_index();
        return answer;
    }
};
class MessageFactory {
public:
    MessageFactory() {}
    Message create_message(const string& text) {
        Message msg(text);
        msg.set_index(index++);
        return msg;
    }
};


