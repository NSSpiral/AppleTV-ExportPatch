/* Runtime dump - CIBurstThumbnailCluster
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstThumbnailCluster : NSObject
{
    NSMutableArray * burstImages;
    id completionBlock;
    NSMutableDictionary * imageProps;
    CIBurstYUVImage * image;
    struct __IOSurface * _fullsizeJpegData;
}

@property NSMutableArray * burstImages;
@property NSMutableDictionary * imageProps;
@property CIBurstYUVImage * image;
@property struct __IOSurface * fullsizeJpegData;
@property id completionBlock;

- (void)releaseImage;
- (NSMutableArray *)burstImages;
- (NSMutableDictionary *)imageProps;
- (CIBurstThumbnailCluster *)initWithImageData:(CIBurstYUVImage *)arg0 dict:(id)arg1 identifier:(NSString *)arg2 imageProps:(NSMutableDictionary *)arg3 completionBlock:(id /* block */)arg4;
- (void)addItemsFromCluster:(id)arg0;
- (struct __IOSurface *)fullsizeJpegData;
- (void)setFullsizeJpegData:(struct __IOSurface *)arg0;
- (void)setImageProps:(NSMutableDictionary *)arg0;
- (float)computeMergeCost:(id)arg0 :(int *)arg1 :(int)arg2;
- (void)setBurstImages:(NSMutableArray *)arg0;
- (void)dealloc;
- (void)setImage:(CIBurstYUVImage *)arg0;
- (CIBurstThumbnailCluster *)init;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;
- (CIBurstYUVImage *)image;

@end
