class Jar:
    #  should initialize a cookie jar with the given
    def __init__(self, capacity=12):
        if type(capacity) != int or capacity < 0:
           print ("Capacity must be a non-negative int.")
        self._capacity = capacity
        self._cookies = 0

    def __str__(self):
        return "🍪" * self._cookies

    # should add n of cookies
    def deposit(self, n):
        if type(n) != int or n < 0:
            print ("n must be a non-negative int.")
        if self._cookies + n > self._capacity:
            print ("Cannot deposit more cookies")
        self._cookies += n

    #should remove n cookies to the cookie jar
    def withdraw(self, n):
        if type(n) != int or n < 0:
            print ("n must be a non-negative.")
        if self._cookies - n < 0:
            print ("Cannot withdraw more cookies than present.")
        self._cookies -= n

    #capacity of jar
    @property
    def capacity(self):
        return self._capacity

    #size of jar
    @property
    def size(self):
        return self._cookies

def main():
    jar = Jar()
    jar.deposit(2)
    print(jar.size)

if __name__ == "__main__":
    main()