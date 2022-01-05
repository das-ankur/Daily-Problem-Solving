Base case : if there are no intervals return [] .
Sort the intervals .
While traversing the intervals vector we will come accross two coditions
First condition : if there is a overlapping between the intervals then just take out the max                                 element from the ending point and thus we merged them
eg:- [1,4],[2,8] =Mergerd intervals will be> [1,8]
Second condition : If there is no overlapping then simply push those interval to our                                              resultant vector .