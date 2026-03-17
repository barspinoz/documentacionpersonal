require 'ruby2d'
set title: "Hello Square"

# Definicion del objeto 'cuadrado'
@square = Square.new(x: 50, y:50, size: 200, color: 'red')

# Velocidad inicial del cuadrado
@x_speed = 0
@y_speed = 0

# Definir movimiento con las teclas
on :key_down do |event|
  if event.key == 'a'
    @x_speed = -2
    @y_speed = 0
  elsif event.key == 'd'
    @x_speed = 2
    @y_speed = 0
  elsif event.key == 'w'
    @x_speed = 0
    @y_speed = -2
  elsif event.key == 's'
    @x_speed = 0
    @y_speed = 2
  end
end

update do
  @square.x += @x_speed
  @square.y += @y_speed
end

show
