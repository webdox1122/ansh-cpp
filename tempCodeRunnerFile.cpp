int temp = n;
    while(n > 0) {
        rem = n % 10;
        d = d + (rem * rem * rem);
        n = n / 10;
    }  

    if (temp == d) {
        cout<<"Armstrong number";
    }
    else {
        cout<<"Not an armstrong number";
    }
