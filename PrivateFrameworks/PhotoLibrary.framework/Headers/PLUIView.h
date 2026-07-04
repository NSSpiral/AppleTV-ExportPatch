/* Runtime dump - PLUIView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIView : UIView
{
    char _disableViewInPopoverRule;
}

@property (nonatomic) char disableViewInPopoverRule;

- (void)didMoveToWindow;
- (char)disableViewInPopoverRule;
- (void)setDisableViewInPopoverRule:(char)arg0;

@end
