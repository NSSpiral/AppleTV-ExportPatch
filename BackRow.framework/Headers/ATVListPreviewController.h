/* Runtime dump - ATVListPreviewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedDocument, ATVFeedElement, ATVFeedInitialSelectionElement, ATVFeedRootElement, ATVURLDocument, BRControl, BRListControl, BRMediaMenuView, BRMenuItem;
@interface ATVListPreviewController : ATVFeedController
{
    BOOL _forcePreviewRefresh;
    ATVURLDocument * _documentForPreviewChange;
    NSString * _previousLoadPreviewURL;
    NSMutableDictionary * _headerCache;
    char _shouldUseItmsPurchasePageBlueDots;
    char _itmsPurchasePageBlueDots_doAnyItemsHaveBlueDots;
    char _dimUnselectedOnFocusOut;
    char _isListDimmed;
    BRMediaMenuView * _mediaMenuView;
    BRControl * _sharedPreviewControl;
    NSIndexPath * _lastPreviewIndexPath;
    ATVFeedDocument * _lastPreviewFeedDocument;
    NSIndexPath * _selectedRowToHighlight;
}

@property (readonly) BRMediaMenuView * mediaMenuView;
@property (retain) BRControl * sharedPreviewControl;
@property (nonatomic) char dimUnselectedOnFocusOut;
@property (retain, nonatomic) NSIndexPath * lastPreviewIndexPath;
@property (retain, nonatomic) ATVFeedDocument * lastPreviewFeedDocument;
@property (retain, nonatomic) NSIndexPath * selectedRowToHighlight;
@property (nonatomic) char isListDimmed;

- (void)wasPushed;
- (void)controlWasDeactivated;
- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (NSString *)list:(BRListControl *)arg0 itemIDForIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)list:(BRListControl *)arg0 indexPathForItemID:(NSObject *)arg1;
- (void)listWasActivated:(id)arg0;
- (void)list:(BRListControl *)arg0 didSelectItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didPlayItemAtIndexPath:(NSIndexPath *)arg1;
- (void)controlWasActivated;
- (BRMediaMenuView *)mediaMenuView;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)list:(BRListControl *)arg0 didFocusItemAtIndexPath:(NSIndexPath *)arg1;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (ATVFeedInitialSelectionElement *)_initialSelection;
- (ATVListPreviewController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (void)_cancelAllDocumentRequests;
- (void)_setLastPreviewIndexPath:(NSIndexPath *)arg0;
- (void)_cancelPreviousLoadPreviewPerformSelector;
- (void)_cancelDocumentRequest:(id *)arg0;
- (void)_updateListHeader;
- (char)_canHandleUpdateWithPropertyList:(NSDictionary *)arg0 loadType:(int)arg1;
- (char)_canHandleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (NSObject *)_createMediaMenuView;
- (NSObject *)_createView;
- (char)dimUnselectedOnFocusOut;
- (void)_manageDimming:(id)arg0;
- (void)setIsListDimmed:(char)arg0;
- (NSArray *)_blueDotParamsForMenuItems;
- (void)_blueDotReloadNotification:(NSNotification *)arg0;
- (void)_updateDoAnyItemsHaveBlueDotsFlag;
- (void)_showInfoChanged:(NSNotification *)arg0;
- (void)_reloadMediaMenuViewList;
- (void)_updateInternalWithLoadType:(int)arg0 withPageID:(unsigned long long)arg1;
- (void)setSelectedRowToHighlight:(NSIndexPath *)arg0;
- (NSString *)_elementAtIndexPath:(NSIndexPath *)arg0;
- (char)isListDimmed;
- (NSIndexPath *)selectedRowToHighlight;
- (void)_updatePreviewForIndexPath:(NSIndexPath *)arg0;
- (void)_onItemFocused:(id)arg0 indexPath:(NSIndexPath *)arg1;
- (void)setSharedPreviewControl:(BRControl *)arg0;
- (void)_previewDocumentReady:(id)arg0;
- (void)setLastPreviewFeedDocument:(ATVFeedDocument *)arg0;
- (void)_updatePreviewWithElement:(NSObject *)arg0;
- (void)_updatePreviewWithPropertyList:(NSDictionary *)arg0;
- (void)setLastPreviewIndexPath:(NSIndexPath *)arg0;
- (void)_loadPreviewForURL:(NSURL *)arg0;
- (void)_handleUpdateWithPropertyList:(NSDictionary *)arg0 loadType:(int)arg1;
- (void)_handleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (BRControl *)sharedPreviewControl;
- (NSIndexPath *)lastPreviewIndexPath;
- (ATVFeedDocument *)lastPreviewFeedDocument;
- (void)setDimUnselectedOnFocusOut:(char)arg0;
- (NSObject *)_blueDotParamsForSelectedItem;
- (void)_markAsWatched;
- (void)_markAsUnwatched;
- (void)_getBlueDotCount:(long *)arg0 nonBlueDotCount:(long *)arg1;
- (void)_markAllTVEpisodesAsWatched;
- (void)_markAllTVEpisodesAsUnwatched;
- (void)_markAsWatched:(char)arg0 blueDotParams:(id)arg1;
- (NSString *)_itemAtIndexPath:(NSIndexPath *)arg0;
- (void)dealloc;
- (ATVListPreviewController *)initWithDictionary:(NSDictionary *)arg0;

@end
