void topView(Node * root)
{
    int hd;
    queue <Node *> putr;
    queue <int> puto;

    map<int,int> print;

    putr.push(root);
    puto.push(0);

    while(!putr.empty())
    {

        root=putr.front();
        hd=puto.front();

        if(print.count(hd)==0)
        print[hd]=root->data;

        if(root->left)
        {
            putr.push(root->left);
            puto.push(hd-1);
        }

         if(root->right)
        {
            putr.push(root->right);
            puto.push(hd+1);
        }

        putr.pop();
        puto.pop();

    }


    for(auto i=print.begin();i!=print.end();i++)
    cout<<i->second<<" ";

    return ;
}
