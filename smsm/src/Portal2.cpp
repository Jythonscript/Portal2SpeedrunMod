#include "Portal2.hpp"

#include "Game.hpp"
#include "Offsets.hpp"

Portal2::Portal2()
{
    this->version = SourceGame_Portal2;
}
void Portal2::LoadOffsets()
{
    using namespace Offsets;

    // engine.so

    InternalSetValue = 19; // ConVar
    InternalSetFloatValue = 20; // ConVar
    InternalSetIntValue = 21; // ConVar
    ClientCmd = 7; // CEngineClient
    GetClientStateFunction = 11; // CEngineClient::ClientCmd
    Cbuf_AddText = 45; // CEngineClient::ClientCmd
    s_CommandBuffer = 69; // Cbuf_AddText
    CCommandBufferSize = 9556; // Cbuf_AddText
    m_bWaitEnabled = 8265; // CCommandBuffer::AddText
    GetActiveSplitScreenPlayerSlot = 127; // CEngineClient
    SetSignonState = 3; // CClientState
    HostState_OnClientConnected = 735; // CClientState::SetSignonState
    hoststate = 735; // HostState_OnClientConnected
    AutoCompletionFunc = 37; // listdemo_CompletionFunc
    ClientCommand = 39; // CVEngineServer
    TraceRay = 5; // IEngineTrace TODO - Find what this offset it
    NextParticleSystem = 54; //IClientTools TODO - Find what this offset it
    ProcessMovement = 2; // CGameMovement
    m_fFlags = 204; // CBaseEntity TODO - Find what this offset it
    m_nTickBase = 3792; // CBaseEntity TODO - Find what this offset it
    m_bDucking = 2272; // CBaseEntity TODO - Find what this offset it
    m_hUseEntity = 2960; // CBaseEntity TODO - Find what this offset it
    GetScreenSize = 5; // CEngineClient
    PrecacheModel = 62; // IEngineTool TODO - Find what this offset it
    GetWorldToScreenMatrixForView = 80; // IEngineTool TODO - Find what this offset it

    // client.so

    GetHud = 104; // cc_leaderboard_enable
    FindElement = 120; // cc_leaderboard_enable
    ChatPrintf = 22; // CBaseHudChat TODO - Find what this offset it
    RenderView = 26; // TODO - Find what this offset it
    HudUpdate = 11;

    // server.so
    m_hActiveWeapon = 2140; // CBaseEntity TODO - Find what this offset it
    m_bCanFirePortal1 = 1500; // CBaseEntity TODO - Find what this offset it
    UTIL_PlayerByIndex = 61; // CServerGameDLL::Think
    gpGlobals = 12; // UTIL_PlayerByIndex
    Think = 31; // CServerGameDLL
    m_hGroundEntity = 344; // CBaseEntity TODO - Find what this offset it

    // vstdlib.so

    RegisterConCommand = 9; // CCVar
    UnregisterConCommand = 10; // CCvar
    FindCommandBase = 13; // CCVar
    m_pConCommandList = 48; // CCvar

    // vscript.so

    CreateVM = 8; // TODO - Find what this offset it

    // vgui2.so

    GetIScheme = 9; // CSchemeManager
    GetFont = 4; // CScheme

    // vguimatsurface.so

    DrawSetColor = 13; // CMatSystemSurface
    DrawFilledRect = 15; // CMatSystemSurface
    DrawLine = 18; // CMatSystemSurface
    DrawSetTextFont = 22; // CMatSystemSurface
    DrawSetTextColor = 24; // CMatSystemSurface
    GetFontTall = 72; // CMatSystemSurface
    PaintTraverseEx = 117; // CMatSystemSurface
    StartDrawing = 193; // CMatSystemSurface::PaintTraverseEx
    FinishDrawing = 590; // CMatSystemSurface::PaintTraverseEx
    DrawColoredText = 160; // CMatSystemSurface
    DrawTextLen = 163; // CMatSystemSurface
    DisableClipping = 156; // CMatSystemSurface TODO - Find what this offset it
    Paint = 14; // CEngineVGui TODO - Find what this offset it (found in engine.so to be 15, but probably isn't the same here)

    DrawGetTextureId = 33; // CMatSystemSurface TODO - Find what this offset it
    DrawGetTextureFile = 34; // CMatSystemSurface TODO - Find what this offset it
    DrawSetTextureFile = 35; // CMatSystemSurface TODO - Find what this offset it
    DrawSetTextureRGBA = 36; // CMatSystemSurface TODO - Find what this offset it
    DrawSetTexture = 37; // CMatSystemSurface TODO - Find what this offset it
    DrawGetTextureSize = 38; // CMatSystemSurface TODO - Find what this offset it
    DrawTexturedRect = 39; // CMatSystemSurface TODO - Find what this offset it
    IsTextureIDValid = 40; // CMatSystemSurface TODO - Find what this offset it
    CreateNewTextureID = 41; // CMatSystemSurface TODO - Find what this offset it
}
const char* Portal2::Version()
{
    return "Portal 2 (7054)";
}
const char* Portal2::Process()
{
    return "portal2.exe";
}
