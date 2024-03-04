#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

// �w�q���M�I��
vector<string> suits = {"�®�", "�ߧ�", "�٧�", "����"};
vector<string> ranks = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

int main() {
    // ��l�Ƥ@�ƵP
    vector<pair<string, string>> deck;
    for (const auto &suit : suits) {
        for (const auto &rank : ranks) {
            deck.push_back(make_pair(rank, suit));
        }
    }

    // �H���~�P
    random_device rd;
    mt19937 g(rd());
    shuffle(deck.begin(), deck.end(), g);

    // �w�q�|�Ӫ��a
    vector<string> players = {"�Ĥ@�ӤH", "�ĤG�ӤH", "�ĤT�ӤH", "�ĥ|�ӤH"};

    // �o�P���C�Ӫ��a
    vector<vector<pair<string, string>>> hands(players.size());
    for (int i = 0; i < 13; ++i) {
        for (const auto &player : players) {
            auto card = deck.back();
            deck.pop_back();
            hands[distance(players.begin(), find(players.begin(), players.end(), player))].push_back(card);
        }
    }

    // ��ܨC�Ӫ��a�⤤���P
    for (size_t i = 0; i < players.size(); ++i) {
        cout << players[i] << ":";
        for (const auto &card : hands[i]) {
            cout << card.second << card.first << ",";
        }
        cout << endl;
    }

    return 0;
}
