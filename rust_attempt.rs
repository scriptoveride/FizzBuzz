let mut i = 1;

while i < 101 {
    if i % 3 == 0  {
        if i % 5 == 0 {
            println!("FizzBuzz");
        } 
        else {
            println!("Fizz")
        }
    }
    else if i % 5 == 0 {
        println!("Buzz")
    }
    else {
        println!("{}", i);
    }
    i = i + 1;
}
