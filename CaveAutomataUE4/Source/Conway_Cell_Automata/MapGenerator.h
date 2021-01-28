// PostProducción Digital. Daniel Guerra. ESNE

#pragma once

#include "CoreMinimal.h"
#include "CellClass.h"
#include "GameFramework/Actor.h"
#include "MapGenerator.generated.h"

UCLASS()
class CONWAY_CELL_AUTOMATA_API AConwayAutomata : public AActor
{
	GENERATED_BODY()
	
public:	

	/// <summary>
	/// Componente de escena
	/// </summary>
	UPROPERTY(Category = Transform, EditAnywhere)
		class USceneComponent* sceneComponent;

	/// <summary>
	/// Prefab de una célula estándar.
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		UClass* genericCellPrefab;

	/// <summary>
	/// Ancho del autómata
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		int width;

	/// <summary>
	/// Alto del autómata
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		int height;

	/// <summary>
	/// Color para una célula void
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		FLinearColor voidColor;

	/// <summary>
	/// Color para una célula live
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		FLinearColor liveColor;

	/// <summary>
	/// Porcentaje de la pared del autómata
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		float wall_percentage;

private:
	/// <summary>
	/// Array que representa el autómata
	/// Importante: el autómata se ordena en [columna, fila]
	/// La columna cero, fila cero, se representa en la esquina inferior izquierda de la pantalla,
	/// creciendo hacia arriba y hacia la derecha
	/// </summary>
	TArray<int> automata;

	/// <summary>
	/// Buffer del autómata para la siguiente generación
	/// </summary>
	TArray<int> _automata;

	/// <summary>
	/// Número de vecinos considerado óptimo
	/// </summary>
	const int optim = 3;

	/// <summary>
	/// Número de vecinos considerado mínimo
	/// </summary>
	const int minim = 2;

	/// <summary>
	/// Número de generaciones actual;
	/// </summary>
	int currentNumGenerations = 0;

	//Estado del autómata
	enum AutomataState { idle, evolving };
	AutomataState automataState;

	// Lista de células. Son referencias a actores que llevan un sprite
	TArray<ACellClass*> cellList;

	/// <summary>
	/// Array bi-dimensional que representa el mapa de la caverna
	/// </summary>
	TArray<TArray<ACellClass*>> map;
	// ////////////////////////////////

	//Referencia al player Controller para propósitos de intercepción de acciones de teclado
	APlayerController* controller;

public:

	AConwayAutomata();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	/// <summary>
	/// Genera el autómata
	/// Añade células estándar al array de células a partir del spawn de prefabs
	/// </summary>
	void GenerateAutomata();

	/// <summary>
	/// Inicializa el mapa de la caverna con sus parámetros correspondientes
	/// </summary>
	void GenerateMap();

	/// <summary>
	/// Configura la forma y estilos de la cueva
	/// </summary>
	void SmoothMap();

	/// <summary>
	/// Da color a las diferentes células de la cueva
	/// </summary>
	void ColorMap();

	/// <summary>
	/// Obtiene las céculas vecinas para realizar los cálculos necesarios
	/// </summary>
	/// <param name="x">horizontal</param>
	/// <param name="y">vertical</param>
	/// <returns></returns>
	int GetSurroundingWallsCount(int x, int y);

	//Intercepta pulsación tecla
	UFUNCTION()
		void InputKey();

};
