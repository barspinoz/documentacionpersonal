require 'ruby2d'

# Title options
set title: "Figuras"
set width: 800
set height: 600
set background: 'white'

# Make a new triangle
t = Triangle.new
t.x1 = 50
t.y3 = 25
t.color = 'red'

# Second triangle
Triangle.new(
  x1: 50,  y1: 0,
  x2: 100, y2: 100,
  x3: 0,   y3: 100,
  color: 'orange',
  z: 100
)

# Make a square
Square.new(
  x: 100, y: 200,
  size: 125,
  color: 'blue',
  z: 10
)

# Make a rectangle
rectangle = Rectangle.new(
  x: 125, y: 250,
  width: 200, height: 150,
  color: 'teal',
  z: 20
)
rectangle.color.opacity = 0.6

# Make a quadrilateral
Quad.new(
  x1: 275, y1: 175,
  x2: 375, y2: 225,
  x3: 300, y3: 350,
  x4: 250, y4: 250,
  color: 'olive',
  z: 10
)

# Make a line
Line.new(
  x1: 125, y1: 100,
  x2: 350, y2: 400,
  width: 25,
  color: 'gray',
  z: 20
)

# Make a circle
circle = Circle.new(
  x: 200, y: 175,
  radius: 150,
  sectors: 32,
  color: 'maroon',
  z: 10
)
circle.color.opacity = 0.5

show
