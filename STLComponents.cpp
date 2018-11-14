sort:
-----
// sort(starting_address_of_array, ending_address_of_array)
// Sort function demonstratiom
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10] = {1,10,2,12,29,10,393,383,20,30};
    int arr_size = (sizeof(a)/sizeof(*a)); 
    sort(a,a+arr_size);
    for(int i=0; i<arr_size; i++){
        cout<<" "<<a[i];
    }
    
}

binar_search:
------------

// binary_search(first_element_address, last_element_address, number_to_find);
//function demonstratiom
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[10] = {1,10,2,12,29,10,393,383,20,30};
    int arr_size = (sizeof(a)/sizeof(*a)); 
    sort(a,a+arr_size);
    for(int i=0; i<arr_size; i++){
        cout<<" "<<a[i];
    }
    /*The function binary_search returns: integer 1 for True if the value
    exists and 0 for false if value does not exists. */
    int flag = binary_search(a,a+arr_size,3);
    cout<<"\n value 3 Exists:"<< flag;
}
