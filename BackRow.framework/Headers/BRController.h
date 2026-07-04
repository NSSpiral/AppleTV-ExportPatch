/* Runtime dump - BRController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol BRContextMenuControlDelegate;

@class BRContextMenuControl, BRControl, BRControllerStack, BREvent;
@interface BRController : BRControl <BRContextMenuControlDelegate>
{
    NSMutableSet * _labels;
    BRControllerStack * _stack;
    char _depthLimited;
    BRContextMenuControl * _contextMenu;
    char _showsHeader;
    NSString * _title;
    id _wasPushedBlock;
    id _wasPoppedBlock;
    id _wasBuriedBlock;
    id _wasExhumedBlock;
    int _maxDepthLimit;
    NSString * _depthLimitLabel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) id wasPushedBlock;
@property (copy, nonatomic) id wasPoppedBlock;
@property (copy, nonatomic) id wasBuriedBlock;
@property (copy, nonatomic) id wasExhumedBlock;
@property (copy, nonatomic) NSString * title;
@property (nonatomic) char showsHeader;
@property (nonatomic) int maxDepthLimit;
@property (retain, nonatomic) NSString * depthLimitLabel;

+ (BRController *)controllerWithContentControl:(BRControl *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)setWasPoppedBlock:(id /* block */)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (void)controlWasDeactivated;
- (void)setWasPushedBlock:(id /* block */)arg0;
- (void)setShowsHeader:(char)arg0;
- (void)dismissContextMenu;
- (NSArray *)providersForContextMenu;
- (NSArray *)cancelProviderForContextMenu;
- (void)wasBuried;
- (void)wasExhumed;
- (char)isLabelled:(id)arg0;
- (char)isNetworkDependent;
- (void)setDepthLimited:(char)arg0;
- (char)showsHeader;
- (char)topOfStack;
- (void)_handleWindowMaxBoundsChanged;
- (char)recreateOnReselect;
- (char)depthLimited;
- (void)setWasBuriedBlock:(id /* block */)arg0;
- (void)setWasExhumedBlock:(id /* block */)arg0;
- (char)canBeRemovedFromStack;
- (NSObject *)transitionType;
- (id /* block */)wasPoppedBlock;
- (void)contextMenuDidDismiss:(BRContextMenuControl *)arg0;
- (void)showDetailContextMenuWithProvider:(NSObject *)arg0 initialSelection:(long)arg1;
- (void)setMaxDepthLimit:(int)arg0;
- (void)setDepthLimitLabel:(NSString *)arg0;
- (BRControl *)controlForContextMenuStart;
- (BRControl *)controlForContextMenuPositioning;
- (char)isValidAfterDataUpdate;
- (BRControl *)controlToDim;
- (char)contextMenuIsVisible;
- (char)_showContextMenu;
- (void)removeLabel:(NSString *)arg0;
- (long)errorNumberForNoContent;
- (char)suppressAutoDismissableDialogs;
- (id /* block */)wasPushedBlock;
- (id /* block */)wasBuriedBlock;
- (id /* block */)wasExhumedBlock;
- (int)maxDepthLimit;
- (NSString *)depthLimitLabel;
- (void)_contextMenuCancelItemSelected:(id)arg0;
- (void)didDismissContextMenu;
- (int)contextMenuDimOption;
- (void)setStack:(BRControllerStack *)arg0;
- (BRControllerStack *)stack;
- (void)dealloc;
- (BRController *)init;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (NSString *)title;
- (void)addLabel:(NSString *)arg0;

@end
