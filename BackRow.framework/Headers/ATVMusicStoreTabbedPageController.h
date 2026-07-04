/* Runtime dump - ATVMusicStoreTabbedPageController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVCatalogApplianceController.h>

@protocol BRTabControlDelegate;

@class BRControl, BRTabControl, BRTabControlItem;
@interface ATVMusicStoreTabbedPageController : ATVCatalogApplianceController <BRTabControlDelegate>
{
    BRControl * _contentControl;
    BRTabControl * _tabControl;
    NSTimer * _activeTabSelectionChangedTimer;
    char _showingWaitContent;
    char _initialTabContentLoaded;
    char _transitionInhibited;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)tabControl:(BRTabControl *)arg0 didSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControl:(BRTabControl *)arg0 willSelectTabItem:(BRTabControlItem *)arg1;
- (void)tabControlDidChangeNumberOfTabItems:(BRTabControl *)arg0;
- (char)shouldShowWaitContent;
- (NSObject *)waitContent;
- (NSObject *)errorContent;
- (void)willEnterCompleteState;
- (char)shouldAllowTransitionOnSwap;
- (ATVMusicStoreTabbedPageController *)initWithContentControl:(BRControl *)arg0 tabControl:(BRTabControl *)arg1;
- (NSString *)_tabName;
- (id)_preferredTabSegmentInTab;
- (void)_delayedTabSelectionTimerFired:(id)arg0;
- (float)waitContentDelay;
- (NSDictionary *)_tabDictionary;
- (NSObject *)_scrollPlane;
- (void)dealloc;

@end
