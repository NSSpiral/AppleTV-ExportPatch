/* Runtime dump - UIKeyboardCandidateView_Floating
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardCandidateView_Floating : UIKeyboardCandidateView <UIKeyboardCandidateViewInline>
{
    struct CGRect _collapsedRect;
    struct CGSize presentationSize;
}

@property struct CGSize presentationSize;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (float)defaultExtendedControlHeight;

- (UIKeyboardCandidateView_Floating *)initWithFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)candidatesDidChange;
- (UIKBRenderConfig *)_inheritedRenderConfig;
- (void)setCandidateViewExtended:(char)arg0;
- (NSArray *)activeCandidateList;
- (unsigned int)_numberOfColumns:(char)arg0;
- (void)setPresentationSize:(struct CGSize)arg0;
- (struct CGSize)presentationSize;

@end
