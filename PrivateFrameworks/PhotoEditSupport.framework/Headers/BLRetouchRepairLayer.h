/* Runtime dump - BLRetouchRepairLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchRepairLayer : BLRetouchEffectLayer
{
    struct CGContext * _repairAnalysisImageContextRef;
    NSMutableData * _repairAnalysisImageRasterData;
    int _repairAnalysisBufferWidth;
    int _repairAnalysisBufferHeight;
    int _repairAnalysisBufferRowBytes;
    char _isNotFinalStroke;
    UIImage * _repairAnalysisImage;
    UIImage * _repairSourceImage;
    BLImagePatchList * _repairPatchList;
    int _totalStrokeArea;
    struct CGRect _brushStrokeRect;
}

@property (retain, nonatomic) UIImage * repairAnalysisImage;
@property (retain, nonatomic) UIImage * repairSourceImage;
@property (nonatomic) struct CGRect brushStrokeRect;
@property (retain, nonatomic) BLImagePatchList * repairPatchList;
@property (nonatomic) int totalStrokeArea;

- (void)dealloc;
- (BLRetouchRepairLayer *)init;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (void)setBrushStrokes:(NSMutableArray *)arg0;
- (struct CGRect)drawBrushAtLocation:(NSObject *)arg0 opacity:(SEL)arg1 erase:(struct CGPoint)arg2 magicEdges:(float)arg3 brushSize:(char)arg4 brushSoftness:(char)arg5;
- (void)strokeDidFinish;
- (char)solidBrush;
- (UIImage *)repairAnalysisImage;
- (void)setRepairAnalysisImage:(UIImage *)arg0;
- (UIImage *)repairSourceImage;
- (void)setRepairSourceImage:(UIImage *)arg0;
- (BLImagePatchList *)repairPatchList;
- (void)setBrushStrokeRect:(struct CGRect)arg0;
- (struct CGRect)brushStrokeRect;
- (void)setRepairPatchList:(BLImagePatchList *)arg0;
- (int)totalStrokeArea;
- (void)setTotalStrokeArea:(int)arg0;

@end
