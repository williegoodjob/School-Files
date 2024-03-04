#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

// 定義花色和點數
vector<string> suits = {"黑桃", "心形", "菱形", "梅花"};
vector<string> ranks = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

int main() {
    // 初始化一副牌
    vector<pair<string, string>> deck;
    for (const auto &suit : suits) {
        for (const auto &rank : ranks) {
            deck.push_back(make_pair(rank, suit));
        }
    }

    // 隨機洗牌
    random_device rd;
    mt19937 g(rd());
    shuffle(deck.begin(), deck.end(), g);

    // 定義四個玩家
    vector<string> players = {"第一個人", "第二個人", "第三個人", "第四個人"};

    // 發牌給每個玩家
    vector<vector<pair<string, string>>> hands(players.size());
    for (int i = 0; i < 13; ++i) {
        for (const auto &player : players) {
            auto card = deck.back();
            deck.pop_back();
            hands[distance(players.begin(), find(players.begin(), players.end(), player))].push_back(card);
        }
    }

    // 顯示每個玩家手中的牌
    for (size_t i = 0; i < players.size(); ++i) {
        cout << players[i] << ":";
        for (const auto &card : hands[i]) {
            cout << card.second << card.first << ",";
        }
        cout << endl;
    }

    return 0;
}
