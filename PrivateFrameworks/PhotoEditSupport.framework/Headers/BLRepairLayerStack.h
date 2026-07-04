/* Runtime dump - BLRepairLayerStack
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRepairLayerStack : BLBaseLayerStack
{
    UIImage * _analysisImage;
    UIImage * _sourceImage;
    UIImage * _repairSourceImage;
    UIImage * _redEyeSourceImage;
    int _mode;
    struct CGSize _repairSourceSize;
    struct CGSize _redEyeSourceSize;
}

@property (retain, nonatomic) UIImage * analysisImage;
@property (retain, nonatomic) UIImage * sourceImage;
@property (retain, nonatomic) UIImage * repairSourceImage;
@property (nonatomic) struct CGSize repairSourceSize;
@property (retain, nonatomic) UIImage * redEyeSourceImage;
@property (nonatomic) struct CGSize redEyeSourceSize;
@property (nonatomic) UIImage * redEyeRepairedImage;
@property (nonatomic) int mode;

+ (BLRepairLayerStack *)layerStack;
+ (BLRepairLayerStack *)addAutoRedEyeCorrection:(id)arg0 toCurrentStrokesDataDictionary:(NSDictionary *)arg1 forSourceSize:(struct CGSize)arg2;
+ (int)maxEdgeSize;

- (void)dealloc;
- (BLRepairLayerStack *)init;
- (double)timestamp;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setSourceImage:(UIImage *)arg0;
- (UIImage *)sourceImage;
- (char)hasRedEye;
- (char)hasRepair;
- (void)setStrokesDataDictionary:(NSDictionary *)arg0;
- (struct CGImage *)newImageForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (NSDictionary *)strokesDataDictionary;
- (char)haveLayerMask;
- (char)readyToDraw;
- (void)setAnalysisImage:(UIImage *)arg0;
- (id)imagePatchListForLayerStack;
- (void)setRepairSourceSize:(struct CGSize)arg0;
- (UIImage *)repairSourceImage;
- (void)setRepairSourceImage:(UIImage *)arg0;
- (void)setRedEyeSourceSize:(struct CGSize)arg0;
- (void)setRedEyeSourceImage:(UIImage *)arg0;
- (void)setRedEyeRepairedImage:(UIImage *)arg0;
- (UIImage *)redEyeRepairedImage;
- (char)readyToDrawForMode:(int)arg0;
- (void)redEyeChanged;
- (void)repairChanged;
- (UIImage *)analysisImage;
- (struct CGSize)repairSourceSize;
- (UIImage *)redEyeSourceImage;
- (struct CGSize)redEyeSourceSize;

@end
