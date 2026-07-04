/* Runtime dump - TSDBitmapRenderingQualityImageMapValue
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBitmapRenderingQualityImageMapValue : NSObject
{
    struct CGSize mMaxSize;
    struct CGImage * mDegradedImageRef;
}

- (void)addSize:(struct CGSize)arg0;
- (struct CGImage *)degradedImageRefForForProvider:(NSObject *)arg0 quality:(int)arg1 canvasScale:(float)arg2;
- (void)dealloc;

@end
