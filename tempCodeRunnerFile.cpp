int arr[6];
    int target, index = -1;
    int replacement;
    cout << "Enter six integers: ";

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number to search: ";
    cin >> target;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        cout << "Number found at index: " << index << endl;

        cout << "Enter replacement value: ";
        cin >> replacement;

        arr[index] = replacement;
    }
    else
    {
        cout << "Not found" << endl;
    }
    cout << "Updated Array: ";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}