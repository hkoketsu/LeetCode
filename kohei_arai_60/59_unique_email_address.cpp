class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> emailSet;
        for (string email: emails) {
            int i;
            string filteredEmail = "";
            for (i = 0; i < email.length(); i++) {
                char c = email[i];
                if (c == '.') continue;
                if (c == '+' || c == '@') break;
                filteredEmail += email[i];
            }
            filteredEmail += email.substr(email.find('@', i));
            emailSet.insert(filteredEmail);
        }
        return emailSet.size();
    }
};