# Numerical Methods Readme

## Newton-Raphson Method

### Description
The Newton-Raphson method is an iterative technique for finding the roots of a function. It's like a smart guess-and-check method to solve equations.

### Steps
1. Start with an initial guess.
2. Use the formula: `x = x - f(x) / f'(x)` in each iteration.
3. Keep repeating until you get close to the actual solution.

## Newton Forward Interpolation

### Description
Newton Forward Interpolation is a method for approximating values between known data points. It's useful for creating smooth curves through given data.

### Steps
1. Organize data in a table.
2. Use the forward difference formula to generate divided difference values: `f[x₀, x₁] = (f(x₁) - f(x₀)) / (x₁ - x₀)`.
3. Apply the interpolation formula to estimate values: `P(x) = f(x₀) + f[x₀, x₁](x - x₀) + f[x₀, x₁, x₂](x - x₀)(x - x₁) + ...`.

## Lagrange Interpolation

### Description
Lagrange Interpolation is a technique for constructing a polynomial that passes through given data points. It's helpful for approximating functions.

### Steps
1. Identify data points.
2. Create Lagrange basis polynomials for each point: `Lᵢ(x) = Πⱼ≠ᵢ (x - xⱼ) / (xᵢ - xⱼ)`.
3. Sum up the basis polynomials multiplied by corresponding data values: `P(x) = Σᵢ yᵢ Lᵢ(x)`.

## Euler's Method

### Description
Euler's Method is a numerical technique for solving ordinary differential equations. It's a simple approach to approximate solutions by breaking the problem into small steps.

### Steps
1. Start with initial conditions.
2. Use the differential equation to find the slope: `dy/dx = f(x, y)`.
3. Update the solution in small steps using the slope: `yᵢ₊₁ = yᵢ + h * f(xᵢ, yᵢ)`.

