void setup() {
  // Initialize serial communication only once
  Serial.begin(9600);
}

void loop() {
  // Check if there is serial input available
  while(Serial.available() > 0) {
    // Read the first number
    float num1 = Serial.parseFloat();
    
    // Read the operator, ensuring it's not a space or newline
    char op = Serial.read();
    
    // Read the second number
    float num2 = Serial.parseFloat();
  
    // Perform the operation based on the operator received
    if(op == '+'){
      Serial.println(num1 + num2);
    } else if(op == '-'){
      Serial.println(num1 - num2);
    } else if(op == '*'){
      Serial.println(num1 * num2);
    } else if(op == '/'){
      // Handle division carefully to avoid division by zero
      if (num2 != 0) {
        Serial.println(num1 / num2);
      } else {
        Serial.println("Error: Division by zero");
      }
    } else {
      // If an invalid operator is received
      Serial.println("Error: Invalid operator");
    }
  }
}
