# Big O (Master this concept)

Imagine the following scenerio:

>You've got a file on a hard drive and you need it to send it to your friend who lives across the country. You need to get the file to your friend as fast as possible. How should you do it?

First thought would be to email, FTP or other means of electronic transfer. That thought is reasonable, but only half correct.

If it is a small file, you are certainly right. It would take 5-10 hours to get to an airport, hop on a flight, and then deliver it to your friend.

But what if the file is 1TB large, it would take more than a day to transfer electronically. It would be much faster to fly it across the country. If file is that urgent, you might just want to do that.

# Time Complexity

We could describe the data transfer "algorithm" runtime as :-

* Electronic Transfer :- O(s) Where s is the size of the file. This means the time to transfer the file increases linearly with the size of the file.
![O(s) time complexity](https://mellowd.co.uk/ccie/wp-content/uploads/2015/10/foo1.png)

* Airplane Transfer :- O(1) As the size of file increases, it won't take any longer to get the file to your friend. The time is constant.
![O(1) time complexity](https://mellowd.co.uk/ccie/wp-content/uploads/2015/10/1.png)

# Space Complexity

It cares about the amount of memory or space required by an algorithm.

>If we need to create an array of size n, this will require O(n) space. If we need a two dimensional array of size n*n, this will require O(n^2) space.
