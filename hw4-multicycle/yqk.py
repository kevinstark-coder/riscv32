import os
def test_a():
    for key, value in os.environ.items():
        print(f"{key}: {value}")

if __name__ == "__main__":
    
    # os.environ['yqk'] = '1'
    test_a()