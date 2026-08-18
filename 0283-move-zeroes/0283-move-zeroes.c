void moveZeroes(int* nums,int numsize)
{
    int element=0;
    for(int i=0;i<numsize;i++)
    {
        if(nums[i]!=0)
        {
            nums[element]=nums[i];
            element++;
        }
    }
    for(int i=element;i<numsize;i++)
    {
        nums[i]=0;
    }

}