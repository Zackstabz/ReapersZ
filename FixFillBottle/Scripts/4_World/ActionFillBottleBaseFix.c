modded class ActionFillBottleBase
{
	override int GetLiquidType( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (target.GetObject() && target.GetObject().IsFuelStation())
		{
			if (Liquid.CanFillContainer(item, LIQUID_GASOLINE))
				return LIQUID_GASOLINE;
		}
		else if ((!target.GetObject() || target.GetObject().IsWell() || target.GetObject().GetWaterSourceObjectType() == EWaterSourceObjectType.WELL || target.GetObject().GetWaterSourceObjectType() == EWaterSourceObjectType.THROUGH) && Liquid.CanFillContainer(item, LIQUID_WATER))
		{
			return LIQUID_WATER;
		}

		return -1;
	}
};
