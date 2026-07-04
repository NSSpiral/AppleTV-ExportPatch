/* Runtime dump - TSDBitmapRenderingQualityInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBitmapRenderingQualityInfo : NSObject
{
    int mQuality;
    float mCanvasScale;
    NSMutableDictionary * mImageMap;
}

@property (readonly, nonatomic) int quality;

- (TSDBitmapRenderingQualityInfo *)initWithQuality:(int)arg0 canvasScale:(float)arg1;
- (struct CGImage *)degradedImageRefForProvider:(NSObject *)arg0 ofSize:(struct CGSize)arg1;
- (void)cacheProvider:(NSObject *)arg0 ofSize:(struct CGSize)arg1;
- (void)dealloc;
- (int)quality;

@end
