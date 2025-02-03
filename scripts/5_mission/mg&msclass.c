modded class MissionGameplay extends MissionBase
{
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate( timeslice );

		// book reading
		PlayerBase pBase = PlayerBase.Cast(GetGame().GetPlayer());
		if (pBase && pBase.IsReadingBook())
		{
			pBase.ToggleBookReading();
			InventoryItem book = pBase.GetItemInHands();
			BookMenu bookMenu = BookMenu.Cast( GetUIManager().EnterScriptedMenu(MENU_BOOK, NULL) );
			if (bookMenu)
			{
				PlayerControlDisable(INPUT_EXCLUDE_ALL);
				bookMenu.ReadBook(book);
			}
		}
	}	
};