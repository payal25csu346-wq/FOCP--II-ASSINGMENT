#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time()

using namespace std;

// Function to replace {name} with actual user name
string replaceName(string templateStr, string name) {
    size_t pos = templateStr.find("{name}");
    
    // Keep replacing until all occurrences are replaced
    while (pos != string::npos) {
        templateStr.replace(pos, 6, name); // 6 = length of "{name}"
        pos = templateStr.find("{name}");
    }
    
    return templateStr;
}

int main() {
    string name;

    // Ask user for their name
    cout << "Enter your name: ";
    getline(cin, name);

    // Check for empty input
    if (name.empty()) {
        cout << "You didn't enter a name. Try again!" << endl;
        return 0;
    }

    // Store roast templates in a vector
    vector<string> roasts = {
        "{name}'s code runs so slow, even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would already have a gold medal.",
        "{name}'s debugging style is just staring until the bug feels guilty.",
        "{name} writes bugs faster than they write actual code.",
        "Even autocorrect gives up on {name}.",
        "{name} doesn't fix bugs—they adopt them as features.",
        "{name}'s code has more drama than a reality TV show.",
        "If laziness had a face, it would look like {name}.",
        "{name} and deadlines are in a long-distance relationship.",
        "{name}'s code is proof that anything can compile… somehow."
    };

    // Seed random number generator (so results differ each run)
    srand(time(0));

    // Generate a random index
    int randomIndex = rand() % roasts.size();

    // Get a random roast
    string selectedRoast = roasts[randomIndex];

    // Replace {name} with user's actual name
    string finalRoast = replaceName(selectedRoast, name);

    // Display the roast
    cout << "\n🔥 Roast:\n" << finalRoast << endl;

    return 0;
}
