/* Copyright (C) 2006 - 2012 ScriptDev2 <http://www.scriptdev2.com/>
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/* ScriptData
SDName: Instance_Mechanar
SD%Complete: 20
SDComment:
SDCategory: Mechanar
EndScriptData */

#include "pchdef.h"
#include "mechanar.h"

instance_mechanar::instance_mechanar(Map* pMap) : ScriptedInstance(pMap) { Initialize(); }

void instance_mechanar::Initialize()
{
    memset(&m_auiEncounter, 0, sizeof(m_auiEncounter));
}

void instance_mechanar::SetData(uint32 uiType, uint32 uiData)
{
    switch(uiType)
    {
        case TYPE_SEPETHREA:
            m_auiEncounter[0] = uiData;
            break;
    }
}

uint32 instance_mechanar::GetData(uint32 uiType)
{
    if (uiType == TYPE_SEPETHREA)
        return m_auiEncounter[0];

    return 0;
}

InstanceData* GetInstanceData_instance_mechanar(Map* pMap)
{
    return new instance_mechanar(pMap);
}

void AddSC_instance_mechanar()
{
    Script* pNewScript;

    pNewScript = new Script;
    pNewScript->Name = "instance_mechanar";
    pNewScript->GetInstanceData = &GetInstanceData_instance_mechanar;
    pNewScript->RegisterSelf();
}
