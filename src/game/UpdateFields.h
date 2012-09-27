/*
 * Copyright (C) 2010-2012 Strawberry-Pr0jcts <http://strawberry-pr0jcts.com/>
 *
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

#ifndef UPDATEFIELDS_H
#define UPDATEFIELDS_H

// Auto generated for version 5, 0, 5, 16057
enum ObjectFields
{
    OBJECT_FIELD_GUID                                = 0x0,
    OBJECT_FIELD_DATA                                = 0x2,
    OBJECT_FIELD_TYPE                                = 0x4,
    OBJECT_FIELD_ENTRY                               = 0x5,
    OBJECT_FIELD_SCALE                               = 0x6,
    OBJECT_END                                       = 0x7
};

enum ItemFields
{
    ITEM_FIELD_OWNER                                 = OBJECT_END + 0x0,
    ITEM_FIELD_CONTAINED_IN                          = OBJECT_END + 0x2,
    ITEM_FIELD_CREATOR                               = OBJECT_END + 0x4,
    ITEM_FIELD_GIFT_CREATOR                          = OBJECT_END + 0x6,
    ITEM_FIELD_STACK_COUNT                           = OBJECT_END + 0x8,
    ITEM_FIELD_EXPIRATION                            = OBJECT_END + 0x9,
    ITEM_FIELD_SPELL_CHARGES                         = OBJECT_END + 0xA,
    ITEM_FIELD_DYNAMIC_FLAGS                         = OBJECT_END + 0xF,
    ITEM_FIELD_ENCHANTMENT                           = OBJECT_END + 0x10,
    ITEM_FIELD_PROPERTY_SEED                         = OBJECT_END + 0x37,
    ITEM_FIELD_RANDOM_PROPERTIES_ID                  = OBJECT_END + 0x38,
    ITEM_FIELD_DURABILITY                            = OBJECT_END + 0x39,
    ITEM_FIELD_MAX_DURABILITY                        = OBJECT_END + 0x3A,
    ITEM_FIELD_CREATE_PLAYED_TIME                    = OBJECT_END + 0x3B,
    ITEM_FIELD_MODIFIERS_MASK                        = OBJECT_END + 0x3C,
    ITEM_END                                         = OBJECT_END + 0x3D
};

enum ContainerFields
{
    CONTAINER_FIELD_NUM_SLOTS                        = ITEM_END + 0x0,
    CONTAINER_FIELD_SLOTS                            = ITEM_END + 0x1,
    CONTAINER_END                                    = ITEM_END + 0x49
};

enum UnitFields
{
    UNIT_FIELD_CHARM                                 = OBJECT_END + 0x0,
    UNIT_FIELD_SUMMON                                = OBJECT_END + 0x2,
    UNIT_FIELD_CRITTER                               = OBJECT_END + 0x4,
    UNIT_FIELD_CHARMEDBY                             = OBJECT_END + 0x6,
    UNIT_FIELD_SUMMONEDBY                            = OBJECT_END + 0x8,
    UNIT_FIELD_CREATEDBY                             = OBJECT_END + 0xA,
    UNIT_FIELD_TARGET                                = OBJECT_END + 0xC,
    UNIT_FIELD_CHANNEL_OBJECT                        = OBJECT_END + 0xE,
    UNIT_FIELD_SUMMONED_BY_HOMEREALM                 = OBJECT_END + 0x10,
    UNIT_FIELD_CHANNEL_SPELL                         = OBJECT_END + 0x11,
    UNIT_FIELD_DISPLAY_POWER                         = OBJECT_END + 0x12,
    UNIT_FIELD_OVERRIDE_DISPLAY_POWER_ID             = OBJECT_END + 0x13,
    UNIT_FIELD_HEALTH                                = OBJECT_END + 0x14,
    UNIT_FIELD_POWER                                 = OBJECT_END + 0x15,
    UNIT_FIELD_MAXHEALTH                             = OBJECT_END + 0x1A,
    UNIT_FIELD_MAXPOWER                              = OBJECT_END + 0x1B,
    UNIT_FIELD_POWER_REGEN_FLAT_MODIFIER             = OBJECT_END + 0x20,
    UNIT_FIELD_POWER_REGEN_INTERRUPTED_FLAT_MODIFIER = OBJECT_END + 0x25,
    UNIT_FIELD_LEVEL                                 = OBJECT_END + 0x2A,
    UNIT_FIELD_FACTIONTEMPLATE                       = OBJECT_END + 0x2B,
    UNIT_FIELD_VIRTUAL_ITEMID                        = OBJECT_END + 0x2C,
    UNIT_FIELD_FLAGS                                 = OBJECT_END + 0x2F,
    UNIT_FIELD_FLAGS_2                               = OBJECT_END + 0x30,
    UNIT_FIELD_AURASTATE                             = OBJECT_END + 0x31,
    UNIT_FIELD_ATTACK_ROUND_BASE_TIME                = OBJECT_END + 0x32,
    UNIT_FIELD_RANGED_ATTACK_ROUND_BASE_TIME         = OBJECT_END + 0x34,
    UNIT_FIELD_BOUNDINGRADIUS                        = OBJECT_END + 0x35,
    UNIT_FIELD_COMBATREACH                           = OBJECT_END + 0x36,
    UNIT_FIELD_DISPLAYID                             = OBJECT_END + 0x37,
    UNIT_FIELD_NATIVE_DISPLAYID                      = OBJECT_END + 0x38,
    UNIT_FIELD_MOUNT_DISPLAYID                       = OBJECT_END + 0x39,
    UNIT_FIELD_MIN_DAMAGE                            = OBJECT_END + 0x3A,
    UNIT_FIELD_MAX_DAMAGE                            = OBJECT_END + 0x3B,
    UNIT_FIELD_MIN_OFFHAND_DAMAGE                    = OBJECT_END + 0x3C,
    UNIT_FIELD_MAX_OFFHAND_DAMAGE                    = OBJECT_END + 0x3D,
    UNIT_FIELD_ANIMTIER                              = OBJECT_END + 0x3E,
    UNIT_FIELD_PET_NUMBER                            = OBJECT_END + 0x3F,
    UNIT_FIELD_PET_NAME_TIMESTAMP                    = OBJECT_END + 0x40,
    UNIT_FIELD_PET_EXPERIENCE                        = OBJECT_END + 0x41,
    UNIT_FIELD_PET_NEXTLEVEL_EXPERIENCE              = OBJECT_END + 0x42,
    UNIT_FIELD_DYNAMIC_FLAGS                         = OBJECT_END + 0x43,
    UNIT_FIELD_MOD_CASTING_SPEED                     = OBJECT_END + 0x44,
    UNIT_FIELD_MOD_SPELL_HASTE                       = OBJECT_END + 0x45,
    UNIT_FIELD_MOD_HASTE                             = OBJECT_END + 0x46,
    UNIT_FIELD_MOD_HASTE_REGEN                       = OBJECT_END + 0x47,
    UNIT_FIELD_CREATED_BY_SPELL                      = OBJECT_END + 0x48,
    UNIT_FIELD_NPC_FLAGS                             = OBJECT_END + 0x49,
    UNIT_FIELD_EMOTESTATE                            = OBJECT_END + 0x4B,
    UNIT_FIELD_STATS                                 = OBJECT_END + 0x4C,
    UNIT_FIELD_STAT_POSBUFF                          = OBJECT_END + 0x51,
    UNIT_FIELD_STAT_NEGBUFF                          = OBJECT_END + 0x56,
    UNIT_FIELD_RESISTANCES                           = OBJECT_END + 0x5B,
    UNIT_FIELD_RESISTANCE_BUFF_MODS_POSITIVE         = OBJECT_END + 0x62,
    UNIT_FIELD_RESISTANCE_BUFF_MODS_NEGATIVE         = OBJECT_END + 0x69,
    UNIT_FIELD_BASE_MANA                             = OBJECT_END + 0x70,
    UNIT_FIELD_BASE_HEALTH                           = OBJECT_END + 0x71,
    UNIT_FIELD_SHAPESHIFT_FORM                       = OBJECT_END + 0x72,
    UNIT_FIELD_ATTACK_POWER                          = OBJECT_END + 0x73,
    UNIT_FIELD_ATTACK_POWER_MOD_POS                  = OBJECT_END + 0x74,
    UNIT_FIELD_ATTACK_POWER_MOD_NEG                  = OBJECT_END + 0x75,
    UNIT_FIELD_ATTACK_POWER_MULTIPLIER               = OBJECT_END + 0x76,
    UNIT_FIELD_RANGED_ATTACK_POWER                   = OBJECT_END + 0x77,
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_POS           = OBJECT_END + 0x78,
    UNIT_FIELD_RANGED_ATTACK_POWER_MOD_NEG           = OBJECT_END + 0x79,
    UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER        = OBJECT_END + 0x7A,
    UNIT_FIELD_MIN_RANGED_DAMAGE                     = OBJECT_END + 0x7B,
    UNIT_FIELD_MAX_RANGED_DAMAGE                     = OBJECT_END + 0x7C,
    UNIT_FIELD_POWER_COST_MODIFIER                   = OBJECT_END + 0x7D,
    UNIT_FIELD_POWER_COST_MULTIPLIER                 = OBJECT_END + 0x84,
    UNIT_FIELD_MAX_HEALTH_MODIFIER                   = OBJECT_END + 0x8B,
    UNIT_FIELD_HOVERHEIGHT                           = OBJECT_END + 0x8C,
    UNIT_FIELD_MIN_ITEM_LEVEL                        = OBJECT_END + 0x8D,
    UNIT_FIELD_MAX_ITEM_LEVEL                        = OBJECT_END + 0x8E,
    UNIT_FIELD_WILD_BATTLEPET_LEVEL                  = OBJECT_END + 0x8F,
    UNIT_FIELD_BATTLEPET_COMPANION_ID                = OBJECT_END + 0x90,
    UNIT_FIELD_BATTLEPET_COMPANION_NAME_TIMESTAMP    = OBJECT_END + 0x91,
    UNIT_END                                         = OBJECT_END + 0x92
};

enum PlayerFields
{
    PLAYER_FIELD_DUEL_ARBITER                        = UNIT_END + 0x0,
    PLAYER_FIELD_FLAGS                               = UNIT_END + 0x2,
    PLAYER_FIELD_GUILD_RANK_ID                       = UNIT_END + 0x3,
    PLAYER_FIELD_GUILD_DELETE_DATE                   = UNIT_END + 0x4,
    PLAYER_FIELD_GUILD_LEVEL                         = UNIT_END + 0x5,
    PLAYER_FIELD_HAIR_COLOR_ID                       = UNIT_END + 0x6,
    PLAYER_FIELD_REST_STATE                          = UNIT_END + 0x7,
    PLAYER_FIELD_ARENA_FACTION                       = UNIT_END + 0x8,
    PLAYER_FIELD_DUEL_TEAM                           = UNIT_END + 0x9,
    PLAYER_FIELD_GUILD_TIMESTAMP                     = UNIT_END + 0xA,
    PLAYER_FIELD_QUESTLOG                            = UNIT_END + 0xB,
    PLAYER_FIELD_VISIBLE_ITEMS                       = UNIT_END + 0x2F9,
    PLAYER_FIELD_PLAYER_TITLE                        = UNIT_END + 0x31F,
    PLAYER_FIELD_FAKE_INEBRIATION                    = UNIT_END + 0x320,
    PLAYER_FIELD_HOME_PLAYER_REALM                   = UNIT_END + 0x321,
    PLAYER_FIELD_CURRENT_SPEC_ID                     = UNIT_END + 0x322,
    PLAYER_FIELD_TAXI_MOUNT_ANIM_KIT_ID              = UNIT_END + 0x323,
    PLAYER_FIELD_PARTY_TYPE                          = UNIT_END + 0x324,
    PLAYER_FIELD_INV_SLOTS                           = UNIT_END + 0x325,
    PLAYER_FIELD_FARSIGHT_OBJECT                     = UNIT_END + 0x3D1,
    PLAYER_FIELD_KNOWN_TITLES                        = UNIT_END + 0x3D3,
    PLAYER_FIELD_XP                                  = UNIT_END + 0x3DB,
    PLAYER_FIELD_NEXT_LEVEL_XP                       = UNIT_END + 0x3DC,
    PLAYER_FIELD_SKILL                               = UNIT_END + 0x3DD,
    PLAYER_FIELD_CHARACTER_POINTS                    = UNIT_END + 0x59D,
    PLAYER_FIELD_MAX_TALENT_TIERS                    = UNIT_END + 0x59E,
    PLAYER_FIELD_TRACK_CREATURE_MASK                 = UNIT_END + 0x59F,
    PLAYER_FIELD_TRACK_RESOURCE_MASK                 = UNIT_END + 0x5A0,
    PLAYER_FIELD_EXPERTISE                           = UNIT_END + 0x5A1,
    PLAYER_FIELD_OFFHAND_EXPERTISE                   = UNIT_END + 0x5A2,
    PLAYER_FIELD_RANGED_EXPERTISE                    = UNIT_END + 0x5A3,
    PLAYER_FIELD_BLOCK_PERCENTAGE                    = UNIT_END + 0x5A4,
    PLAYER_FIELD_DODGE_PERCENTAGE                    = UNIT_END + 0x5A5,
    PLAYER_FIELD_PARRY_PERCENTAGE                    = UNIT_END + 0x5A6,
    PLAYER_FIELD_CRIT_PERCENTAGE                     = UNIT_END + 0x5A7,
    PLAYER_FIELD_RANGED_CRIT_PERCENTAGE              = UNIT_END + 0x5A8,
    PLAYER_FIELD_OFFHAND_CRIT_PERCENTAGE             = UNIT_END + 0x5A9,
    PLAYER_FIELD_SPELL_CRIT_PERCENTAGE               = UNIT_END + 0x5AA,
    PLAYER_FIELD_SHIELD_BLOCK                        = UNIT_END + 0x5B1,
    PLAYER_FIELD_SHIELD_BLOCK_CRIT_PERCENTAGE        = UNIT_END + 0x5B2,
    PLAYER_FIELD_MASTERY                             = UNIT_END + 0x5B3,
    PLAYER_FIELD_PVP_POWER                           = UNIT_END + 0x5B4,
    PLAYER_FIELD_EXPLORED_ZONES                      = UNIT_END + 0x5B5,
    PLAYER_FIELD_REST_STATE_BONUS_POOL               = UNIT_END + 0x67D,
    PLAYER_FIELD_COINAGE                             = UNIT_END + 0x67E,
    PLAYER_FIELD_MOD_DAMAGE_DONE_POS                 = UNIT_END + 0x680,
    PLAYER_FIELD_MOD_DAMAGE_DONE_NEG                 = UNIT_END + 0x687,
    PLAYER_FIELD_MOD_DAMAGE_DONE_PERCENT             = UNIT_END + 0x68E,
    PLAYER_FIELD_MOD_HEALING_DONE_POS                = UNIT_END + 0x695,
    PLAYER_FIELD_MOD_HEALING_PERCENT                 = UNIT_END + 0x696,
    PLAYER_FIELD_MOD_HEALING_DONE_PERCENT            = UNIT_END + 0x697,
    PLAYER_FIELD_MOD_PERIODIC_HEALING_DONE_PERCENT   = UNIT_END + 0x698,
    PLAYER_FIELD_WEAPON_DMG_MULTIPLIERS              = UNIT_END + 0x699,
    PLAYER_FIELD_MOD_SPELL_POWER_PERCENT             = UNIT_END + 0x69C,
    PLAYER_FIELD_MOD_RESILIENCE_PERCENT              = UNIT_END + 0x69D,
    PLAYER_FIELD_OVERRIDE_SPELL_POWER_BY_AP_PERCENT  = UNIT_END + 0x69E,
    PLAYER_FIELD_OVERRIDE_AP_BY_SPELL_POWER_PERCENT  = UNIT_END + 0x69F,
    PLAYER_FIELD_MOD_TARGET_RESISTANCE               = UNIT_END + 0x6A0,
    PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE      = UNIT_END + 0x6A1,
    PLAYER_FIELD_LIFETIME_MAX_RANK                   = UNIT_END + 0x6A2,
    PLAYER_FIELD_SELF_RES_SPELL                      = UNIT_END + 0x6A3,
    PLAYER_FIELD_PVP_MEDALS                          = UNIT_END + 0x6A4,
    PLAYER_FIELD_BUYBACK_PRICE                       = UNIT_END + 0x6A5,
    PLAYER_FIELD_BUYBACK_TIMESTAMP                   = UNIT_END + 0x6B1,
    PLAYER_FIELD_YESTERDAY_HONORABLE_KILLS           = UNIT_END + 0x6BD,
    PLAYER_FIELD_LIFETIME_HONORABLE_KILLS            = UNIT_END + 0x6BE,
    PLAYER_FIELD_WATCHED_FACTION_INDEX               = UNIT_END + 0x6BF,
    PLAYER_FIELD_COMBAT_RATINGS                      = UNIT_END + 0x6C0,
    PLAYER_FIELD_ARENA_TEAMS                         = UNIT_END + 0x6DB,
    PLAYER_FIELD_BATTLEGROUND_RATING                 = UNIT_END + 0x6F0,
    PLAYER_FIELD_MAXLEVEL                            = UNIT_END + 0x6F1,
    PLAYER_FIELD_RUNEREGEN                           = UNIT_END + 0x6F2,
    PLAYER_FIELD_NO_REAGENT_COST_MASK                = UNIT_END + 0x6F6,
    PLAYER_FIELD_GLYPH_SLOTS                         = UNIT_END + 0x6FA,
    PLAYER_FIELD_GLYPHS                              = UNIT_END + 0x700,
    PLAYER_FIELD_GLYPH_SLOTS_ENABLED                 = UNIT_END + 0x706,
    PLAYER_FIELD_PET_SPELL_POWER                     = UNIT_END + 0x707,
    PLAYER_FIELD_RESEARCHING                         = UNIT_END + 0x708,
    PLAYER_FIELD_PROFESSION_SKILL_LINE               = UNIT_END + 0x710,
    PLAYER_FIELD_UI_HIT_MODIFIER                     = UNIT_END + 0x712,
    PLAYER_FIELD_UI_SPELL_HIT_MODIFIER               = UNIT_END + 0x713,
    PLAYER_FIELD_HOME_REALM_TIME_OFFSET              = UNIT_END + 0x714,
    PLAYER_FIELD_MOD_RANGED_HASTE                    = UNIT_END + 0x715,
    PLAYER_FIELD_MOD_PET_HASTE                       = UNIT_END + 0x716,
    PLAYER_FIELD_SUMMONED_BATTLE_PET_ID              = UNIT_END + 0x717,
    PLAYER_FIELD_AURA_VISION                         = UNIT_END + 0x718,
    PLAYER_FIELD_OVERRIDE_SPELLS_ID                  = UNIT_END + 0x719,
    PLAYER_END                                       = UNIT_END + 0x71A
};

enum GameObjectFields
{
    GAMEOBJECT_FIELD_CREATEDBY                       = OBJECT_END + 0x0,
    GAMEOBJECT_FIELD_DISPLAYID                       = OBJECT_END + 0x2,
    GAMEOBJECT_FIELD_FLAGS                           = OBJECT_END + 0x3,
    GAMEOBJECT_FIELD_PARENT_ROTATION                 = OBJECT_END + 0x4,
    GAMEOBJECT_FIELD_ANIM_PROGRESS                   = OBJECT_END + 0x8,
    GAMEOBJECT_FIELD_FACTION_TEMPLATE                = OBJECT_END + 0x9,
    GAMEOBJECT_FIELD_LEVEL                           = OBJECT_END + 0xA,
    GAMEOBJECT_FIELD_PERCENT_HEALTH                  = OBJECT_END + 0xB,
    GAMEOBJECT_END                                   = OBJECT_END + 0xC
};

enum DynamicObjectFields
{
    DYNAMICOBJECT_FIELD_CASTER                       = OBJECT_END + 0x0,
    DYNAMICOBJECT_FIELD_TYPE_AND_VISUAL_ID           = OBJECT_END + 0x2,
    DYNAMICOBJECT_FIELD_SPELLID                      = OBJECT_END + 0x3,
    DYNAMICOBJECT_FIELD_RADIUS                       = OBJECT_END + 0x4,
    DYNAMICOBJECT_FIELD_CASTTIME                     = OBJECT_END + 0x5,
    DYNAMICOBJECT_END                                = OBJECT_END + 0x6
};

enum CorpseFields
{
    CORPSE_FIELD_OWNER                               = OBJECT_END + 0x0,
    CORPSE_FIELD_PARTY_GUID                          = OBJECT_END + 0x2,
    CORPSE_FIELD_DISPLAYID                           = OBJECT_END + 0x4,
    CORPSE_FIELD_ITEMS                               = OBJECT_END + 0x5,
    CORPSE_FIELD_SKINID                              = OBJECT_END + 0x18,
    CORPSE_FIELD_FACIAL_HAIR_STYLE_ID                = OBJECT_END + 0x19,
    CORPSE_FIELD_FLAGS                               = OBJECT_END + 0x1A,
    CORPSE_FIELD_DYNAMIC_FLAGS                       = OBJECT_END + 0x1B,
    CORPSE_END                                       = OBJECT_END + 0x1C
};

enum AreaTriggerFields
{
    AREATRIGGER_FIELD_CASTER                         = OBJECT_END + 0x0,
    AREATRIGGER_FIELD_SPELLID                        = OBJECT_END + 0x2,
    AREATRIGGER_FIELD_SPELL_VISUAL_ID                = OBJECT_END + 0x3,
    AREATRIGGER_FIELD_DURATION                       = OBJECT_END + 0x4,
    AREATRIGGER_END                                  = OBJECT_END + 0x5
};

enum SceneObjectFields
{
    SCENEOBJECT_FIELD_SCRIPT_PACKAGE_ID              = OBJECT_END + 0x0,
    SCENEOBJECT_FIELD_RND_SEED_VAL                   = OBJECT_END + 0x1,
    SCENEOBJECT_FIELD_CREATEDBY                      = OBJECT_END + 0x2,
    SCENEOBJECT_END                                  = OBJECT_END + 0x4
};

enum ItemDynamicFields
{
    ITEM_DYNAMIC_FIELD_MODIFIERS                     = OBJECT_END + 0x0,
    ITEM_DYNAMIC_END                                 = OBJECT_END + 0x4
};

enum UnitDynamicFields
{
    UNIT_DYNAMIC_FIELD_PASSIVE_SPELLS                = OBJECT_END + 0x0,
    UNIT_DYNAMIC_END                                 = OBJECT_END + 0x101
};

enum PlayerDynamicFields
{
    PLAYER_DYNAMIC_FIELD_RESEARCH_SITES              = UNIT_END + 0x0,
    PLAYER_DYNAMIC_FIELD_DAILY_QUESTS_COMPLETED      = UNIT_END + 0x2,
    PLAYER_DYNAMIC_END                               = UNIT_END + 0x4
};

#define PLAYER_END_NOT_SELF PLAYER_FIELD_INV_SLOTS
#endif
