long long  multiplyTwoLists (Node* l1, Node* l2)
{
  //Your code here

  long long m=1000000007;
  long long n1=0,n2=0;
  while(l1!=NULL){
      n1=l1->data+n1*10;
      n1=n1%m;
      l1=l1->next;
  }
  while(l2!=NULL){
      n2=l2->data+n2*10;
      n2=n2%m;
      l2=l2->next;
  }
  long long prod= (n1*n2)%m;
  return prod;

}
