class Solution
{
public:
    unordered_map<string, int> map;
    unordered_map<unsigned long, string> map2;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl)
    {
        auto hash = map.hash_function();
        map2[hash(longUrl)] = longUrl;
        return "http://tinyurl.com/" + to_string(hash(longUrl));
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl)
    {
        string str = shortUrl.substr(19, (shortUrl.length() - 19));
        return map2[stoul(str)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));