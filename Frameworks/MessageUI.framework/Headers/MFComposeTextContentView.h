/* Runtime dump - MFComposeTextContentView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeTextContentView : UITextContentView
{
    int _preventScrollSelectionToVisible;
    char _keepScrollPosition;
    struct CGPoint _scrollPosition;
}

- (void)beginPreventingScrollSelectionToVisible;
- (void)endPreventingScrollSelectionToVisible;
- (void)increaseQuoteLevel;
- (void)decreaseQuoteLevel;
- (void)showQuoteLevelOptions;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (NSObject *)targetForAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (void)scrollSelectionToVisible:(char)arg0;
- (void)ensureSelection;
- (NSArray *)supportedPasteboardTypesForCurrentSelection;
- (NSObject *)enclosingScrollView;

@end
