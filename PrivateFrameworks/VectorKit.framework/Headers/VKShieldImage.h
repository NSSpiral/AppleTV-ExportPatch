/* Runtime dump - VKShieldImage
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldImage : VKImage
{
    struct CGPoint _center;
}

@property (readonly) struct CGPoint center;

- (struct CGPoint)center;
- (void).cxx_construct;
- (VKShieldImage *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 usedAsTextureAndImage:(char)arg2 centerPoint:(struct CGPoint)arg3;

@end
