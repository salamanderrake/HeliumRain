
#include "../Flare.h"
#include "FlareInternalComponent.h"

/*----------------------------------------------------
	Constructor
----------------------------------------------------*/

UFlareInternalComponent::UFlareInternalComponent(const class FObjectInitializer& PCIP)
	: Super(PCIP)
{
}


/*----------------------------------------------------
	Gameplay
----------------------------------------------------*/

void UFlareInternalComponent::Initialize(const FFlareShipComponentSave* Data, UFlareCompany* Company, AFlareShipBase* OwnerShip, bool IsInMenu)
{
	Super::Initialize(Data, Company, OwnerShip, IsInMenu);
}

FFlareShipComponentSave* UFlareInternalComponent::Save()
{
	return Super::Save();
}

void UFlareInternalComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UFlareInternalComponent::IsGenerator() const
{
	return GeneratedPower > 0;
}