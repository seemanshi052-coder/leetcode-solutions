int addDigits(int num) {
     if(num==0)
        return 0;
    if (num%9==0)
        return 9;
    return num%9;
}
//Easy question but worth remembering the concet that finding the sum of digits of numbers is equivalent to finding the remainder of number when divided by 9