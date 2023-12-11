#include <iostream>

struct SiteStats {
    int ads_watched{};
    float clicked_ads{}; //Percentage
    double earnings{};
};

SiteStats enter_site_stats_info() {
    SiteStats stats{};
    std::cout << "How many ads were watched? ";
    std::cin >> stats.ads_watched;

    std::cout << "What percentage of users clicked on an ad? ";
    std::cin >> stats.clicked_ads;

    std::cout << "The average earnings per clicked ad: ";
    std::cin >> stats.earnings;

    return stats;
}

void printSiteStats(const SiteStats& stats) {
    std::cout << "ADS: "<< stats.ads_watched << '\n';
    std::cout << "Clicked ADS: " << stats.clicked_ads << '\n';
    std::cout << "Earnings per click: " << stats.earnings << '\n';

    std::cout << '\n';
    std::cout << "Today you have made: "
        << (stats.ads_watched *  (stats.clicked_ads / 100) * stats.earnings)
        << "$\n";
}

int main() {
    printSiteStats(enter_site_stats_info());
    return 0;
}
