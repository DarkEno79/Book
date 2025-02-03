modded class BookMenu extends UIScriptedMenu
{
	protected Widget w_Root;
	
    EditBoxWidget m_DispText;
	
	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("BadG_Book3/gui/layouts/day_z_book.layout");
		Class.CastTo(m_content, layoutRoot.FindAnyWidget("HtmlWidget"));
		Class.CastTo(m_author, layoutRoot.FindAnyWidget("Author")); 
		Class.CastTo(m_title, layoutRoot.FindAnyWidget("Title"));
		Class.CastTo(m_page, layoutRoot.FindAnyWidget("Page"));

		m_page.Show(false);
		
		float width;
		m_content.GetScreenSize(width, m_page_height);
		return layoutRoot;
	}

    override void OnShow()
    {
        super.OnShow();
        GetGame().GetUIManager().ShowCursor(true);
        GetGame().GetMission().GetHud().Show(false);
        PPEffects.SetBlurMenu(0.3);
    }

    override void OnHide()
    {
        super.OnHide();
        GetGame().GetUIManager().ShowCursor(false);
        GetGame().GetMission().GetHud().Show(true);
        GetGame().GetUIManager().Back();
        PPEffects.SetBlurMenu(0);
    }
}
