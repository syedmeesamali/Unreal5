// // Copyright A.T. Chamillard. All Rights Reserved.
#include "PrintPercent.h"

/**
 * Sets default values
*/
APrintPercent::APrintPercent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

/**
 * Called when the game starts or when spawned
*/
void APrintPercent::BeginPlay()
{
	Super::BeginPlay();
	
	const int MaxScore{ 100 };
	int Score{ 43 };
	int temp_fahren = 0;
	int calc_temp_celsius = 0;
	int calc_temp_fahren = 0;

	float ftemp_fahren = 0.0f;
	float fcalc_temp_cel = 0.0f;
	float fcalc_temp_fahren = 0.0f;
	// calculate and output percent
	float Percent = (float)Score / MaxScore;
	//UE_LOG(LogTemp, Error, TEXT("Checking for the percentage: %f"), Percent * 100);
	UE_LOG(LogTemp, Error, TEXT("Original fahrenheit: %d"), temp_fahren);
	temp_fahren = 32;
	calc_temp_celsius = (temp_fahren - 32) / 9 * 5;
	ftemp_fahren = 32.0f;
	fcalc_temp_cel = (ftemp_fahren - 32) / 9 * 5;
	UE_LOG(LogTemp, Error, TEXT("New calculated celsius: %d"), calc_temp_celsius);
	UE_LOG(LogTemp, Error, TEXT("Float celsius: %f"), fcalc_temp_cel);
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void APrintPercent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}