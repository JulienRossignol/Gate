/*----------------------
   GATE version name: gate_v6

   Copyright (C): OpenGATE Collaboration

This software is distributed under the terms
of the GNU Lesser General  Public Licence (LGPL)
See GATE/LICENSE.txt for further details
----------------------*/

#include "GateConfiguration.h"

#ifndef GATESCATTERORDERTRACKINFORMATIONACTORMESSENGER_CC
#define GATESCATTERORDERTRACKINFORMATIONACTORMESSENGER_CC

#include "GateScatterOrderTrackInformationActorMessenger.hh"

#include "G4UIcmdWithADoubleAndUnit.hh"
#include "G4UIcmdWithAString.hh"

#include "itkMacro.h"

//-----------------------------------------------------------------------------
GateScatterOrderTrackInformationActorMessenger::GateScatterOrderTrackInformationActorMessenger(GateScatterOrderTrackInformationActor* sensor):
  GateActorMessenger(sensor),pScatterOrderActor(sensor){}
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
GateScatterOrderTrackInformationActorMessenger::~GateScatterOrderTrackInformationActorMessenger(){}
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//NOTE: We keep the Messenger structures just in case we want to add new options to the actor
void GateScatterOrderTrackInformationActorMessenger::BuildCommands(G4String itkNotUsed(base)){}
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
void GateScatterOrderTrackInformationActorMessenger::SetNewValue(G4UIcommand* command, G4String param)
{
  GateActorMessenger::SetNewValue(command, param);
}
//-----------------------------------------------------------------------------

#endif /* end #define GATESCATTERORDERTRACKINFORMATIONACTORMESSENGER_CC */
