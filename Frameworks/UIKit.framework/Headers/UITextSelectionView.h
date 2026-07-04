/* Runtime dump - UITextSelectionView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextSelectionView : UIView
{
    UITextInteractionAssistant * m_interactionAssistant;
    UITextSelection * m_selection;
    NSTimer * m_caretTimer;
    UIView * m_caretView;
    UITextRangeView * m_rangeView;
    char m_caretBlinks;
    char m_caretShowingNow;
    char m_visible;
    char m_activated;
    char m_wasShowingCommands;
    char m_delayShowingCommands;
    char m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray * m_replacements;
    char m_deferSelectionCommands;
    struct __CFRunLoopObserver * m_observer;
}

@property (readonly, nonatomic) UITextInteractionAssistant * interactionAssistant;
@property (readonly, nonatomic) UITextSelection * selection;
@property (nonatomic) char caretBlinks;
@property (nonatomic) char visible;
@property (readonly, nonatomic) char selectionCommandsShowing;
@property (retain, nonatomic) NSArray * replacements;
@property (readonly, nonatomic) UIView * caretView;
@property (readonly, nonatomic) UITextRangeView * rangeView;

- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)removeFromSuperview;
- (void)invalidate;
- (UITextInteractionAssistant *)interactionAssistant;
- (void)deferredUpdateSelectionRects;
- (id)dynamicCaret;
- (UITextSelection *)selection;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg0;
- (void)updateSelectionRects;
- (void)setVisible:(char)arg0;
- (void)deactivate;
- (void)selectionChanged;
- (UIScrollView *)scrollView;
- (void)detach;
- (void)setCaretBlinks:(char)arg0;
- (void)activate;
- (NSArray *)dynamicCaretList;
- (NSArray *)replacements;
- (char)caretBlinks;
- (char)visible;
- (void)updateDocumentHasContent:(char)arg0;
- (void)startCaretBlinkIfNeeded;
- (void)layoutChangedByScrolling:(char)arg0;
- (UITextSelectionView *)initWithInteractionAssistant:(UITextInteractionAssistant *)arg0;
- (void)installIfNecessary;
- (void)configureForHighlightMode;
- (void)hideSelectionCommands;
- (void)showSelectionCommands;
- (void)configureForSelectionMode;
- (void)cancelDelayedCommandRequests;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg0;
- (UITextRangeView *)rangeView;
- (void)updateSelectionDots;
- (void)showSelectionCommandsAfterDelay:(double)arg0;
- (char)selectionCommandsShowing;
- (void)showReplacementsWithGenerator:(id)arg0 forDictation:(char)arg1 afterDelay:(double)arg2;
- (struct CGRect)selectionBoundingBox;
- (void)textSelectionViewActivated:(id)arg0;
- (void)selectionWillScroll:(id)arg0;
- (void)selectionDidScroll:(id)arg0;
- (void)scaleWillChange:(NSDictionary *)arg0;
- (void)scaleDidChange:(NSDictionary *)arg0;
- (void)inputViewWillAnimate;
- (void)inputViewDidAnimate;
- (void)willRotate:(SKRotate *)arg0;
- (void)didRotate:(SKRotate *)arg0;
- (void)windowDidResignOrBecomeKey;
- (void)inputViewWillMove:(id)arg0;
- (void)inputViewDidMove;
- (void)viewAnimate:(id)arg0;
- (void)inputModeDidChange:(NSDictionary *)arg0;
- (void)appearOrFadeIfNecessary;
- (void)deferredUpdateSelectionCommands;
- (char)affectedByScrollerNotification:(NSNotification *)arg0;
- (void)showCalloutBarAfterDelay:(double)arg0;
- (void)hideSelectionCommandsAfterDelay:(double)arg0;
- (void)inputViewWillChange;
- (void)inputViewDidChange;
- (char)shouldBeVisible;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (void)clearRange;
- (UIView *)caretView;
- (void)showCaret:(int)arg0;
- (void)touchCaretBlinkTimer;
- (void)updateSelectionRectsIfNeeded;
- (void)showCommandsWithReplacements:(NSArray *)arg0;
- (struct CGRect)clippedTargetRect:(NSObject *)arg0;
- (char)updateCalloutBarRects:(id)arg0 effectsWindow:(NSObject *)arg1;
- (void)setReplacements:(NSArray *)arg0;
- (void)calculateAndShowReplacements:(id)arg0;
- (void)hideCaret:(int)arg0;
- (void)caretBlinkTimerFired:(id)arg0;
- (void)updateSelectionCommands;
- (void)prepareForMagnification;
- (void)doneMagnifying;
- (void)configureForReplacementMode;

@end
