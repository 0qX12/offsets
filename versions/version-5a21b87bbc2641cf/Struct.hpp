#pragma once
/* =============================================================
/*                        f4_byteDumper                         
/* -------------------------------------------------------------
/*  Dumped With     : f4_byteDumper                             
/*  Roblox Version  : version-5a21b87bbc2641cf
/*  Dumper Version  : 1.0
/*  Dumped At       : 22:17 28/10/2026 (GMT)
/*  Total Offsets   : 509
/* =============================================================
*/

#include <cstdint>
#include <string>
namespace Structs {
    inline std::string ClientVersion = "version-5a21b87bbc2641cf";

    struct Vector2 { float x, y; };
    struct Vector3 { float x, y, z; };
    struct Color3 { float r, g, b; };
    struct ColorUint_8 { uint8_t r, b, g; };
    struct Matrix3x3 { float data[9]; };
    struct UDim2 { uint8_t raw[16]; };
    struct ViewMatrix_t { float data[16]; };

    inline constexpr uintptr_t LS_ENC = 0x2;
    inline constexpr uintptr_t LUAI_STACKSIZE = 0x2d;
    inline constexpr uintptr_t OFF_STACKSIZE = 0x70;

    struct AirProperties {
        char pad_0[0x18];
        float AirDensity; // 0x18
        char pad_1[0x20];
        Vector3 GlobalWind; // 0x3c
    }; // sizeof = 0x48

    struct AnimationTrack {
        char pad_0[0xa0];
        uintptr_t Animation; // 0xa0
        char pad_1[0x14];
        float Speed; // 0xbc
        float TimePosition; // 0xc0
        char pad_2[0x8];
        bool Looped; // 0xcc
        char pad_3[0x2b];
        uintptr_t Animator; // 0xf8
        char pad_4[0x306];
        bool IsPlaying; // 0x406
    }; // sizeof = 0x407

    struct Animator {
        char pad_0[0x900];
        uintptr_t ActiveAnimations; // 0x900
    }; // sizeof = 0x908

    struct Atmosphere {
        char pad_0[0xa0];
        Color3 Color; // 0xa0
        Color3 Decay; // 0xac
        float Density; // 0xb8
        float Glare; // 0xbc
        float Haze; // 0xc0
        float Offset; // 0xc4
    }; // sizeof = 0xc8

    struct Attachment {
        char pad_0[0xac];
        Vector3 Position; // 0xac
    }; // sizeof = 0xb8

    struct Attribute {
        char pad_0[0x8];
        uintptr_t Key; // 0x8
        char pad_1[0x10];
        uintptr_t Value; // 0x20
        char pad_2[0x30];
        uintptr_t Size; // 0x58
    }; // sizeof = 0x60

    struct BasePart {
        char pad_0[0xf4];
        float Reflectance; // 0xf4
        char pad_1[0x20];
        float Transparency; // 0x118
        unsigned char Color3; // 0x11c
        // alias: Color = 0x11c (unsigned __int64)
        char pad_2[0x3];
        bool CastShadow; // 0x120
        bool Locked; // 0x121
        bool Massless; // 0x122
        char pad_3[0x55];
        uintptr_t Primitive; // 0x178
        uintptr_t ClusterNode; // 0x180
        char pad_4[0x18];
        int Shape; // 0x1a0
    }; // sizeof = 0x1a4

    struct Beam {
        char pad_0[0x128];
        std::string Texture; // 0x128
        uintptr_t Attachment0; // 0x148
        char pad_1[0x8];
        uintptr_t Attachment1; // 0x158
        char pad_2[0x8];
        float Brightness; // 0x168
        float CurveSize0; // 0x16c
        float CurveSize1; // 0x170
        float LightEmission; // 0x174
        float LightInfluence; // 0x178
        char pad_3[0x8];
        float TextureLength; // 0x184
        char pad_4[0x4];
        float TextureSpeed; // 0x18c
        float Width0; // 0x190
        float Width1; // 0x194
        float ZOffset; // 0x198
    }; // sizeof = 0x19c

    struct BloomEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float Intensity; // 0xa0
        float Size; // 0xa4
        float Threshold; // 0xa8
    }; // sizeof = 0xac

    struct BlurEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float Size; // 0xa0
    }; // sizeof = 0xa4

    struct ByteCode {
        char pad_0[0x18];
        uintptr_t Pointer; // 0x18
        char pad_1[0x8];
        uintptr_t Size; // 0x28
    }; // sizeof = 0x30

    struct CachedItem {
        char pad_0[0x40];
        uintptr_t FileMeshData; // 0x40
    }; // sizeof = 0x48

    struct Camera {
        char pad_0[0xb0];
        uintptr_t CameraSubject; // 0xb0
        char pad_1[0x8];
        Matrix3x3 Rotation; // 0xc0
        // alias: CFrame = 0xc0 (unsigned __int64)
        Vector3 Position; // 0xe4
        char pad_2[0x30];
        int CameraType; // 0x120
        char pad_3[0x4];
        float FieldOfView; // 0x128
        char pad_4[0x158];
        short Viewport; // 0x284
        char pad_5[0x3e];
        Vector2 ViewportSize; // 0x2c4
        char pad_6[0x8];
        float ImagePlaneDepth; // 0x2d4
    }; // sizeof = 0x2d8

    struct CharacterMesh {
        char pad_0[0xb0];
        std::string BaseTextureId; // 0xb0
        char pad_1[0x10];
        std::string MeshId; // 0xe0
        char pad_2[0x10];
        std::string OverlayTextureId; // 0x110
        int BodyPart; // 0x130
    }; // sizeof = 0x134

    struct ClassDescriptor {
        char pad_0[0x8];
        uintptr_t ClassName; // 0x8
        char pad_1[0x78];
        uintptr_t EventDescriptors; // 0x88
        char pad_2[0x40];
        uintptr_t FunctionDescriptors; // 0xd0
        char pad_3[0x118];
        uintptr_t PropertyDescriptors; // 0x1f0
    }; // sizeof = 0x1f8

    struct ClickDetector {
        char pad_0[0xb0];
        std::string MouseIcon; // 0xb0
        float MaxActivationDistance; // 0xd0
    }; // sizeof = 0xd4

    struct Clothing {
        char pad_0[0xe8];
        std::string Template; // 0xe8
        Color3 Color3; // 0x108
    }; // sizeof = 0x114

    struct ColorCorrectionEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        Color3 TintColor; // 0xa0
        float Brightness; // 0xac
        float Contrast; // 0xb0
    }; // sizeof = 0xb4

    struct ColorGradingEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        int TonemapperPreset; // 0xa0
    }; // sizeof = 0xa4

    struct DataModel {
        char pad_0[0x8];
        uintptr_t ToRenderView2; // 0x8
        char pad_1[0x18];
        uintptr_t ToRenderView3; // 0x28
        char pad_2[0x48];
        uintptr_t Services; // 0x78
        char pad_3[0x88];
        std::string JobId; // 0x108
        char pad_4[0x20];
        uintptr_t Workspace; // 0x148
        char pad_5[0x20];
        uintptr_t CreatorId; // 0x170
        uintptr_t GameId; // 0x178
        uintptr_t PlaceId; // 0x180
        char pad_6[0x14];
        int PlaceVersion; // 0x19c
        char pad_7[0x18];
        uintptr_t ToRenderView1; // 0x1b8
        char pad_8[0x250];
        int PrimitiveCount; // 0x410
        char pad_9[0x2c];
        uintptr_t ScriptContext; // 0x440
        char pad_10[0x128];
        std::string ServerIP; // 0x570
        // alias: GameLoaded = 0x588 (unsigned __int64)
    }; // sizeof = 0x590

    struct DepthOfFieldEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float FarIntensity; // 0xa0
        float FocusDistance; // 0xa4
        float InFocusRadius; // 0xa8
        float NearIntensity; // 0xac
    }; // sizeof = 0xb0

    struct Descriptor {
        char pad_0[0x8];
        uintptr_t Name; // 0x8
    }; // sizeof = 0x10

    struct DeviceD3D11Gfx {
        char pad_0[0x18];
        uintptr_t DevicePtr; // 0x18
        uintptr_t ContextPtr; // 0x20
        uintptr_t SwapChainPtr; // 0x28
        char pad_1[0x180];
        uintptr_t ContextObj; // 0x1b0
        char pad_2[0x6f5e390];
        uintptr_t VTableRva; // 0x6f5e548
    }; // sizeof = 0x6f5e550

    struct DragDetector {
        char pad_0[0xb0];
        std::string CursorIcon; // 0xb0
        float MaxActivationDistance; // 0xd0
        char pad_1[0xb4];
        std::string ActivatedCursorIcon; // 0x188
        char pad_2[0x10];
        uintptr_t ReferenceInstance; // 0x1b8
        char pad_3[0x74];
        Vector3 MaxDragTranslation; // 0x234
        Vector3 MinDragTranslation; // 0x240
        char pad_4[0x24];
        float MaxDragAngle; // 0x270
        float MaxForce; // 0x274
        float MaxTorque; // 0x278
        float MinDragAngle; // 0x27c
        char pad_5[0x8];
        float Responsiveness; // 0x288
    }; // sizeof = 0x28c

    struct FFlag {
        char pad_0[0x7fe7e10];
        uintptr_t RenderFastClusterOcclusionCulling4; // 0x7fe7e10
    }; // sizeof = 0x7fe7e18

    struct FakeDataModel {
        char pad_0[0x1f8];
        uintptr_t RealDataModel; // 0x1f8
        char pad_1[0x8d06400];
        uintptr_t Pointer; // 0x8d06600
    }; // sizeof = 0x8d06608

    struct FastCluster {
        char pad_0[0x48];
        uintptr_t EntityBegin; // 0x48
        uintptr_t EntityEnd; // 0x50
        char pad_1[0x38];
        uintptr_t BindingSubobject; // 0x90
        char pad_2[0x6fc1e88];
        uintptr_t VTableRva; // 0x6fc1f20
        char pad_3[0x18];
        uintptr_t VTableRvaSub; // 0x6fc1f40
    }; // sizeof = 0x6fc1f48

    struct FastClusterBinding {
        char pad_0[0x60];
        uintptr_t Owner; // 0x60
        char pad_1[0x6fc2f70];
        uintptr_t VTableRva; // 0x6fc2fd8
    }; // sizeof = 0x6fc2fe0

    struct FastClusterEntity {
        char pad_0[0x8];
        uintptr_t ContextPtr; // 0x8
        uintptr_t RenderQueueId; // 0x10
        // alias: AlphaByte = 0x14 (unsigned __int64)
        char pad_1[0x8];
        uintptr_t MaterialPtr; // 0x20
        char pad_2[0x20];
        uintptr_t DecalMaterialPtr; // 0x48
        char pad_3[0x20];
        uintptr_t TechniqueArrayPtr; // 0x70
        char pad_4[0x8];
        uintptr_t PrimitiveIndexArrayPtr; // 0x80
        char pad_5[0x10];
        uintptr_t BBoxMinX; // 0x98
        // alias: BBoxMinY = 0x9c (unsigned __int64)
        uintptr_t BBoxMinZ; // 0xa0
        // alias: BBoxMaxX = 0xa4 (unsigned __int64)
        uintptr_t BBoxMaxY; // 0xa8
        // alias: BBoxMaxZ = 0xac (unsigned __int64)
        char pad_6[0x6fc3000];
        uintptr_t VTableRva; // 0x6fc30b0
    }; // sizeof = 0x6fc30b8

    struct FileMeshData {
        uintptr_t Vertices; // 0x0
        uintptr_t VerticesEnd; // 0x8
        char pad_0[0x20];
        uintptr_t Faces; // 0x30
        uintptr_t FacesEnd; // 0x38
        char pad_1[0x140];
        Vector3 AABBMin; // 0x180
        Vector3 AABBMax; // 0x18c
    }; // sizeof = 0x198

    struct FunctionDescriptor {
        char pad_0[0x80];
        uintptr_t Function; // 0x80
    }; // sizeof = 0x88

    struct GeometryD3D11 {
        char pad_0[0x6f5ea50];
        uintptr_t VTableRva; // 0x6f5ea50
    }; // sizeof = 0x6f5ea58

    struct GuiBase2D {
        char pad_0[0xf4];
        float AbsolutePosition; // 0xf4
        char pad_1[0x4];
        float AbsoluteSize; // 0xfc
        char pad_2[0x45c];
        float AbsoluteRotation; // 0x55c
    }; // sizeof = 0x560

    struct GuiObject {
        char pad_0[0x48c];
        bool ScreenGui_Enabled; // 0x48c
        char pad_1[0x4b];
        UDim2 Position; // 0x4d8
        char pad_2[0x10];
        UDim2 Size; // 0x4f8
        Color3 BackgroundColor3; // 0x508
        Color3 BorderColor3; // 0x514
        // alias: BackgroundTransparency = 0x514 (float)
        char pad_3[0x20];
        bool Visible; // 0x540
        char pad_4[0x3];
        int LayoutOrder; // 0x544
        char pad_5[0x14];
        float Rotation; // 0x55c
        char pad_6[0xc];
        int ZIndex; // 0x56c
        char pad_7[0x438];
        std::string Image; // 0x9a8
        char pad_8[0x1d8];
        std::string RichText; // 0xba0
        char pad_9[0x248];
        std::string Text; // 0xe08
        char pad_10[0x90];
        Color3 TextColor3; // 0xeb8
    }; // sizeof = 0xec4

    struct Highlight {
        char pad_0[0x98];
        uintptr_t Prop; // 0x98
        uintptr_t Adornee; // 0xa0
        char pad_1[0x8];
        uintptr_t FillColor; // 0xb0
        char pad_2[0x4];
        uintptr_t OutlineColor; // 0xbc
        char pad_3[0x4];
        uintptr_t DepthMode; // 0xc8
        // alias: FillTransparency = 0xcc (unsigned __int64)
        uintptr_t LineThickness; // 0xd0
        // alias: OutlineTransparency = 0xd4 (unsigned __int64)
        char pad_4[0x4];
        uintptr_t Enabled; // 0xdc
        char pad_5[0xbee53c];
        uintptr_t SetEnabled; // 0xbee620
    }; // sizeof = 0xbee628

    struct Humanoid {
        float WalkspeedCheck; // 0x0
        // alias: WalkTimer = 0x0 (double)
        char pad_0[0x9c];
        std::string DisplayName; // 0xa0
        char pad_1[0x30];
        uintptr_t SeatPart; // 0xf0
        char pad_2[0x8];
        uintptr_t MoveToPart; // 0x100
        char pad_3[0x8];
        Vector3 CameraOffset; // 0x110
        char pad_4[0x18];
        Vector3 MoveDirection; // 0x134
        Vector3 TargetPoint; // 0x140
        char pad_5[0xc];
        Vector3 MoveToPoint; // 0x158
        char pad_6[0x10];
        int DisplayDistanceType; // 0x174
        int FloorMaterial; // 0x178
        float HealthDisplayDistance; // 0x17c
        int HealthDisplayType; // 0x180
        float Health; // 0x184
        float HipHeight; // 0x188
        char pad_7[0x4];
        int HumanoidStateID; // 0x190
        float JumpHeight; // 0x194
        float JumpPower; // 0x198
        float MaxHealth; // 0x19c
        float MaxSlopeAngle; // 0x1a0
        float NameDisplayDistance; // 0x1a4
        int NameOcclusion; // 0x1a8
        char pad_8[0x8];
        int RigType; // 0x1b4
        char pad_9[0xc];
        uintptr_t WalkSpeed; // 0x1c4
        // alias: Walkspeed = 0x1c4 (float)
        // alias: AutoJumpEnabled = 0x1c8 (bool)
        // alias: AutoRotate = 0x1c9 (bool)
        // alias: AutomaticScalingEnabled = 0x1ca (bool)
        bool BreakJointsOnDeath; // 0x1cc
        bool EvaluateStateMachine; // 0x1cd
        char pad_10[0x2];
        bool Jump; // 0x1d0
        char pad_11[0x1];
        bool PlatformStand; // 0x1d2
        bool RequiresNeck; // 0x1d3
        // alias: Sit = 0x1d3 (bool)
        char pad_12[0x2];
        bool UseJumpPower; // 0x1d6
        char pad_13[0x289];
        uintptr_t HumanoidRootPart; // 0x460
        char pad_14[0x440];
        int HumanoidState; // 0x8a8
        char pad_15[0x182];
        bool IsWalking; // 0xa2e
    }; // sizeof = 0xa2f

    struct Instance {
        uintptr_t Name; // 0x0
        uintptr_t This; // 0x8
        // alias: ChildrenEnd = 0x8 (unsigned __int64)
        // alias: ClassName = 0x8 (string)
        char pad_0[0x8];
        uintptr_t ClassDescriptor; // 0x18
        char pad_1[0x40];
        uintptr_t Parent; // 0x60
        uintptr_t NameContainer; // 0x68
        uintptr_t ChildrenStart; // 0x70
        char pad_2[0x138];
        uintptr_t ClassBase; // 0x1b0
    }; // sizeof = 0x1b8

    struct LRUHolder {
        char pad_0[0x20];
        uintptr_t MemEnforcedLRUCache; // 0x20
    }; // sizeof = 0x28

    struct LRUNode {
        uintptr_t Next; // 0x0
        char pad_0[0x8];
        std::string AssetID; // 0x10
        char pad_1[0x10];
        uintptr_t CachedItem; // 0x40
    }; // sizeof = 0x48

    struct Lighting {
        char pad_0[0xb0];
        uintptr_t ClockTime; // 0xb0
        Color3 Ambient; // 0xb8
        Color3 ColorShift_Bottom; // 0xc4
        Color3 ColorShift_Top; // 0xd0
        Color3 FogColor; // 0xdc
        Color3 OutdoorAmbient; // 0xe8
        char pad_1[0xc];
        float Brightness; // 0x100
        float EnvironmentDiffuseScale; // 0x104
        float EnvironmentSpecularScale; // 0x108
        float ExposureCompensation; // 0x10c
        char pad_2[0x4];
        float FogEnd; // 0x114
        float FogStart; // 0x118
        float GeographicLatitude; // 0x11c
        char pad_3[0xc];
        bool GlobalShadows; // 0x12c
        char pad_4[0x33];
        Vector3 SunPosition; // 0x160
        Vector3 MoonPosition; // 0x16c
        char pad_5[0x38];
        uintptr_t Sky; // 0x1b0
        char pad_6[0x8];
        uintptr_t Atmosphere; // 0x1c0
    }; // sizeof = 0x1c8

    struct LocalScript {
        char pad_0[0xb8];
        std::string GUID; // 0xb8
        char pad_1[0xa0];
        uintptr_t ByteCode; // 0x178
        char pad_2[0x8];
        std::string Hash; // 0x188
    }; // sizeof = 0x1a8

    struct MaterialColors {
        char pad_0[0x6];
        ColorUint_8 Grass; // 0x6
        ColorUint_8 Slate; // 0x9
        ColorUint_8 Concrete; // 0xc
        ColorUint_8 Brick; // 0xf
        ColorUint_8 Sand; // 0x12
        ColorUint_8 WoodPlanks; // 0x15
        ColorUint_8 Rock; // 0x18
        ColorUint_8 Glacier; // 0x1b
        ColorUint_8 Snow; // 0x1e
        ColorUint_8 Sandstone; // 0x21
        ColorUint_8 Mud; // 0x24
        ColorUint_8 Basalt; // 0x27
        ColorUint_8 Ground; // 0x2a
        ColorUint_8 CrackedLava; // 0x2d
        ColorUint_8 Asphalt; // 0x30
        ColorUint_8 Cobblestone; // 0x33
        ColorUint_8 Ice; // 0x36
        ColorUint_8 LeafyGrass; // 0x39
        ColorUint_8 Salt; // 0x3c
        ColorUint_8 Limestone; // 0x3f
        ColorUint_8 Pavement; // 0x42
    }; // sizeof = 0x45

    struct MaterialLayer {
        char pad_0[0x11];
        uintptr_t FillModeByte; // 0x11
        // alias: MatFlags = 0x18 (unsigned __int64)
        char pad_1[0x3];
        uintptr_t Param; // 0x1c
        // alias: Flags2 = 0x20 (unsigned __int64)
        uintptr_t ColorData; // 0x24
        char pad_2[0x5c];
        uintptr_t Stride; // 0x88
    }; // sizeof = 0x90

    struct MemEnforcedLRUCache {
        char pad_0[0x8];
        uintptr_t Head; // 0x8
    }; // sizeof = 0x10

    struct MeshContentProvider {
        char pad_0[0xc0];
        uintptr_t LRUHolder; // 0xc0
    }; // sizeof = 0xc8

    struct MeshPart {
        char pad_0[0x210];
        Vector3 MeshSize; // 0x210
        char pad_1[0xdc];
        std::string MeshId; // 0x2f8
        char pad_2[0x10];
        std::string Texture; // 0x328
    }; // sizeof = 0x348

    struct Misc {
        char pad_0[0x10];
        int StringLength; // 0x10
        char pad_1[0x8c];
        std::string Value; // 0xa0
        // alias: AnimationId = 0xa8 (string)
        char pad_2[0x18];
        uintptr_t Adornee; // 0xd8
    }; // sizeof = 0xe0

    struct Model {
        char pad_0[0x12c];
        float Scale; // 0x12c
        char pad_1[0x110];
        uintptr_t PrimaryPart; // 0x240
    }; // sizeof = 0x248

    struct ModuleScript {
        char pad_0[0xb8];
        std::string GUID; // 0xb8
        char pad_1[0x48];
        uintptr_t ByteCode; // 0x120
        char pad_2[0x28];
        uintptr_t IsCoreScript; // 0x150
    }; // sizeof = 0x158

    struct MouseService {
        float SensitivityPointer; // 0x0
        char pad_0[0xb8];
        Vector2 MousePosition; // 0xbc
        char pad_1[0x24];
        uintptr_t InputObject; // 0xe8
        char pad_2[0x8];
        uintptr_t InputObject2; // 0xf8
    }; // sizeof = 0x100

    struct ParticleEmitter {
        char pad_0[0x1a8];
        std::string Texture; // 0x1a8
        Vector3 Acceleration; // 0x1c8
        char pad_1[0x8];
        Vector2 Lifetime; // 0x1dc
        float RotSpeed; // 0x1e4
        char pad_2[0x4];
        float Rotation; // 0x1ec
        char pad_3[0x4];
        float Speed; // 0x1f4
        char pad_4[0x4];
        Vector2 SpreadAngle; // 0x1fc
        float Brightness; // 0x204
        float Drag; // 0x208
        char pad_5[0x14];
        float LightEmission; // 0x220
        float LightInfluence; // 0x224
        char pad_6[0x8];
        float Rate; // 0x230
        char pad_7[0x10];
        float TimeScale; // 0x244
        float VelocityInheritance; // 0x248
        float ZOffset; // 0x24c
    }; // sizeof = 0x250

    struct Player {
        char pad_0[0x118];
        uintptr_t LocalPlayer; // 0x118
        std::string DisplayName; // 0x120
        char pad_1[0x160];
        uintptr_t ModelInstance; // 0x2a0
        char pad_2[0x38];
        uintptr_t Team; // 0x2e0
        char pad_3[0x30];
        uintptr_t UserId; // 0x318
        char pad_4[0x44];
        int AccountAge; // 0x364
        char pad_5[0x8];
        float MaxZoomDistance; // 0x370
        float MinZoomDistance; // 0x374
        int CameraMode; // 0x378
        char pad_6[0x24];
        float HealthDisplayDistance; // 0x3a0
        char pad_7[0xc];
        float NameDisplayDistance; // 0x3b0
        char pad_8[0x4];
        int TeamColor; // 0x3b8
        char pad_9[0x384];
        std::string LocaleId; // 0x740
        char pad_10[0xa90];
        uintptr_t Mouse; // 0x11f0
    }; // sizeof = 0x11f8

    struct PlayerConfigurer {
        uintptr_t Pointer; // 0x0
    }; // sizeof = 0x8

    struct PlayerMouse {
        char pad_0[0xb0];
        std::string Icon; // 0xb0
        char pad_1[0x68];
        uintptr_t Workspace; // 0x138
    }; // sizeof = 0x140

    struct Primitive {
        char pad_0[0x6];
        uintptr_t Validate; // 0x6
        char pad_1[0xa2];
        Matrix3x3 Rotation; // 0xb0
        Vector3 Position; // 0xd4
        Vector3 AssemblyLinearVelocity; // 0xe0
        Vector3 AssemblyAngularVelocity; // 0xec
        char pad_2[0xc6];
        uint8_t Flags; // 0x1be
        char pad_3[0x5];
        Vector3 Size; // 0x1c4
        char pad_4[0x48];
        uintptr_t Owner; // 0x218
        char pad_5[0x2e];
        unsigned short Material; // 0x24e
    }; // sizeof = 0x250

    struct PrimitiveFlags {
        char pad_0[0x2];
        uintptr_t Anchored; // 0x2
        // alias: CanCollide = 0x8 (unsigned __int64)
        char pad_1[0x6];
        uintptr_t CanTouch; // 0x10
        char pad_2[0x8];
        uintptr_t CanQuery; // 0x20
    }; // sizeof = 0x28

    struct PropertyDescriptor {
        char pad_0[0x70];
        uintptr_t TType; // 0x70
        char pad_1[0x38];
        uintptr_t GetSetImpl; // 0xb0
    }; // sizeof = 0xb8

    struct ProximityPrompt {
        char pad_0[0x98];
        std::string ActionText; // 0x98
        std::string ObjectText; // 0xb8
        char pad_1[0x2c];
        int GamepadKeyCode; // 0x104
        float HoldDuration; // 0x108
        int KeyCode; // 0x10c
        float MaxActivationDistance; // 0x110
        char pad_2[0xa];
        bool Enabled; // 0x11e
        bool RequiresLineOfSight; // 0x11f
    }; // sizeof = 0x120

    struct RakNet {
        char pad_0[0x28140b0];
        uintptr_t SendPacketsToSelf; // 0x28140b0
        char pad_1[0x408];
        uintptr_t UpdateNetworkLoop; // 0x28144c0
        char pad_2[0x16d8];
        uintptr_t RakPeerReceive; // 0x2815ba0
        char pad_3[0x8b68];
        uintptr_t RakNetSend; // 0x281e710
        char pad_4[0xc588];
        uintptr_t RakPeerProcessNetworkPacket; // 0x282aca0
        char pad_5[0x8c88];
        uintptr_t RakNetReliabilityLayerSend; // 0x2833930
        char pad_6[0xec68];
        uintptr_t RakNetReceive; // 0x28425a0
        char pad_7[0x60f8];
        uintptr_t RakNetEncrypt; // 0x28486a0
        char pad_8[0x1fa98c8];
        uintptr_t RaknetReportNetworkError; // 0x47f1f70
        char pad_9[0x5ff88];
        uintptr_t convertItemEnumToString; // 0x4851f00
        char pad_10[0x97098];
        uintptr_t RaknetHandleConnectionState; // 0x48e8fa0
        char pad_11[0x26760d8];
        uintptr_t RakPeerVirtualTable; // 0x6f5f080
    }; // sizeof = 0x6f5f088

    struct Raycast {
        char pad_0[0xb0];
        uintptr_t RaycastBoundFn; // 0xb0
        char pad_1[0x8494f38];
        uintptr_t RaycastBoundDesc; // 0x8494ff0
    }; // sizeof = 0x8494ff8

    struct RemoteSpy {
        char pad_0[0x4b];
        uintptr_t FireServerVtableSlot; // 0x4b
        char pad_1[0xd];
        uintptr_t InstanceParentOffset; // 0x60
        char pad_2[0x70c108];
        uintptr_t FireServerRva; // 0x70c170
        char pad_3[0x683b238];
        uintptr_t InstanceVtableRva; // 0x6f473b0
        char pad_4[0x6e188];
        uintptr_t DescribedBaseRemoteEventVtableRva; // 0x6fb5540
        char pad_5[0x260];
        uintptr_t BaseRemoteEventVtableRva; // 0x6fb57a8
        char pad_6[0x4530];
        uintptr_t RemoteFuncVTableRva; // 0x6fb9ce0
        char pad_7[0x4e0];
        uintptr_t RemoteEventVtableRva; // 0x6fba1c8
    }; // sizeof = 0x6fba1d0

    struct RenderJob {
        char pad_0[0x38];
        uintptr_t FakeDataModel; // 0x38
        char pad_1[0x1a0];
        uintptr_t RenderView; // 0x1e0
        char pad_2[0x8];
        uintptr_t RealDataModel; // 0x1f0
    }; // sizeof = 0x1f8

    struct RenderView {
        bool LightingValid; // 0x0
        // alias: SkyValid = 0x0 (bool)
        char pad_0[0x7];
        uintptr_t DeviceD3D11; // 0x8
        char pad_1[0x8];
        uintptr_t VisualEngine; // 0x18
    }; // sizeof = 0x20

    struct Script {
        char pad_0[0xb8];
        std::string GUID; // 0xb8
        char pad_1[0xb0];
        std::string Hash; // 0x188
    }; // sizeof = 0x1a8

    struct ScriptContext {
        char pad_0[0xb50];
        uintptr_t RequireBypass; // 0xb50
    }; // sizeof = 0xb58

    struct Seat {
        char pad_0[0x200];
        uintptr_t Occupant; // 0x200
    }; // sizeof = 0x208

    struct Sky {
        char pad_0[0xb0];
        std::string MoonTextureId; // 0xb0
        char pad_1[0x10];
        std::string SkyboxBk; // 0xe0
        char pad_2[0x10];
        std::string SkyboxDn; // 0x110
        char pad_3[0x10];
        std::string SkyboxFt; // 0x140
        char pad_4[0x10];
        std::string SkyboxLf; // 0x170
        char pad_5[0x10];
        std::string SkyboxRt; // 0x1a0
        char pad_6[0x10];
        std::string SkyboxUp; // 0x1d0
        char pad_7[0x10];
        std::string SunTextureId; // 0x200
        Vector3 SkyboxOrientation; // 0x220
        // alias: SunAngularSize = 0x224 (float)
        float MoonAngularSize; // 0x22c
        int StarCount; // 0x230
    }; // sizeof = 0x234

    struct Sound {
        char pad_0[0xb0];
        std::string SoundId; // 0xb0
        uintptr_t SoundGroup; // 0xd0
        char pad_1[0x2c];
        float PlaybackSpeed; // 0x104
        float RollOffMaxDistance; // 0x108
        float RollOffMinDistance; // 0x10c
        char pad_2[0x8];
        float Volume; // 0x118
        char pad_3[0x9];
        bool Looped; // 0x125
        char pad_4[0x2];
        bool IsPlaying; // 0x128
    }; // sizeof = 0x129

    struct SpawnLocation {
        char pad_0[0x1d0];
        int ForcefieldDuration; // 0x1d0
        int TeamColor; // 0x1d4
        bool AllowTeamChangeOnTouch; // 0x1d8
        bool Enabled; // 0x1d9
        bool Neutral; // 0x1da
    }; // sizeof = 0x1db

    struct SpecialMesh {
        char pad_0[0xac];
        Vector3 Scale; // 0xac
        char pad_1[0x28];
        std::string MeshId; // 0xe0
    }; // sizeof = 0x100

    struct SunRaysEffect {
        char pad_0[0x98];
        bool Enabled; // 0x98
        char pad_1[0x7];
        float Intensity; // 0xa0
        float Spread; // 0xa4
    }; // sizeof = 0xa8

    struct SurfaceAppearance {
        char pad_0[0xb0];
        std::string ColorMap; // 0xb0
        char pad_1[0x10];
        std::string EmissiveMaskContent; // 0xe0
        char pad_2[0x10];
        std::string MetalnessMap; // 0x110
        char pad_3[0x10];
        std::string NormalMap; // 0x140
        char pad_4[0x10];
        std::string RoughnessMap; // 0x170
        char pad_5[0x30];
        Color3 Color; // 0x1c0
        Color3 EmissiveTint; // 0x1cc
        int AlphaMode; // 0x1d8
        float EmissiveStrength; // 0x1dc
    }; // sizeof = 0x1e0

    struct TaskScheduler {
        char pad_0[0x18];
        std::string JobName; // 0x18
        char pad_1[0x78];
        double MaxFPS; // 0xb0
        char pad_2[0x10];
        uintptr_t JobStart; // 0xc8
        uintptr_t JobEnd; // 0xd0
        char pad_3[0x8c9d5c0];
        uintptr_t Pointer; // 0x8c9d698
    }; // sizeof = 0x8c9d6a0

    struct Team {
        char pad_0[0xa0];
        int BrickColor; // 0xa0
    }; // sizeof = 0xa4

    struct TechniqueArray {
        uintptr_t BeginOffset; // 0x0
        uintptr_t EndOffset; // 0x8
        char pad_0[0x78];
        uintptr_t EntryStride; // 0x88
    }; // sizeof = 0x90

    struct Terrain {
        char pad_0[0x1c8];
        Color3 WaterColor; // 0x1c8
        char pad_1[0x4];
        float GrassLength; // 0x1d8
        char pad_2[0x4];
        float WaterReflectance; // 0x1e0
        float WaterTransparency; // 0x1e4
        float WaterWaveSize; // 0x1e8
        float WaterWaveSpeed; // 0x1ec
        char pad_3[0x2b0];
        uintptr_t MaterialColors; // 0x4a0
    }; // sizeof = 0x4a8

    struct Textures {
        char pad_0[0x1c8];
        std::string Decal_Texture; // 0x1c8
        // alias: Texture_Texture = 0x1c8 (string)
    }; // sizeof = 0x1e8

    struct Tool {
        char pad_0[0x348];
        std::string TextureId; // 0x348
        char pad_1[0xe8];
        std::string Tooltip; // 0x450
        char pad_2[0x24];
        Vector3 Grip; // 0x494
        bool CanBeDropped; // 0x4a0
        bool Enabled; // 0x4a1
        bool ManualActivationOnly; // 0x4a2
        bool RequiresHandle; // 0x4a3
    }; // sizeof = 0x4a4

    struct UnionOperation {
        char pad_0[0x2f8];
        std::string AssetId; // 0x2f8
    }; // sizeof = 0x318

    struct UserInputService {
        char pad_0[0x288];
        uintptr_t WindowInputState; // 0x288
    }; // sizeof = 0x290

    struct VehicleSeat {
        char pad_0[0x210];
        float MaxSpeed; // 0x210
        float SteerFloat; // 0x214
        float ThrottleFloat; // 0x218
        float Torque; // 0x21c
        float TurnSpeed; // 0x220
    }; // sizeof = 0x224

    struct VisualEngine {
        char pad_0[0x1b0];
        ViewMatrix_t ViewMatrix; // 0x1b0
        char pad_1[0x920];
        Vector2 Dimensions; // 0xb10
        char pad_2[0x128];
        uintptr_t RenderView; // 0xc40
        char pad_3[0x180];
        uintptr_t FakeDataModel; // 0xdc8
        char pad_4[0x8799448];
        uintptr_t Pointer; // 0x879a218
    }; // sizeof = 0x879a220

    struct Weld {
        char pad_0[0x100];
        uintptr_t Part0; // 0x100
        char pad_1[0x8];
        uintptr_t Part1; // 0x110
    }; // sizeof = 0x118

    struct WeldConstraint {
        char pad_0[0xa0];
        uintptr_t Part0; // 0xa0
        char pad_1[0x8];
        uintptr_t Part1; // 0xb0
    }; // sizeof = 0xb8

    struct WindowInputState {
        char pad_0[0x40];
        bool CapsLock; // 0x40
        char pad_1[0x7];
        uintptr_t CurrentTextBox; // 0x48
    }; // sizeof = 0x50

    struct Workspace {
        char pad_0[0x3f8];
        uintptr_t World; // 0x3f8
        char pad_1[0xa0];
        uintptr_t CurrentCamera; // 0x4a0
        char pad_2[0x18];
        double DistributedGameTime; // 0x4c0
        char pad_3[0x4f8];
        float ReadOnlyGravity; // 0x9c0
    }; // sizeof = 0x9c4

    struct World {
        char pad_0[0x20c];
        float FallenPartsDestroyHeight; // 0x20c
        char pad_1[0x8];
        float Gravity; // 0x218
        char pad_2[0x14];
        uintptr_t AirProperties; // 0x230
        char pad_3[0x68];
        uintptr_t Primitives; // 0x2a0
        char pad_4[0x5b0];
        float worldStepsPerSec; // 0x858
        // alias: WorldSteps = 0x858 (float)
    }; // sizeof = 0x85c

    struct datamodel {
        char pad_0[0x178];
        uintptr_t game_id; // 0x178
        uintptr_t place_id; // 0x180
        char pad_1[0x70];
        uintptr_t real; // 0x1f8
        char pad_2[0x240];
        uintptr_t script_context; // 0x440
        char pad_3[0x140];
        uintptr_t game_loaded; // 0x588
        char pad_4[0x8d06070];
        uintptr_t pointer; // 0x8d06600
    }; // sizeof = 0x8d06608

    struct global_State {
        char pad_0[0x70];
        uintptr_t mainthread; // 0x70
        char pad_1[0x5a0];
        uintptr_t ref_table; // 0x618
    }; // sizeof = 0x620

    struct instance {
        uintptr_t name_str; // 0x0
        std::string class_name; // 0x8
        // alias: children_end = 0x8 (unsigned __int64)
        // alias: class_desc = 0x18 (unsigned __int64)
        char pad_0[0x40];
        uintptr_t name; // 0x68
        uintptr_t children_start; // 0x70
        char pad_1[0x28];
        std::string value_base; // 0xa0
        char pad_2[0x58];
        uintptr_t local_player; // 0x118
    }; // sizeof = 0x120

    struct lua_state {
        char pad_0[0x38];
        uintptr_t global; // 0x38
        char pad_1[0x8];
        uintptr_t stack; // 0x48
        uintptr_t top; // 0x50
        uintptr_t stack_last; // 0x58
    }; // sizeof = 0x60

    struct lua_thread {
        char pad_0[0x310];
        uintptr_t ref; // 0x310
        uintptr_t control; // 0x318
        char pad_1[0x8];
        uintptr_t thread; // 0x328
        uintptr_t thread_ref_id; // 0x330
        // alias: Value_Ref_Id = 0x334 (unsigned __int64)
    }; // sizeof = 0x338

    struct script {
        char pad_0[0x18];
        uintptr_t pointer; // 0x18
        char pad_1[0x8];
        uintptr_t size; // 0x28
        char pad_2[0xf0];
        uintptr_t modulescript_pointer; // 0x120
        char pad_3[0x28];
        uintptr_t modulescript_module_state; // 0x150
        // alias: core_script = 0x150 (unsigned __int64)
        // alias: IsRobloxScript = 0x150 (unsigned __int64)
        char pad_4[0x20];
        uintptr_t localscript_pointer; // 0x178
        uintptr_t modulescript_detection; // 0x180
    }; // sizeof = 0x188

    struct task_scheduler {
        char pad_0[0x7fd07c8];
        uintptr_t target_fps; // 0x7fd07c8
    }; // sizeof = 0x7fd07d0

    struct userdata {
        char pad_0[0x60];
        uintptr_t Identity; // 0x60
        char pad_1[0x8];
        uintptr_t Capabilities; // 0x70
    }; // sizeof = 0x78

}
