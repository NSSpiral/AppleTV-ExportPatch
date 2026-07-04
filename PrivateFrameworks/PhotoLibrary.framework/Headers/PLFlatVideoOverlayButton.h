/* Runtime dump - PLFlatVideoOverlayButton
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLFlatVideoOverlayButton : UIButton <PLVideoOverlayButton>
{
    int _style;
    id _target;
    SEL _action;
}

- (int)style;
- (PLFlatVideoOverlayButton *)initWithStyle:(int)arg0;
- (void)setTarget:(NSObject *)arg0 action:(SEL)arg1;
- (UIImage *)_normalButtonImage;
- (UIImage *)_highlightedButtonImage;
- (void)_handleTap:(id)arg0;
- (id)_createOverlayImageWithBackgroundWhite:(float)arg0 backgroundAlpha:(float)arg1 glyphAlpha:(float)arg2;

@end
