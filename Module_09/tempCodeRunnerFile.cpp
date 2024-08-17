newNode->prev = tmp->next;
    tmp->next->next->prev = newNode;
    // newNode->prev = tmp;