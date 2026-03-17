require 'ruby2d'

# Title options
set title: "Ruby 2D App"
set width: 800
set height: 600
set background: 'white'

# Add a simple rectangle
Rectangle.new(x: 100, y: 100, width: 200, height: 150, color: 'navy')

# Add a circle
Circle.new(x: 500, y: 300, radius: 50, color: 'red')

# Add text
Text.new("Hello Ruby 2D!", x: 300, y: 50, color: 'black', size: 30)

# Create a new square with random colors and opacity
square = Square.new(x: 150, y: 200, color: 'random')
square.color.opacity = 0.5

show
