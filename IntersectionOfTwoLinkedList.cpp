int findIntersection(Node *firstHead, Node *secondHead)
{
    //Write your code here
    unordered_map<Node*, int>mp;

    while(firstHead!=NULL){

            mp[firstHead]++;

            firstHead=firstHead->next;

        }

        while(secondHead!=NULL){

            if(mp.find(secondHead)!=mp.end()){

            return secondHead->data;

            break;

        }

        secondHead=secondHead->next;

    }
    return -1;
}
