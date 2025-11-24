use std::io;

fn main() {
    loop {
        let mut input = String::new();
        io::stdin().read_line(&mut input).expect("");
        let input = input.trim();
        if input == "0" {
            break;
        }
        if input.len() % 2 == 0 {
            let (first_half, second_half) = input.split_at(input.len() / 2);
            let second_half_reversed: String = second_half.chars().rev().collect();
            if first_half == second_half_reversed {
                println!("yes");
            } else {
                println!("no");
            }
        } else {
            let input = input[..input.len() / 2].to_string() + &input[input.len() / 2 + 1..];
            let (first_half, second_half) = input.split_at(input.len() / 2);
            let second_half_reversed: String = second_half.chars().rev().collect();
            if first_half == second_half_reversed {
                println!("yes");
            } else {
                println!("no");
            }
        }
    }
}
