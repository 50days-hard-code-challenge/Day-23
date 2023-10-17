def triplet(n: int, arr: [int]) -> [[int]]:
    # Write your code here.
    n=len(arr)
    arr.sort()
    ans=[]
    for i in range(len(arr)):
        if i>0 and arr[i]==arr[i-1]:
            continue
        j=i+1
        k=n-1
        while(j<k):
            x=arr[i]+arr[j]+arr[k]
            if(x==0):
                b=[arr[i],arr[j],arr[k]]
                ans.append(b)
                j=j+1
                k=k-1
                while j<k and arr[j]==arr[j-1]:
                    j=j+1
                while j<k and arr[k]==arr[k+1]:
                    k=k-1
                    
            elif x<0:
                j=j+1
            elif x>0:
                k=k-1
    return ans
    pass
