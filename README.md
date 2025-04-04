Coffee Shop Ordering System ☕
Welcome to the Coffee Shop Ordering System, a modular and extensible C++ application designed to simulate a coffee shop experience. Built with object-oriented principles and design patterns, this system allows customers to customize beverages, order through various sources, and enjoy predefined drink presets—all with clean, maintainable code.
The system is designed to be extensible, making it easy to add new beverages, decorations, or order methods without breaking existing functionality.

🛠️ Design Patterns
The project leverages the following design patterns for elegance and scalability:

Decorator: Dynamically adds customizations (e.g., Milk, Sugar) to beverages, stacking costs and descriptions.
Factory: OrderFactory creates order objects based on the source (Cashier, Mobile, etc.), ensuring loose coupling.
Prototype: PresetRegistry clones predefined drink configurations, simplifying reuse of popular orders.

🚀 Getting Started
Prerequisites
C++ Compiler: g++ (GCC) or equivalent.
Make: For building the project.
Build Instructions
Clone or download the project to your local machine.
Navigate to the project directory: /CoffeeShop

Build the project with:
make 

then 
./coffee_shop
