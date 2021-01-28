// PostProducción Digital. Daniel Guerra. ESNE

#include "CellClass.h"

// Sets default values
ACellClass::ACellClass()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Crea el spriteComponent
	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>("Sprite");
	Sprite->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);

	//Carga el Sprite Asset y lo asigna al Sprite component
	//Ver https://docs.unrealengine.com/latest/INT/Programming/Assets/ReferencingAssets/
	ConstructorHelpers::FObjectFinder<UObject> paperSprite(TEXT("PaperSprite'/Game/Sprites/CellSprite.CellSprite'"));
	Sprite->SetSprite((UPaperSprite*)paperSprite.Object);

	Tags.Add("cell");
}

// Called when the game starts or when spawned
void ACellClass::BeginPlay()
{
	Super::BeginPlay();
	
}


