/* Runtime dump - ATVRadioHistoryController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol BRTabControlDelegate;

@class ATVRadioHistoryDataSource, ATVRadioPlayer, ATVRadioWishListDataSource, BRControl, BREvent, BRListControl, BRMediaMenuView, BRMenuItem, BRTabControl, BRTabControlItem, MusicContextMenuUtility;
@interface ATVRadioHistoryController : BRViewController <BRTabControlDelegate>
{
    ATVRadioPlayer * _headlessPlayer;
    char _presentingPlayerViewController;
    ATVDataClient * _dataClient;
    BRMediaMenuView * _mediaMenuView;
    ATVRadioHistoryDataSource * _historyDataSource;
    ATVRadioWishListDataSource * _wishListDataSource;
    MusicContextMenuUtility * _menuUtility;
}

@property (weak, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) BRMediaMenuView * mediaMenuView;
@property (retain, nonatomic) ATVRadioHistoryDataSource * historyDataSource;
@property (retain, nonatomic) ATVRadioWishListDataSource * wishListDataSource;
@property (readonly, nonatomic) MusicContextMenuUtility * menuUtility;
@property (nonatomic) char presentingPlayerViewController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (void)windowMaxBoundsChanged;
- (BRMediaMenuView *)mediaMenuView;
- (float)list:(BRListControl *)arg0 heightForSectionHeader:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setMediaMenuView:(BRMediaMenuView *)arg0;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 willFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (void)setHistoryDataSource:(ATVRadioHistoryDataSource *)arg0;
- (void)setWishListDataSource:(ATVRadioWishListDataSource *)arg0;
- (void)_dataItemPropertySet:(NSSet *)arg0;
- (char)_isHistoryTabSelected;
- (char)_isWishListTabSelected;
- (void)setPresentingPlayerViewController:(char)arg0;
- (void)_changeDataSource;
- (char)isPresentingPlayerViewController;
- (void)_stopSongOrPreviewPlayback;
- (ATVRadioHistoryDataSource *)historyDataSource;
- (ATVRadioWishListDataSource *)wishListDataSource;
- (NSData *)_listSectionData;
- (char)_isClearAllSection:(unsigned int)arg0;
- (void)_clearAllItems;
- (void)_updateListFocusableState;
- (NSString *)_dataItemAtIndexPath:(NSIndexPath *)arg0;
- (MusicContextMenuUtility *)menuUtility;
- (void)handleContextMenuSelection:(id)arg0;
- (char)_isClearAllIndexPath:(NSIndexPath *)arg0;
- (NSObject *)_titleForClearAllMenuItem;
- (void)_startNewHeadlessPlayerWithItem:(NSObject *)arg0 atIndexPath:(NSIndexPath *)arg1;
- (NSString *)_currentReportingString;
- (NSObject *)_actionTypesForDataItem:(NSObject *)arg0;
- (void)_confirmClearingAllItems;
- (void)_didSelectMenuItem:(NSObject *)arg0 withDataItem:(ATVDataItem *)arg1 atIndexPath:(NSIndexPath *)arg2;
- (unsigned int)_actionTypeForButtonAtIndex:(unsigned int)arg0 withDataItem:(ATVDataItem *)arg1;
- (void)_didSelectAdditionalAlbumOfferButtonForDataItem:(NSObject *)arg0;
- (BRTabControl *)_tabControl;
- (void)_reportPageViewed;
- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (void)dealloc;
- (ATVRadioHistoryController *)init;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)setDataClient:(ATVDataClient *)arg0;

@end
