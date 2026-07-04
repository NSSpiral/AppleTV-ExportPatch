/* Runtime dump - CPLAdjustmentFingerprinting
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAdjustmentFingerprinting : NSObject
{
    char _hasRedEye;
    char _hasAutoEnhance;
    char _hasSimpleLightenDarken;
    char _hasOtherAdjustments;
    CPLAdjustments * _otherAdjustments;
    CPLResource * _baseImage;
    CPLResource * _largeAdjustmentData;
    CPLResource * _secondaryAdjustmentData;
}

@property (nonatomic) char hasRedEye;
@property (nonatomic) char hasAutoEnhance;
@property (nonatomic) char hasSimpleLightenDarken;
@property (nonatomic) char hasOtherAdjustments;
@property (retain, nonatomic) CPLAdjustments * otherAdjustments;
@property (retain, nonatomic) CPLResource * baseImage;
@property (retain, nonatomic) CPLResource * largeAdjustmentData;
@property (retain, nonatomic) CPLResource * secondaryAdjustmentData;

- (void).cxx_destruct;
- (NSString *)similarToOriginalAdjustmentsFingerprint;
- (char)hasRedEye;
- (char)hasAutoEnhance;
- (char)hasSimpleLightenDarken;
- (CPLAdjustments *)otherAdjustments;
- (char)hasOtherAdjustments;
- (CPLResource *)baseImage;
- (CPLResource *)largeAdjustmentData;
- (CPLResource *)secondaryAdjustmentData;
- (void)setHasRedEye:(char)arg0;
- (void)setHasAutoEnhance:(char)arg0;
- (void)setHasSimpleLightenDarken:(char)arg0;
- (void)setLargeAdjustmentData:(CPLResource *)arg0;
- (void)setSecondaryAdjustmentData:(CPLResource *)arg0;
- (void)setOtherAdjustments:(CPLAdjustments *)arg0;
- (void)setHasOtherAdjustments:(char)arg0;
- (void)setBaseImage:(CPLResource *)arg0;
- (NSString *)otherAdjustmentsFingerprint;

@end
