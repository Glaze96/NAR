#pragma once

class Engine {
protected: // Structors
	Engine(int gameWidth, int gameHeight);

	~Engine();

public: // Methods
	unsigned int getFPS() const { return m_framesPerSecond; }
	unsigned int getUPS() const { return m_updatesPerSecond; }

	void start();
	static void stop() { m_stopping = true; }

protected:
	virtual void init() = 0; // Initialize game systems
	virtual void update(double deltaTime) = 0;  // Update game
	virtual void draw() = 0; // Render game
	virtual void tick() = 0; // Once every second

private:
	void gameLooop();
	void handleEvents(); // Handle any events
	
private: // Fields
	static bool m_stopping;

	unsigned int m_windowWidth, m_windowHeight;
	unsigned int m_targetUPS, m_targetFPS;
	unsigned int m_framesPerSecond, m_updatesPerSecond;
};