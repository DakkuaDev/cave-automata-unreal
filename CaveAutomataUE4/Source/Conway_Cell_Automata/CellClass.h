// PostProducci�n Digital. Daniel Guerra. ESNE

#pragma once

#include "CoreMinimal.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/Actor.h"
#include "CellClass.generated.h"

UCLASS()
class CONWAY_CELL_AUTOMATA_API ACellClass : public AActor
{
	GENERATED_BODY()
	
public:	

	/// <summary>
	/// Componente de Sprite
	/// </summary>
	UPROPERTY(EditAnywhere, Category = "Sprite Component")
		class UPaperSpriteComponent* Sprite;

	/// <summary>
	/// Informaci�n de la c�lula -> posici�n en el mundo
	/// </summary>
	UPROPERTY(EditAnywhere, Category = "Cell Info")
		FVector2D info;

	/// <summary>
	/// Estado de la c�lula
	/// </summary>
	enum Type { die, live };
	Type type;

public:
	
	ACellClass();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
