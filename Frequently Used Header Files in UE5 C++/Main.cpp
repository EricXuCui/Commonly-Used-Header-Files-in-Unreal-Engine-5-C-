//Core UE Includes
#include "CoreMinimal.h"         // Required in almost all source files.
#include "Engine/Engine.h"       // For GEngine, on-screen debug messages.
#include "GameFramework/Actor.h" // For creating custom Actors.
#include "GameFramework/Character.h" // For characters with movement.
#include "GameFramework/PlayerController.h" // For handling input & camera.

//Component System
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/InputComponent.h"
#include "Components/BoxComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SceneComponent.h"

//Gameplay and Input
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"         // Spawning, sound, camera shake...
#include "Engine/World.h"                   // For spawning, timers.
#include "TimerManager.h"                   // For timers.
#include "Engine/EngineTypes.h"             // FHitResult, FTimerHandle...

//AIand Behavior Trees
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/PawnSensingComponent.h"

//Math and Debugging
#include "DrawDebugHelpers.h"              // Drawing debug lines/shapes.
#include "Kismet/KismetMathLibrary.h"      // Advanced math helpers.

//Blueprint Support
#include "UObject/ConstructorHelpers.h"    // Find assets at runtime.
#include "Blueprint/UserWidget.h"          // For UMG UI.

//UI and HUD
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"

//Networking
#include "Net/UnrealNetwork.h"             // For replication.

//Misc / Helpful
#include "Engine/StaticMeshActor.h"
#include "Sound/SoundCue.h"
#include "Materials/MaterialInstanceDynamic.h"


