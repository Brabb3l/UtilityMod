#pragma once

template <class T>
T * offsetPointer(T * ptr, size_t offset) {
	return (T *)(*(size_t*)(reinterpret_cast<unsigned char*>(ptr) + offset));
}

class PlayerCharacter {
public:
	void * pointer;

	class HealthComponent* healthComponent;
	class InventoryComponent* inventory;

	float * deathTimestamp;
	float * maxDPSFromRadiation;
	float * healthGenerationThreshold;
	float * healthGenerationAmount;
	float * healthGenerationInterval;
	float * healthGenerationWaitTime;
	float * healthGenerationTimer;
	float * lastDamageTakenTime;

	PlayerCharacter(void * pointer);
};

class HealthComponent {
public:
	void * pointer;

	float * maxHealth;
	float * currentHealth;
	float * respawnHealthFactor;

	HealthComponent(void * pointer);
};

class InventoryComponent {
public:
	void * pointer;

	int * defaultSize;
	int * adjustedSize;

	void * itemStacks;

	InventoryComponent(void * pointer);

	class ItemStack getItem(int index);
};

class ItemStack {
public:
	void * pointer;

	class Item* item;

	int * amount;

	ItemStack(void * pointer);
};

class Item { // TODO
public:
	void * pointer;

	Item(void * pointer);
};