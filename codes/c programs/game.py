import pygame
import random

# Initialize pygame
pygame.init()

# Set up the screen
width, height = 800, 600
screen = pygame.display.set_mode((width, height))
pygame.display.set_caption("Snake Game")

# Colors
white = (255, 255, 255)
black = (0, 0, 0)
red = (255, 0, 0)
green = (0, 255, 0)

# Snake properties
block_size = 20
snake_speed = 15

# Fonts
font_style = pygame.font.SysFont(None, 50)

def message(msg, color):
    mesg = font_style.render(msg, True, color)
    screen.blit(mesg, [width / 2 - 160, height / 2])

# Draw the snake
def snake(block_size, snake_list):
    for x in snake_list:
        pygame.draw.rect(screen, green, [x[0], x[1], block_size, block_size])

# Main game loop
def gameLoop():
    game_over = False
    game_close = False

    # Initial position and movement of snake
    lead_x = width / 2
    lead_y = height / 2
    lead_x_change = 0
    lead_y_change = 0

    # Snake body
    snake_list = []
    snake_length = 1

    # Initial position of fruit
    food_x = round(random.randrange(0, width - block_size) / block_size) * block_size
    food_y = round(random.randrange(0, height - block_size) / block_size) * block_size

    # Main game loop
    while not game_over:

        # Game over screen
        while game_close == True:
            screen.fill(white)
            message("You Lost! Press Q-Quit or C-Play Again", red)
            pygame.display.update()

            for event in pygame.event.get():
                if event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_q:
                        game_over = True
                        game_close = False
                    if event.key == pygame.K_c:
                        gameLoop()

        # Handling events
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                game_over = True
            if event.type == pygame.KEYDOWN:
                if event.key == pygame.K_LEFT:
                    lead_x_change = -block_size
                    lead_y_change = 0
                elif event.key == pygame.K_RIGHT:
                    lead_x_change = block_size
                    lead_y_change = 0
                elif event.key == pygame.K_UP:
                    lead_y_change = -block_size
                    lead_x_change = 0
                elif event.key == pygame.K_DOWN:
                    lead_y_change = block_size
                    lead_x_change = 0

        # Update snake position
        lead_x += lead_x_change
        lead_y += lead_y_change

        # Border collision detection
        if lead_x >= width or lead_x < 0 or lead_y >= height or lead_y < 0:
            game_close = True

        # Snake eats food
        if lead_x == food_x and lead_y == food_y:
            food_x = round(random.randrange(0, width - block_size) / block_size) * block_size
            food_y = round(random.randrange(0, height - block_size) / block_size) * block_size
            snake_length += 1

        screen.fill(white)
        pygame.draw.rect(screen, red, [food_x, food_y, block_size, block_size])
        snake_head = []
        snake_head.append(lead_x)
        snake_head.append(lead_y)
        snake_list.append(snake_head)
        if len(snake_list) > snake_length:
            del snake_list[0]

        # Snake eats itself
        for x in snake_list[:-1]:
            if x == snake_head:
                game_close = True

        snake(block_size, snake_list)
        pygame.display.update()

        # Snake speed
        pygame.time.Clock().tick(snake_speed)

    pygame.quit()
    quit()

gameLoop()
