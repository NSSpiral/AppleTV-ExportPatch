/* Runtime dump - BRContextMenuControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@protocol ATVAutoDismissable;

@class BRBoxListControl, BRControl, BREvent;
@interface BRContextMenuControl : BRControl <ATVAutoDismissable>
{
    BRControl * _endPositionControl;
    BRControl * _startPositionControl;
    BRControl * _dimControl;
    BRControl * _dimPanel;
    struct CGRect _endPositionControlFrame;
    struct CGRect _startPositionControlFrame;
    struct CGRect _dimControlFrame;
    BRControl * _container;
    BRBoxListControl * _contextBox;
    BRBoxListControl * _detailContextBox;
    char showingDetailContextBox;
    int _dimOption;
    NSTimer * _autoDismissTimer;
    char _allowAutoDismiss;
    long _autoDismissIdx;
    <BRContextMenuControlDelegate> * _delegate;
}

@property (weak, nonatomic) <BRContextMenuControlDelegate> * delegate;

- (char)brEventAction:(BREvent *)arg0;
- (void)setAllowAutoDismiss:(char)arg0 withResult:(int)arg1;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)setProviders:(NSArray *)arg0;
- (NSArray *)providers;
- (void)setIsVisible:(char)arg0;
- (char)autoDismiss;
- (void)setDetailProvider:(NSObject *)arg0 initialSelection:(long)arg1;
- (void)setStartPositionControl:(BRControl *)arg0;
- (void)setEndPositionControl:(BRControl *)arg0;
- (void)setDimControl:(BRControl *)arg0;
- (void)setDimOption:(int)arg0;
- (void)_flipToContextMenu;
- (void)_flipToDetailContextMenu;
- (struct CGRect)_dimControlFrame;
- (struct CGRect)_endPositionControlFrame;
- (void)_autoDismissTimerFired:(id)arg0;
- (void)_addAnimationsForDisplayState:(char)arg0;
- (BRControl *)startPositionControl;
- (BRControl *)endPositionControl;
- (BRControl *)dimControl;
- (int)dimOption;
- (struct CGRect)_startPositionControlFrame;
- (void)_dissmissAnimationComplete;
- (void)setDelegate:(<BRContextMenuControlDelegate> *)arg0;
- (BRContextMenuControl *)init;
- (<BRContextMenuControlDelegate> *)delegate;
- (void)didMoveToSuperview;
- (char)isVisible;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)setProvider:(NSObject *)arg0;

@end
