cin >> test;
    while (startIndex <= endIndex)
    {
        middle = (startIndex + endIndex) / 2;

        if (test == arr[middle])
        {
            cout << "found" << endl;
            return 0;
        }
        else if (test < arr[middle])
        {
            endIndex = middle - 1;
        }
        else
        {
            startIndex = middle + 1;
        }
    }
    cout << "notFound";