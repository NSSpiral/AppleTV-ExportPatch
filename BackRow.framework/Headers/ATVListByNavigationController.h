/* Runtime dump - ATVListByNavigationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVListPreviewController.h>

@protocol BRTabControlDelegate;
@protocol BRTumblerDataSource;
@protocol BRTumblerDelegate;

@class ATVFeedElement, ATVFeedRootElement, ATVTabWithTitleListHeaderControl, ATVTumblerWithTextListHeaderControl, ATVURLDocument, BRControl, BRTabControl, BRTabControlItem, BRTumblerControl;
@interface ATVListByNavigationController : ATVListPreviewController <BRTumblerDelegate, BRTumblerDataSource, BRTabControlDelegate>
{
    ATVTumblerWithTextListHeaderControl * _tumblerListHeader;
    ATVTabWithTitleListHeaderControl * _tabListHeader;
    ATVURLDocument * _documentForTumblerChange;
    NSString * _onNavigate;
    struct OpaqueJSValue * _lastEvent;
    unsigned int _currentTumblerItemIndex;
}

@property (nonatomic) unsigned int currentTumblerItemIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (void)_showSpinner:(char)arg0;
- (ATVListByNavigationController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (void)_initWithStartingIndex:(unsigned int)arg0;
- (void)_cancelAllDocumentRequests;
- (void)_didMove;
- (void)_didNavigateToIndex:(unsigned int)arg0;
- (NSDictionary *)_tumblerCustomTextAttributes;
- (NSDictionary *)_tumblerTextAttributes;
- (void)tumblerControlDidTumble:(BRTumblerControl *)arg0;
- (unsigned int)itemCountForTumbler:(BRTumblerControl *)arg0;
- (BRControl *)tumblerControl:(BRTumblerControl *)arg0 itemAtIndex:(unsigned int)arg1;
- (void)setCurrentTumblerItemIndex:(unsigned int)arg0;
- (unsigned int)currentTumblerItemIndex;
- (void)_documentReady:(id)arg0;
- (void)_showList;
- (void)_updateListHeader;
- (void)_callJavaScriptEventOnCancel;
- (void)_callJavaScriptOnNavigateHandler:(id /* block */)arg0;
- (void)_loadListForURL:(NSURL *)arg0;
- (char)_canHandleUpdateWithPropertyList:(NSDictionary *)arg0 loadType:(int)arg1;
- (char)_canHandleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (void)dealloc;
- (ATVListByNavigationController *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
