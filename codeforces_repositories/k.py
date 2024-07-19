def min_screens(x, y):
  """
  Calculates the minimum number of screens needed for x 1x1 icons and y 2x2 icons.
  """
  screens = 0  # Number of screens used
  remaining_1x1 = x  # Number of remaining 1x1 icons

  # Place 2x2 icons
  while y > 0:
    # Fill current screen with 2x2 icons
    screens += 1
    y -= min(y, 4)  # Place up to 4 icons or remaining 2x2 icons

    # Check if remaining space can accommodate 1x1 icons
    remaining_space = 4 - (y % 4)  # Space left after placing 2x2 icons
    if remaining_space > 0:
      remaining_1x1 = max(0, remaining_1x1 - remaining_space)  # Use remaining space for 1x1 icons

  # Place remaining 1x1 icons
  while remaining_1x1 > 0:
    # Fill a new screen with 1x1 icons (up to 5)
    screens += 1
    remaining_1x1 -= min(remaining_1x1, 15)  # Place up to 15 icons (3 screens) or remaining 1x1 icons

  return screens

# Example usage
t = int(input())
for _ in range(t):
  x, y = map(int, input().split())
  result = min_screens(x, y)
  print(result)
