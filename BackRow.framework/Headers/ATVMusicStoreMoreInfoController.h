/* Runtime dump - ATVMusicStoreMoreInfoController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVCatalogApplianceController.h>

@class BREvent, BRListControl, BRMediaShelfView;
@interface ATVMusicStoreMoreInfoController : ATVCatalogApplianceController
{
    NSDictionary * _catalogItem;
    BRListControl * _list;
    char _localListContentSelected;
    BRMediaShelfView * _actionShelfControl;
    long _lastSelectedIndex;
}

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)addControls;
- (void)refreshDirtyPage;
- (void)_handleWindowMaxBoundsChanged;
- (void)updateContent:(NSObject *)arg0;
- (void)willEnterCompleteState;
- (char)shouldAllowControllerContent;
- (ATVMusicStoreMoreInfoController *)initWithCatalogItem:(NSDictionary *)arg0;
- (TSCHChartGrid *)_grid;
- (NSObject *)transitionType;
- (void)_listSelectionChanged:(NSNotification *)arg0;
- (void)_focusedActionChanged:(NSNotification *)arg0;
- (char)_selectionIsTopmostSelectable;
- (void)_loadMoreInfoItemContentFromURLString:(NSString *)arg0;
- (id)_summaryControl;
- (id)_coverArtControl;
- (NSObject *)_summaryControlForItem:(NSObject *)arg0;
- (void)_loadMoreInfoItemContentFromURL:(NSURL *)arg0;
- (void)_moreInfoItemContentFeedReceived:(id)arg0;
- (void)_loadList;
- (void)dealloc;

@end
