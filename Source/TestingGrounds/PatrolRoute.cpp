// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGrounds.h"
#include "PatrolRoute.h"


TArray<AActor*> UPatrolRoute::GetPatrolPoints() const {
	return PatrolPoints;
}