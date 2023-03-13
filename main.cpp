#include <iostream>

using namespace std;

double newarr( int arr[], int n, double& max )
{
max=arr[0];
for ( int i = 0; i < n; i++ )
  {
  if ( arr[i] > max ) { max = arr[i];}
  if ( arr[i] == 0 ) { arr[i] = max;}
    }
  return max;
    }
int main() {
  int arr[12];
  double max;

  for ( int i = 0; i < 12; i++ )
    {
  cout << " Введіть " << i+1 << " число масиву --> ";
      cin >> arr[i];
      }
  max = newarr ( arr, 12, max );
  cout << " Змінений масив виглядає так --> ";
  for ( int i = 0; i < 12; i++ )
    {
      cout << arr[i] << "\t";
    }
}