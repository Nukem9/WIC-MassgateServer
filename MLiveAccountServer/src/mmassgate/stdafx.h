#pragma once

// Must be forward declared
class SvClient;

#include "MMG_Constants.h"
#include "MMG_ProtocolDelimiters.h"
#include "MMG_Protocols.h"
#include "MMG_GroupMemberships.h"
#include "MMG_IStreamable.h"
#include "MMG_ICipher.h"
#include "MMG_NullCipher.h"
#include "MMG_BlockTEA.h"
#include "MMG_CryptoHash.h"
#include "MMG_AuthToken.h"
#include "MMG_Profile.h"
#include "MMG_InstantMessageListener.h"
#include "MMG_Options.h"
#include "MMG_AccountProtocol.h"
#include "MMG_AccountProxy.h"
#include "MMG_Messaging.h"
#include "MMG_OptionalContentProtocol.h"
#include "MMG_ClanStats.h"
#include "MMG_PlayerStats.h"
#include "MMG_ProfileGuestBookEntry.h"
#include "MMG_ProfileGuestBookProtocol.h"
#include "MMG_ProfileEditableVariablesProtocol.h"
#include "MMG_TrackableServerBriefInfo.h"
#include "MMG_TrackableServerFullInfo.h"
#include "MMG_TrackableServerHeartbeat.h"
#include "MMG_ServerStartupVariables.h"
#include "MMG_Chat.h"
#include "MMG_ServerFilter.h"
#include "MMG_ServerTracker.h"
#include "MMG_TrackableServer.h"