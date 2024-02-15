-- Create the table
CREATE TABLE users (

    username VARCHAR(50) PRIMARY KEY,
    email VARCHAR(100) 
);

-- Insert some values
INSERT INTO users (username, email) VALUES
    ('john_doe', 'john@example.com'),
    ('jane_smith', 'jane@example.com'),
    ('bob_jones', 'bob@example.com');
