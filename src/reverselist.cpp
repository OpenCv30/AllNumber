if(head ==NULL)
        return head;
    if(head->next == NULL)
        return head;
    
    Node* prev,*next;
    Node* currhead = head->next;
    prev = head;
    head->next = NULL;
    while(currhead->next){
        next = currhead->next;
        currhead->next = prev;
        prev = currhead;
        currhead = next;
        
    }
    currhead->next = prev;
    return currhead;