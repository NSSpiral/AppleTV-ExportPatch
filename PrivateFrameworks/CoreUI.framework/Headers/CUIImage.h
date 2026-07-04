/* Runtime dump - CUIImage
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIImage : NSObject <NSCopying>
{
    struct CGImage * _cgImage;
}

@property (readonly, nonatomic) struct CGImage * image;
@property (readonly, nonatomic) struct CGSize size;

+ (UIImage *)imageWithCGImage:(struct CGImage *)arg0;

- (void)dealloc;
- (struct CGSize)size;
- (CUIImage *)copyWithZone:(struct _NSZone *)arg0;
- (CUIImage *)initWithCGImage:(struct CGImage *)arg0;
- (struct CGImage *)image;
- (struct CGImage *)cgImage;

@end
