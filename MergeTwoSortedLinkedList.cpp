Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.

    if(first==NULL){

        return second;

    }

    if(second==NULL){

        return first;

    }

    Node<int>*fh=NULL;

    Node<int>*ft=NULL;

    if(first->data<second->data){

        fh=first;

        ft=first;

        first=first->next;

    }

    else{

        fh=second;

        ft=second;

        second=second->next;

    }

    while(first!=NULL && second!=NULL){

        if(first->data<second->data){

            ft->next=first;

            ft=first;

            first=first->next;

        }

        else{

            ft->next=second;

            ft=second;

            second=second->next;

        }

    }
    if(first!=NULL){

        ft->next=first;

    }

    if(second!=NULL){

        ft->next=second;

    }

    return fh;
}
