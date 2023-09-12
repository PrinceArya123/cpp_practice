
    vector<vector<int>>vec(n,vector<int>(n));
    cout<<"Enter element of vector : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             
            cin>>vec[i][j];
        }
    }
    cout<<"Rotataion of matrix is : "<<endl;
    rotateArray(vec);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
