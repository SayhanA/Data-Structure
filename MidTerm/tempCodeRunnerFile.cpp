 for (int i = 0; i < size(head) / 2; i++)
    {
        cout << "alskdfl\n";
        if (tmp->val == tmp_prev->val)
        {
            isPalindrom = true;
        }
        else
        {
            isPalindrom = false;
            return isPalindrom;
        }
        tmp = tmp->next;
        tmp_prev = tmp_prev->prev;
    }