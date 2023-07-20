public class Main
{

  static void merge (int[]arr, int l, int m, int r)
  {
    int n1 = m - l + 1;
    int n2 = r - m;

    int[] L = new int[n1];
    int[] R = new int[n2];
    for (int i = 0; i < n1; i++)
      {
	L[i] = arr[l + i];
      }
    for (int i = 0; i < n2; i++)
      {
	R[i] = arr[m + 1 + i];
      }
    int i = 0, j = 0;
    int k = l;
    while (i < n1 && j < n2)
      {
	if (L[i] <= R[j])
	  {
	    arr[k] = L[i];
	    i++;
	  }
	else
	  {
	    arr[k] = R[j];
	    j++;
	  }
	k++;

      }
    while (i < n1)
      {
	arr[k] = L[i];
	k++;
	i++;
      }
    while (j < n2)
      {
	arr[k] = R[j];
	k++;
	j++;
      }
  }
  static void sort (int[]arr, int l, int r)
  {
    if (r > l)
      {
	int m = (l + r) / 2;
	sort (arr, l, m);
	sort (arr, m + 1, r);
	merge (arr, l, m, r);
      }
  }
  public static void main (String[]args)
  {
    int arr[] = { 9, 2, 1, 51, 12, 321, 232, 212, 23, 27 };
    for (int i = 0; i < arr.length; i++)
      {
	System.out.print(arr[i]+" ");
	
      }System.out.println();
    sort (arr, 0, arr.length - 1);
    for (int i = 0; i < arr.length; i++)
      {
	System.out.print (arr[i]+" ");
      }
    System.out.println ("Hello World");
  }
}
