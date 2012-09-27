/*
 * Copyright (C) 2010-2012 Strawberry-Pr0jcts <http://strawberry-pr0jcts.com/>
 * Copyright (C) 2005-2011 MaNGOS <http://getmangos.com/>
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

#ifndef STRAWBERRY_DBCSFRM_H
#define STRAWBERRY_DBCSFRM_H

const char Achievementfmt[]="niiissiiiiisiix";
const char AchievementCriteriafmt[]="niiiiiiiixsiiiiixxxxxxx";
const char AreaTableEntryfmt[]="iiinixxxxxxxisixxxxxxxxxxxxx";
const char AreaGroupEntryfmt[]="niiiiiii";
const char AreaTriggerEntryfmt[]="nifffxxxfffffxxi";
const char ArmorLocationfmt[]="nfffff";
const char AuctionHouseEntryfmt[]="niiix";
const char BankBagSlotPricesEntryfmt[]="ni";
const char BarberShopStyleEntryfmt[]="nixxxiii";
const char BattlemasterListEntryfmt[]="niiiiiiiiiiixsiiiiiiii";
const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char CharTitlesEntryfmt[]="nxsxix";
const char ChatChannelsEntryfmt[]="iixsx";
                                                            // ChatChannelsEntryfmt, index not used (more compact store)
const char ChrClassesEntryfmt[]="nixsxxxixiixxxxxxx";
const char ChrRacesEntryfmt[]="nxixiixixxxxixsxxxxxixxxxxxxxxxxxxxx";
const char ChrClassesXPowerTypesfmt[]="nii";
const char CinematicSequencesEntryfmt[]="nxxxxxxxxx";
const char CreatureDisplayInfofmt[]="nxxifxxxxxxxxxxxxxx";
const char CreatureDisplayInfoExtrafmt[]="nixxxxxxxxxxxxxxxxxxx";
const char CreatureFamilyfmt[]="nfifiiiiixsx";
const char CreatureSpellDatafmt[]="niiiixxxx";
const char DungeonEncounterfmt[]="niiiisxx";
const char CreatureTypefmt[]="nxx";
const char DurabilityCostsfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char DurabilityQualityfmt[]="nf";
const char EmotesEntryfmt[]="nxxiiixx";
const char EmotesTextEntryfmt[]="nxixxxxxxxxxxxxxxxx";
const char FactionEntryfmt[]="niiiiiiiiiiiiiiiiiiffixsxx";
const char FactionTemplateEntryfmt[]="niiiiiiiiiiiii";
const char GameObjectDisplayInfofmt[]="nxxxxxxxxxxxffffffxxx";
const char GemPropertiesEntryfmt[]="nixxix";
const char GlyphPropertiesfmt[]="niii";
const char GlyphSlotfmt[]="nii";
const char GtBarberShopCostBasefmt[]="xf";
const char GtCombatRatingsfmt[]="xf";
const char GtChanceToMeleeCritBasefmt[]="xf";
const char GtChanceToMeleeCritfmt[]="xf";
const char GtChanceToSpellCritBasefmt[]="xf";
const char GtOCTClassCombatRatingScalarfmt[]="df";
const char GtChanceToSpellCritfmt[]="xf";
const char GtOCTRegenHPfmt[]="xf";
//const char GtOCTRegenMPfmt[]="f";
const char GtRegenHPPerSptfmt[]="xf";
const char GtRegenMPPerSptfmt[]="xf";
const char Holidaysfmt[]="nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char ItemClassfmt[]="nxxs";
const char ItemArmorQualityfmt[]="nfffffffi";
const char ItemArmorShieldfmt[]="nifffffff";
const char ItemArmorTotalfmt[]="niffff";
const char ItemBagFamilyfmt[]="nx";
//const char ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
//const char ItemCondExtCostsEntryfmt[]="xiii";
const char ItemDamagefmt[]="nfffffffi";
const char ItemLimitCategoryEntryfmt[]="nxii";
const char ItemRandomPropertiesfmt[]="nxiiiiis";
const char ItemRandomSuffixfmt[]="nsxiiiiiiiiii";
const char ItemSetEntryfmt[]="dsxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
const char LockEntryfmt[]="niiiiiiiiiiiiiiiiiiiiiiiixxxxxxxx";
const char MailTemplateEntryfmt[]="nxs";
const char MapEntryfmt[]="nsiixsixxixiffxixxi";
const char MapDifficultyEntryfmt[]="niisii";
const char MovieEntryfmt[]="nxxxx";
const char OverrideSpellDatafmt[]="niiiiiiiiiixx";
const char QuestFactionRewardfmt[]="niiiiiiiiii";
const char QuestSortEntryfmt[]="nx";
const char QuestXPLevelfmt[]="niiiiiiiiii";
const char Phasefmt[]="nii";
const char PvPDifficultyfmt[]="diiiii";
const char RandomPropertiesPointsfmt[]="niiiiiiiiiiiiiii";
const char ScalingStatDistributionfmt[]="niiiiiiiiiiiiiiiiiiiixi";
const char ScalingStatValuesfmt[]="iniiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxx";
const char SkillLinefmt[]="nisxixix";
const char SkillLineAbilityfmt[]="niiiiiiiiixxx";
const char SkillRaceClassInfofmt[]="diiiiixx";
const char SoundEntriesfmt[]="nissssssssssssssssssssssxxxxxxxxxxxx";
const char SpellCastTimefmt[]="nixx";
const char SpellDurationfmt[]="niii";
const char SpellDifficultyfmt[]="niiii";
const char SpellEntryfmt[]="nssxxixxxiiiiiiiiiiiiiiii";
const char SpellAuraOptionsEntryfmt[]="nixiiii";
const char SpellAuraRestrictionsEntryfmt[]="nixiiiiiiii";
const char SpellCastingRequirementsEntryfmt[]="nixxixi";
const char SpellCategoriesEntryfmt[]="nixiiiiiix";
const char SpellClassOptionsEntryfmt[]="nxiiiix";
const char SpellCooldownsEntryfmt[]="nixiii";
const char SpellEffectEntryfmt[]="nxifiiixfiiiiiifixfiiixixiiiix";
const char SpellEquippedItemsEntryfmt[]="nixiii";
const char SpellInterruptsEntryfmt[]="nixixixi";
const char SpellLevelsEntryfmt[]="nixiii";
const char SpellMiscEntryfmt[]="nixiiiiiiiiiixiiifiiiiix";
const char SpellPowerEntryfmt[]="xnxiiiiixxxxx";
const char SpellReagentsEntryfmt[]="nixiiiiiiiiiiiiiiii";
const char SpellScalingEntryfmt[]="niiiifixx";
const char SpellShapeshiftEntryfmt[]="xixixx";
const char SpellTargetRestrictionsEntryfmt[]="nixfxiiii";
const char SpellTotemsEntryfmt[]="xiiii";
const char SpellFocusObjectfmt[]="nx";
const char SpellItemEnchantmentfmt[]="nxiiiiiiiiisiiiixxxxxxxxx";
const char SpellItemEnchantmentConditionfmt[]="nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX";
const char SpellRadiusfmt[]="nfxxx";
const char SpellRangefmt[]="nffffxxx";
const char SpellRuneCostfmt[]="niiixi";
const char SpellShapeshiftFormfmt[]="nxxiixiiixxiiiiiiiixx";
//const char StableSlotPricesfmt[] = "ni"; // removed
const char SummonPropertiesfmt[] = "niiiii";
const char TalentEntryfmt[]="niiiisixiis";
const char TalentTabEntryfmt[]="nxxiiixxxxx";
const char TaxiNodesEntryfmt[]="nifffsiixxx";
const char TaxiPathEntryfmt[]="niii";
const char TaxiPathNodeEntryfmt[]="diiifffiiii";
const char TotemCategoryEntryfmt[]="nxii";
const char VehicleEntryfmt[]="nixffffiiiiiiiifffffffffffffffssssfifiixx";
const char VehicleSeatEntryfmt[]="niiffffffffffiiiiiifffffffiiifffiiiiiiiffiiiiixxxxxxxxxxxxxxxxxxxx";
const char WMOAreaTableEntryfmt[]="niiixxxxxiixxxx";
const char WorldMapAreaEntryfmt[]="xinxffffixxxxx";
const char WorldMapOverlayEntryfmt[]="nxiiiixxxxxxxxxx";
const char WorldSafeLocsEntryfmt[]="nifffxx";
const char WorldPvPAreaEnrtyfmt[]="niiiiii";

#endif
