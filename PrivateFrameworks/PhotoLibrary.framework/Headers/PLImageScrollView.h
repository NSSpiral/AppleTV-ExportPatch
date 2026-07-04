/* Runtime dump - PLImageScrollView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImageScrollView : UIScrollView
{
    char _adjustZoomScaleAfterRotation;
}

@property (nonatomic) char adjustZoomScaleAfterRotation;

- (PLImageScrollView *)initWithFrame:(struct CGRect)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)_centerContentIfNecessary;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg0;
- (void)setAdjustZoomScaleAfterRotation:(char)arg0;
- (char)adjustZoomScaleAfterRotation;

@end
