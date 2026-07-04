/* Runtime dump - BLRetouchRedEyeLayer
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchRedEyeLayer : BLRetouchLayer
{
    CIImage * _ciSourceImage;
    NSMutableArray * _eyePoints;
    UIImage * _repairSourceImage;
    UIImage * _repairedImage;
}

@property (copy, nonatomic) NSMutableArray * eyePoints;
@property (retain, nonatomic) UIImage * repairSourceImage;
@property (retain, nonatomic) UIImage * repairedImage;

+ (BLRetouchRedEyeLayer *)addAutoRedEyeCorrection:(id)arg0 toLayerData:(NSData *)arg1 maskSize:(struct CGSize)arg2 newTimestampIncrement:(double *)arg3;
+ (int)indexOfPointNear:(struct CGPoint)arg0 inEyePoints:(id)arg1 andMaskSize:(struct CGSize)arg2;

- (void)dealloc;
- (float)amount;
- (char)hasLayerMask;
- (struct CGRect)area;
- (struct CGContext *)newContextForRect:(struct CGRect)arg0 inDestRect:(struct CGSize)arg1 andScale:(id)arg2;
- (NSData *)layerData;
- (void)setLayerData:(NSData *)arg0;
- (struct CGRect)maskFrame;
- (UIImage *)repairSourceImage;
- (void)setRepairSourceImage:(UIImage *)arg0;
- (NSMutableArray *)eyePoints;
- (void)setRepairedImage:(UIImage *)arg0;
- (UIImage *)repairedImage;
- (void)hasLayerMaskDidChange;
- (void)repairRedEyes;
- (void)setEyePoints:(NSMutableArray *)arg0;
- (int)indexOfPointNear:(struct CGPoint)arg0;
- (struct CGRect)tapAtPoint:(NSObject *)arg0 actualLocation:(SEL)arg1 foundEye:(struct CGPoint)arg2 addedEye:(struct CGPoint *)arg3;
- (void)clearRedEyes;

@end
