int romanToInt(const char* s) {
    int result = 0;
    int next_value;
    const int map[22] = {
        ['I'-67] = 1,
        ['V'-67] = 5,
        ['X'-67] = 10,
        ['L'-67] = 50,
        ['C'-67] = 100,
        ['D'-67] = 500,
        ['M'-67] = 1000,
    };

    for (int i = 0; s[i]; i++) {
        int value = map[s[i] - 'C'];
        next_value = 0;
        if (i!=strlen(s)-1)
            next_value = map[s[i+1] - 'C' +0];

        result += (value < next_value) ? -value : value;
    }

    return result;
}