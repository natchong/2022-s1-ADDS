#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    //insert values into priority queue
    for(int value : values) {
        pq.push(value);

        //if size exceeds k, remove smallest element
        if(pq.size() > k){
            pq.pop();
        }
    }

    //the top element of priority queue is the kth largest
    return pq.top();
}