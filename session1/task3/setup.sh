#!/bin/bash
# Task 3: setup script

# Create and activate virtual environment

python -m venv env
source env/bin/activate

# Install Pandas & Seaborn (+ Matplotlib & NumPy)

pip install --upgrade pip
pip install pandas seaborn
