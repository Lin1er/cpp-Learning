#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Participant {
    std::string id;
    int session1, session2, session3;
};

bool compareParticipants(const Participant &a, const Participant &b) {
    if (a.session3 != b.session3) {
        return a.session3 > b.session3;
    } else if (a.session2 != b.session2) {
        return a.session2 > b.session2;
    } else {
        return a.session1 > b.session1;
    }
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, M;
        std::cin >> N >> M;

        std::vector<Participant> participants(N);

        for (int i = 0; i < N; ++i) {
            std::cin >> participants[i].id >> participants[i].session1 >> participants[i].session2 >> participants[i].session3;
        }

        std::sort(participants.begin(), participants.end(), compareParticipants);

        std::cout << "Case #" << t + 1 << ":" << std::endl;

        for (int i = 0; i < M; ++i) {
            std::string id;
            std::cin >> id;

            auto it = std::find_if(participants.begin(), participants.end(), [&id](const Participant &p) {
                return p.id == id;
            });

            if (it != participants.end() && i < M - 1) {
                std::cout << "YA" << std::endl;
            } else if (it != participants.end() && i == M - 1) {
                std::cout << "YA";
            } else if (i < M - 1) {
                std::cout << "TIDAK" << std::endl;
            } else {
                std::cout << "TIDAK";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
