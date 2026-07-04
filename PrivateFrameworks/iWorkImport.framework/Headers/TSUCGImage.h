/* Runtime dump - TSUCGImage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCGImage : TSUImage
{
    struct CGImage * mCGImage;
    int mOrientation;
    float mScale;
}

- (void)dealloc;
- (struct CGSize)size;
- (float)scale;
- (TSUCGImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (TSUCGImage *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 orientation:(int)arg2;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0;

@end
