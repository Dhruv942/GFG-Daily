 if(x==1)return head->next;
        Node*temp=head;
     for(int i=0;i<x-1;i++)temp=temp->next;
 if(!temp->next){
     temp->prev->next=NULL;
     return head;
 }
     Node*a=temp->next;
     temp->prev->next=temp->next;
     a->prev=temp->prev;
     return head;
    }
