int left_ptr=(vect.size()/2)-1;
    int right_ptr = vect.size()/2;
    while(left_ptr<right_ptr && left_ptr>=0 && right_ptr<vect.size()){
        cout<<vect[left_ptr]<<" "<<vect[right_ptr];
        left_ptr--;
        right_ptr++;

    }