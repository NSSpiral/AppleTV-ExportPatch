/* Runtime dump - CUIPSDImageLayer
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDImageLayer : CUIPSDLayer
{
    CUIImage * _image;
}

@property (readonly, nonatomic) struct CGImage * cgImageRef;

- (void)dealloc;
- (CUIPSDImageLayer *)initWithCGImageRef:(struct CGImage *)arg0;
- (struct CGImage *)cgImageRef;

@end
