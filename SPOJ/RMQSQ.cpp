#include <iostream>
using namespace std;
int rangeQuery(int qs, int qe, int ss, int se, int tree[], int si)
{
  if (qs > se || qe < ss)
    return INT32_MAX;
  else if (qs <= ss && qe >= se)
    return tree[si];
  else
  {
    int mid = ss + (se - ss) / 2;
    return min(rangeQuery(qs, qe, ss, mid, tree, 2 * si + 1), rangeQuery(qs, qe, mid + 1, se, tree, 2 * si + 2));
  }
}
int buildTree(int ss, int se, int tree[], int a[], int si)
{
  if (ss == se)
  {
    tree[si] = a[ss];
    return a[ss];
  }
  int mid = ss + (se - ss) / 2;
  tree[si] = min(buildTree(ss, mid, tree, a, 2 * si + 1), buildTree(mid + 1, se, tree, a, 2 * si + 2));
  return tree[si];
}
int main()
{
  int n, q, l, r;
  cin >> n;
  int a[n];
  int tree[4 * n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  cin >> q;
  buildTree(0, n - 1, tree, a, 0);
  while (q--)
  {
    cin >> l >> r;
    cout << rangeQuery(l, r, 0, n - 1, tree, 0) << endl;
  }
  return 0;
}