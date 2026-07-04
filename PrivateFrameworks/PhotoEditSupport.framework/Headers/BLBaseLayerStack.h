/* Runtime dump - BLBaseLayerStack
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLBaseLayerStack : NSObject
{
    NSMutableArray * _layers;
    float _brushSize;
    float _brushSoftness;
    struct CGImage * _brushImageRef;
    char _shouldNotify;
    int _maskLongEdgeSize;
    struct CGSize _maskSize;
    struct CGAffineTransform _viewToMaskTransform;
    struct CGAffineTransform _inverseViewToMaskTransform;
    struct CGAffineTransform _flippedViewToMaskTransform;
    struct CGAffineTransform _inverseFlippedViewToMaskTransform;
}

@property (readonly, nonatomic) NSMutableArray * layers;
@property (nonatomic) struct CGSize maskSize;
@property (retain, nonatomic) BLPixelImageBuffer * workingImageBuffer;
@property (retain, nonatomic) UIImage * workingImage;
@property (nonatomic) float workingImageScaleFactor;
@property (nonatomic) struct CGAffineTransform viewToMaskTransform;
@property (readonly, nonatomic) struct CGAffineTransform inverseViewToMaskTransform;
@property (nonatomic) struct CGAffineTransform flippedViewToMaskTransform;
@property (readonly, nonatomic) struct CGAffineTransform inverseFlippedViewToMaskTransform;
@property (nonatomic) int maskLongEdgeSize;
@property (nonatomic) char shouldNotify;
@property (nonatomic) NSDictionary * strokesDataDictionary;

- (void)dealloc;
- (double)timestamp;
- (void)setStrokesDataDictionary:(NSDictionary *)arg0;
- (void)setWorkingImage:(UIImage *)arg0;
- (struct CGSize)maskSize;
- (void)setViewToMaskTransform:(struct CGAffineTransform)arg0;
- (void)setFlippedViewToMaskTransform:(struct CGAffineTransform)arg0;
- (struct CGImage *)newImageForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (void)setWorkingImageBuffer:(BLPixelImageBuffer *)arg0;
- (CALayer *)imageLayer;
- (void)setShouldNotify:(char)arg0;
- (struct CGImage *)brushImageRefWithSize:(float)arg0 softness:(float)arg1;
- (BLPixelImageBuffer *)workingImageBuffer;
- (UIImage *)workingImage;
- (float)workingImageScaleFactor;
- (void)setWorkingImageScaleFactor:(float)arg0;
- (NSDictionary *)strokesDataDictionary;
- (char)haveLayerMask;
- (char)readyToDraw;
- (float)maskArea;
- (void)setMaskSize:(struct CGSize)arg0;
- (struct CGAffineTransform)viewToMaskTransform;
- (struct CGAffineTransform)inverseViewToMaskTransform;
- (struct CGAffineTransform)flippedViewToMaskTransform;
- (struct CGAffineTransform)inverseFlippedViewToMaskTransform;
- (int)maskLongEdgeSize;
- (void)setMaskLongEdgeSize:(int)arg0;
- (char)shouldNotify;
- (NSMutableArray *)layers;

@end
