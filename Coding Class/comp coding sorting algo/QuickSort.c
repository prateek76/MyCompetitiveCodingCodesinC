
//Algorithm
quicksort(Array,start,end)
{
  if (start < end)
  {
    partition(Array,start,end);
    quicksort(Array, start , partitionIndex - 1);
    quicksort(Array, partitionIndex + 1, end);
  }
}
