/* Runtime dump - MRPictureFrameRenderable
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRPictureFrameRenderable : MUPoolObject
{
    MRImage * image;
    struct CGRect rect;
    struct CGRect innerRect;
    struct CGRect outerRect;
    NSString * where;
    char ignoreBlend;
    MRPictureFrameRenderable * next;
}

@property (retain, nonatomic) MRImage * image;
@property (copy, nonatomic) NSString * where;

+ (struct ? *)poolInfo;

- (void)dealloc;
- (void)setImage:(MRImage *)arg0;
- (MRImage *)image;
- (void)purge;
- (NSString *)where;
- (void)setWhere:(NSString *)arg0;

@end
