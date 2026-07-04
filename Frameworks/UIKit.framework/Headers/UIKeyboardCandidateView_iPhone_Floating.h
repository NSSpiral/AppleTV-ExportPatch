/* Runtime dump - UIKeyboardCandidateView_iPhone_Floating
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_iPhone_Floating : UIKeyboardCandidateView_iPhone <UIKeyboardCandidateViewInline>
{
    struct CGRect _collapsedRect;
    char _withKeyboard;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UIKeyboardCandidateView_iPhone_Floating *)initWithFrame:(struct CGRect)arg0;
- (void)candidatesDidChange;
- (void)setCandidateViewExtended:(char)arg0;
- (NSArray *)activeCandidateList;
- (unsigned int)_numberOfColumns:(char)arg0;
- (char)_shouldShowHideKeyboard;
- (char)_shouldUseFullMetrics;
- (void)_collapse:(id)arg0;

@end
