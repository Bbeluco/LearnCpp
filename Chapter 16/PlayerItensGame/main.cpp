#include <iostream>
#include <vector>
#include <cassert>
#include <string>

namespace Player{
    enum Itens {
        health_potion,
        torches,
        arrows,
        max_items
    };

    std::vector<int> inventory { 1, 5, 10};
}

int total_player_itens() {
    int total{};
    for(const auto& quantityItem : Player::inventory) {
        total += quantityItem;
    }

    return total;
}

std::string_view item_name(Player::Itens item) {
    switch (item) {
    case Player::health_potion: return "health potion";
    case Player::torches: return "torches";
    case Player::arrows: return "arrows";
    default: return "???";
    }
}

void print_described_inventory(const std::vector<int>& inventory) {
    for(std::size_t i{0}; i < inventory.size(); ++i) {
        std::cout << "You have " << inventory[i] << ' ' 
            << item_name(static_cast<Player::Itens>(i)) << '\n';
    }
}


int main() {
    assert(Player::inventory.size() == Player::max_items);
    print_described_inventory(Player::inventory);
    std::cout << "You have " << total_player_itens() << " total items\n";
    return 0;
}