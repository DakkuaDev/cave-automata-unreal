// PostProducción Digital. Daniel Guerra. ESNE

#include "ConwayAutomata.h"
#include "PaperSpriteComponent.h"

// Sets default values
AConwayAutomata::AConwayAutomata()
{
	sceneComponent = CreateDefaultSubobject<USceneComponent>("Transform");
	SetRootComponent(sceneComponent);
}

// Called when the game starts or when spawned
void AConwayAutomata::BeginPlay()
{
	Super::BeginPlay();

	automataState = AutomataState::idle;

	//Se obtiene el playerController
	controller = GEngine->GetFirstLocalPlayerController(GetWorld());

	//Permite que se reciba el input del jugador
	EnableInput(controller);

	//Establece métodos que serán llamados al recibir los eventos del Action Mapping
	InputComponent->BindAction("Pause", IE_Pressed, this, &AConwayAutomata::InputKey);


	// Seteamos los parámetros de la cueva
	map.SetNum(width);
	
	for (int i = 0; i < width; ++i)
	{
		map[i].SetNum(height);
	}

	GenerateAutomata();
	GenerateMap();
	ColorCave();
}

/// <summary>
/// El usuario genera un nuevo mapa pulsando la barra espaciadora
/// </summary>
void AConwayAutomata::InputKey()
{
	GenerateMap();
	ColorCave();
}



/// <summary>
/// Genera el autómata. 
/// Llamado desde BeginPlay, se ejecuta una sola vez durante el transcurso de la partida.
/// </summary>
void AConwayAutomata::GenerateAutomata()
{

	//Añade células estándar al array de células
	for (int x = 0; x < width; x++)
	{
		for (int y = 0; y < height; y++)
		{
			FVector location = FVector((-width * 100) / 2 + (x * 100) + 50, 0, (-height * 100) / 2 + (y * 100) + 50);
			FRotator rotation = FRotator(0, 0, 0);
			FActorSpawnParameters params;

			//Spawn actors y los convierte a ACellClass
			ACellClass* cell = (ACellClass*)GetWorld()->SpawnActor(genericCellPrefab, &location, &rotation, params);
			//Accede a la variable pública info de la clase ACellClass
			cell->info = FVector2D(x, y);

			// Hola Generamos el mapa
			map[x][y] = cell;
		}
	}
}

void AConwayAutomata::GenerateMap()
{
	for (int x = 0; x < width; ++x)
	{
		for (int y = 0; y < height; ++y)
		{
			// Esquinas del mapa
			if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
			{
				map[x][y]->type = ACellClass::Type::die;
			}
			// Se genera un número aleatorio para determinar la generación inicial
			else
			{
				if (use_random_seed)
				{
					//seed = FDateTime::Now();
				}

				float rand;

				rand = FMath::FRandRange(0, 100);

				if (rand < wall_percentage)  map[x][y]->type = ACellClass::Type::die;
				else					     map[x][y]->type = ACellClass::Type::live;
			}
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		SmoothMap();
	}
}

void AConwayAutomata::ColorCave()
{
	for (int x = 0; x < width; ++x)
	{
		for (int y = 0; y < height; ++y)
		{
			// Acceso al componente sprite del actor
			UActorComponent* sprComp = map[x][y]->GetComponentByClass(UPaperSpriteComponent::StaticClass());

			// Se pinta en función del tipo
			((UPaperSpriteComponent*)sprComp)->SetSpriteColor(ACellClass::Type::die == map[x][y]->type ? voidColor : liveColor);
		}
	}
}

void AConwayAutomata::SmoothMap()
{

	for (int x = 0; x < width; ++x)
	{
		for (int y = 0; y < height; ++y)
		{
			int neighbour_wall_tiles = GetSurroundingWallsCount(x, y);

			if (neighbour_wall_tiles > 4)
			{
				map[x][y]->type = ACellClass::Type::die;
			}
			else if (neighbour_wall_tiles < 4)
			{
				map[x][y]->type = ACellClass::Type::live;
			}
		}
	}
}

int AConwayAutomata::GetSurroundingWallsCount(int gridX, int gridY)
{
	int wall_count = 0;

	for (int neighbourX = gridX-1; neighbourX <= gridX+1; ++neighbourX)
	{
		for (int neighbourY = gridY-1; neighbourY <= gridY+1; ++neighbourY)
		{
			if (neighbourX >= 0 && neighbourX < width && neighbourY >= 0 && neighbourY < height)
			{
				if (neighbourX != gridX || neighbourY != gridY)
				{
					if (map[neighbourX][neighbourY]->type == ACellClass::Type::die) wall_count++;
				}
			}
			else
			{
				wall_count++;
			}
		}
	}

	return wall_count;
}

