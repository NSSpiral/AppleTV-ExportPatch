/* Runtime dump - OITSUCGImage
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUCGImage : OITSUImage
{
    struct CGImage * mCGImage;
    int mOrientation;
    float mScale;
}

- (void)dealloc;
- (struct CGSize)size;
- (float)scale;
- (OITSUCGImage *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGImage *)CGImage;
- (int)imageOrientation;
- (OITSUCGImage *)initWithCGImage:(struct CGImage *)arg0 scale:(float)arg1 orientation:(int)arg2;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg0;

@end
