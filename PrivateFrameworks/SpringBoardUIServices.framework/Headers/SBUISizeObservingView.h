/* Runtime dump - SBUISizeObservingView
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUISizeObservingView : UIView
{
    char _delegateInterestedInSizeChanges;
    <SBUISizeObservingViewDelegate> * _delegate;
}

@property (nonatomic) <SBUISizeObservingViewDelegate> * delegate;

- (void)setDelegate:(<SBUISizeObservingViewDelegate> *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (<SBUISizeObservingViewDelegate> *)delegate;

@end
