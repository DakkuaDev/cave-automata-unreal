// PostProducci�n Digital. Daniel Guerra. ESNE

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
	/// Prefab de una c�lula est�ndar.
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		UClass* genericCellPrefab;

	/// <summary>
	/// Ancho del aut�mata
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		int width;

	/// <summary>
	/// Alto del aut�mata
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		int height;

	/// <summary>
	/// Color para una c�lula void
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		FLinearColor voidColor;

	/// <summary>
	/// Color para una c�lula live
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		FLinearColor liveColor;

	/// <summary>
	/// Porcentaje de la pared del aut�mata
	/// </summary>
	UPROPERTY(Category = Spawning, EditAnywhere, BlueprintReadWrite)
		float wall_percentage;

private:
	/// <summary>
	/// Array que representa el aut�mata
	/// Importante: el aut�mata se ordena en [columna, fila]
	/// La columna cero, fila cero, se representa en la esquina inferior izquierda de la pantalla,
	/// creciendo hacia arriba y hacia la derecha
	/// </summary>
	TArray<int> automata;

	/// <summary>
	/// Buffer del aut�mata para la siguiente generaci�n
	/// </summary>
	TArray<int> _automata;

	/// <summary>
	/// N�mero de vecinos considerado �ptimo
	/// </summary>
	const int optim = 3;

	/// <summary>
	/// N�mero de vecinos considerado m�nimo
	/// </summary>
	const int minim = 2;

	/// <summary>
	/// N�mero de generaciones actual;
	/// </summary>
	int currentNumGenerations = 0;

	//Estado del aut�mata
	enum AutomataState { idle, evolving };
	AutomataState automataState;

	// Lista de c�lulas. Son referencias a actores que llevan un sprite
	TArray<ACellClass*> cellList;

	/// <summary>
	/// Array bi-dimensional que representa el mapa de la caverna
	/// </summary>
	TArray<TArray<ACellClass*>> map;
	// ////////////////////////////////

	//Referencia al player Controller para prop�sitos de intercepci�n de acciones de teclado
	APlayerController* controller;

public:

	AConwayAutomata();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	/// <summary>
	/// Genera el aut�mata
	/// A�ade c�lulas est�ndar al array de c�lulas a partir del spawn de prefabs
	/// </summary>
	void GenerateAutomata();

	/// <summary>
	/// Inicializa el mapa de la caverna con sus par�metros correspondientes
	/// </summary>
	void GenerateMap();

	/// <summary>
	/// Configura la forma y estilos de la cueva
	/// </summary>
	void SmoothMap();

	/// <summary>
	/// Da color a las diferentes c�lulas de la cueva
	/// </summary>
	void ColorMap();

	/// <summary>
	/// Obtiene las c�culas vecinas para realizar los c�lculos necesarios
	/// </summary>
	/// <param name="x">horizontal</param>
	/// <param name="y">vertical</param>
	/// <returns></returns>
	int GetSurroundingWallsCount(int x, int y);

	//Intercepta pulsaci�n tecla
	UFUNCTION()
		void InputKey();

};
