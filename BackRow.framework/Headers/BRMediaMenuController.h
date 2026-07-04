/* Runtime dump - BRMediaMenuController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuController.h>

@class BRControl, BREvent, BRFocusableImageControl, BRTextControl, BRWaitSpinnerControl;
@interface BRMediaMenuController : BRMenuController
{
    BRControl * _previewControl;
    BRControl * _previewContainer;
    NSString * _previewControlItemHash;
    BRFocusableImageControl * _actionControl;
    BRWaitSpinnerControl * _spinner;
    float _controlDelay;
    NSTimer * _controlDelayTimer;
    BRTextControl * _noContentMessageControl;
}

- (char)brEventAction:(BREvent *)arg0;
- (NSArray *)accessibilityScreenContent;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (void)setShowSpinner:(char)arg0;
- (void)setNoContentMessage:(NSString *)arg0;
- (char)showSpinner;
- (NSObject *)previewControlForItem:(long)arg0;
- (void)updatePreviewController;
- (void)resetPreviewController;
- (void)_scrollWillStart:(id)arg0;
- (void)_scrollSelectionFinalized:(id)arg0;
- (void)_playstateChanged;
- (void)_cleanupControlDelayTimer;
- (void)clearPreviewController;
- (char)allowUnplayedMark;
- (NSObject *)actionSelectionHandlerForItemAtIndex:(long)arg0;
- (NSObject *)actionItemAtIndex:(long)arg0;
- (NSString *)noContentMessage;
- (void)refreshControllerForModelUpdate;
- (void)refreshControllerForModelUpdateToObject:(NSObject *)arg0;
- (void)_updateActionControl;
- (void)_updatePreview;
- (void)_setDislaysActionControl:(char)arg0;
- (void)_updateControlsWithDelay;
- (void)_controlDelayTimerHandler:(id /* block */)arg0;
- (void)dealloc;
- (BRMediaMenuController *)init;
- (void)_updateControls;

@end
