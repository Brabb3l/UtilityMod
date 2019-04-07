#include "stdafx.h"
#include "Util.h"
#include <util/Utility.h>

PlayerCharacter::PlayerCharacter(void * pointer) {
	this->pointer = pointer;

	this->healthComponent = new HealthComponent(offsetPointer(pointer, 0x07a0));
	this->inventory = new InventoryComponent(offsetPointer(pointer, 0xa48));

	this->deathTimestamp = (float*)offset(pointer, 0x07d4);
	this->maxDPSFromRadiation = (float*)offset(pointer, 0x0a78);
	this->healthGenerationThreshold = (float*)offset(pointer, 0x0ac0);
	this->healthGenerationAmount = (float*)offset(pointer, 0x0ac4);
	this->healthGenerationInterval = (float*)offset(pointer, 0x0ac8);
	this->healthGenerationWaitTime = (float*)offset(pointer, 0x0acc);
	this->healthGenerationTimer = (float*)offset(pointer, 0x0ad0);
	this->lastDamageTakenTime = (float*)offset(pointer, 0x0ad4);
}

HealthComponent::HealthComponent(void * pointer) {
	this->pointer = pointer;

	this->maxHealth = (float*)offset(pointer, 0x0158);
	this->currentHealth = (float*)offset(pointer, 0x015c);
	this->respawnHealthFactor = (float*)offset(pointer, 0x0160);
}

InventoryComponent::InventoryComponent(void * pointer) {
	this->pointer = pointer;

	this->defaultSize = (int*)offset(pointer, 0x0148);
	this->adjustedSize = (int*)offset(pointer, 0x013c);

	this->itemStacks = offsetPointer(pointer, 0x0148);
}

ItemStack InventoryComponent::getItem(int index) {
	if (index < 0)
		throw new std::exception("index < 0");

	if (index > (*this->defaultSize + *this->adjustedSize - 1))
		throw new std::exception("index > invSize");

	ItemStack itemStack(offset(this->itemStacks, 0x20 * index));

	return itemStack;
}

ItemStack::ItemStack(void * pointer) {
	this->pointer = pointer;

	info_mod("Info", pointer == nullptr);

	this->item = new Item(offsetPointer(pointer, 0x0));
	this->amount = (int*)offset(pointer, 0x18);
}

Item::Item(void * pointer) {
	this->pointer = pointer;
}