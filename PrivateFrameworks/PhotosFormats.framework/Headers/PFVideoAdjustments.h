/* Runtime dump - PFVideoAdjustments
 * Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoAdjustments : PFAssetAdjustments
{
    float _slowMotionRate;
    struct ? _slowMotionTimeRange;
}

@property (readonly, nonatomic) float slowMotionRate;
@property (readonly, nonatomic) struct ? slowMotionTimeRange;
@property (readonly, nonatomic) struct ? slowMotionRampIn;
@property (readonly, nonatomic) struct ? slowMotionRampOut;
@property (nonatomic) float slowMotionRate;
@property (nonatomic) struct ? slowMotionTimeRange;

+ (struct ?)defaultSlowMotionTimeRangeForDuration:(id)arg0;
+ (float)defaultSlowMotionRateForNominalFrameRate:(float)arg0;
+ (PFVideoAdjustments *)defaultVideoAdjustmentsURLForVideoURL:(NSURL *)arg0;

- (NSString *)description;
- (char)hasSlowMotionAdjustments;
- (struct ?)convertToOriginalTimeFromScaledTime:(struct ?)arg0 forExport:(char)arg1;
- (struct ?)convertToScaledTimeFromOriginalTime:(struct ?)arg0 forExport:(char)arg1;
- (PFVideoAdjustments *)initWithPropertyListDictionary:(NSDictionary *)arg0;
- (PFVideoAdjustments *)initWithSlowMotionTimeRange:(struct ?)arg0 rate:(struct ?)arg1;
- (char)isRecognizedFormat;
- (struct ?)slowMotionTimeRange;
- (float)slowMotionRate;
- (char)_parseLegacySLMDictionary:(NSDictionary *)arg0 forSlowMotionTimeRange:(struct ? *)arg1 rate:(struct ?)arg2;
- (void)_updateDerivedPropertiesFromVersionedData;
- (char)_isSlowMotionFormat;
- (char)_parseVersionedDataForSlowMotionTimeRange:(struct ? *)arg0 rate:(struct ?)arg1;
- (void)setSlowMotionTimeRange:(struct ?)arg0;
- (void)setSlowMotionRate:(float)arg0;
- (NSData *)_adjustmentsObjectFromNSKeyedArchiverData:(NSData *)arg0;
- (char)_parseAppleVideoDataBlobDictionary:(NSDictionary *)arg0 forSlowMotionTimeRange:(struct ? *)arg1 rate:(struct ?)arg2;
- (NSObject *)_dictionaryFromSlowMotionTimeRange:(struct ?)arg0 rate:(struct ?)arg1;
- (char)_isValidSlowMotionTimeRange:(struct ?)arg0 rate:(struct ?)arg1;
- (struct ?)slowMotionRampIn;
- (struct ?)slowMotionRampOut;

@end
