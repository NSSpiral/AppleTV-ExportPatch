/* Runtime dump - PLPhotoEditMutableModel
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditMutableModel : PLPhotoEditModel
{
    int _transactionDepth;
    _UIDynamicValueAnimation * _currentCopyAnimation;
}

@property (copy, nonatomic) NSString * effectFilterName;
@property (nonatomic) int effectFilterVersion;
@property (nonatomic) char smartToneEnabled;
@property (nonatomic) float autoSmartToneLevel;
@property (copy, nonatomic) NSString * autoSmartToneIdentifier;
@property (nonatomic) float smartToneLevel;
@property (nonatomic) float brightnessLevelOffset;
@property (nonatomic) float contrastLevelOffset;
@property (nonatomic) float exposureLevelOffset;
@property (nonatomic) float highlightsLevelOffset;
@property (nonatomic) float shadowsLevelOffset;
@property (nonatomic) float blackPointLevelOffset;
@property (copy, nonatomic) NSDictionary * smartToneStatistics;
@property (nonatomic) char smartColorEnabled;
@property (nonatomic) float autoSmartColorLevel;
@property (copy, nonatomic) NSString * autoSmartColorIdentifier;
@property (nonatomic) float smartColorLevel;
@property (nonatomic) float colorContrastLevelOffset;
@property (nonatomic) float colorVibrancyLevelOffset;
@property (nonatomic) float colorCastLevelOffset;
@property (copy, nonatomic) NSDictionary * smartColorStatistics;
@property (nonatomic) char smartBWEnabled;
@property (copy, nonatomic) NSDictionary * smartBWStatistics;
@property (nonatomic) float smartBWLevel;
@property (nonatomic) float bwStrengthLevelOffset;
@property (nonatomic) float bwNeutralGammaLevelOffset;
@property (nonatomic) float bwToneLevelOffset;
@property (nonatomic) float bwHueLevelOffset;
@property (nonatomic) float bwGrainLevelOffset;
@property (nonatomic) char whiteBalanceEnabled;
@property (nonatomic) float whiteBalanceFaceI;
@property (nonatomic) float whiteBalanceFaceQ;
@property (nonatomic) float whiteBalanceFaceStrength;
@property (nonatomic) float whiteBalanceFaceWarmth;
@property (nonatomic) int appliedOrientation;
@property (nonatomic) struct CGRect normalizedCropRect;
@property (nonatomic) float straightenAngle;
@property (nonatomic) char autoCropped;
@property (copy, nonatomic) NSDictionary * autoWhiteBalanceSettings;
@property (copy, nonatomic) NSString * autoWhiteBalanceIdentifier;
@property (copy, nonatomic) NSArray * redEyeCorrections;
@property (copy, nonatomic) NSArray * autoRedEyeCorrections;
@property (copy, nonatomic) NSArray * legacyAutoEnhanceFilters;
@property (nonatomic) char legacyAutoEnhanceIsOn;

- (void)dealloc;
- (PLPhotoEditMutableModel *)copyWithZone:(struct _NSZone *)arg0;
- (void)setEffectFilterName:(NSString *)arg0;
- (void)setEffectFilterVersion:(int)arg0;
- (void)setAppliedOrientation:(int)arg0;
- (void)setNormalizedCropRect:(struct CGRect)arg0;
- (void)setCropConstraintWidth:(int)arg0 height:(int)arg1;
- (void)pl_setNormalizedCropRectForDataCrop:(struct CGRect)arg0 straightenAngle:(struct CGSize)arg1 imageGeometry:(NSObject *)arg2;
- (void)pl_setCropConstraintForDataConstraint:(struct CGSize)arg0 imageGeometry:(NSObject *)arg1;
- (void)setRedEyeCorrections:(NSArray *)arg0;
- (void)setLegacyAutoEnhanceFilters:(NSArray *)arg0;
- (void)setLegacyAutoEnhanceIsOn:(char)arg0;
- (void)setStraightenAngle:(float)arg0;
- (void)setSmartToneStatistics:(NSDictionary *)arg0;
- (void)setSmartColorStatistics:(NSDictionary *)arg0;
- (void)setAutoRedEyeCorrections:(NSArray *)arg0;
- (void)setSmartToneLevel:(float)arg0;
- (void)setBrightnessLevelOffset:(float)arg0;
- (void)setContrastLevelOffset:(float)arg0;
- (void)setExposureLevelOffset:(float)arg0;
- (void)setHighlightsLevelOffset:(float)arg0;
- (void)setShadowsLevelOffset:(float)arg0;
- (void)setSmartToneEnabled:(char)arg0;
- (void)setSmartColorLevel:(float)arg0;
- (void)setColorContrastLevelOffset:(float)arg0;
- (void)setColorVibrancyLevelOffset:(float)arg0;
- (void)setSmartColorEnabled:(char)arg0;
- (void)performChangesWithBlock:(id /* block */)arg0;
- (NSObject *)_newModelChangeAnimation;
- (void)_setLevelInstanceVariable:(float *)arg0 toValue:(float)arg1;
- (void)copyValuesFromModel:(NSObject *)arg0 animated:(char)arg1;
- (void)setAutoSmartToneLevel:(float)arg0;
- (void)setAutoSmartToneIdentifier:(NSString *)arg0;
- (void)setBlackPointLevelOffset:(float)arg0;
- (void)setAutoSmartColorLevel:(float)arg0;
- (void)setAutoSmartColorIdentifier:(NSString *)arg0;
- (void)setColorCastLevelOffset:(float)arg0;
- (void)setSmartBWStatistics:(NSDictionary *)arg0;
- (void)setSmartBWEnabled:(char)arg0;
- (void)setSmartBWLevel:(float)arg0;
- (void)setBwStrengthLevelOffset:(float)arg0;
- (void)setBwNeutralGammaLevelOffset:(float)arg0;
- (void)setBwToneLevelOffset:(float)arg0;
- (void)setBwHueLevelOffset:(float)arg0;
- (void)setBwGrainLevelOffset:(float)arg0;
- (void)setWhiteBalanceEnabled:(char)arg0;
- (void)setWhiteBalanceFaceI:(float)arg0;
- (void)setWhiteBalanceFaceQ:(float)arg0;
- (void)setWhiteBalanceFaceStrength:(float)arg0;
- (void)setWhiteBalanceFaceWarmth:(float)arg0;
- (void)setAutoCropped:(char)arg0;
- (void)setAutoWhiteBalanceSettings:(NSDictionary *)arg0;
- (void)setAutoWhiteBalanceIdentifier:(NSString *)arg0;
- (void)addRedEyeCorrections:(CIRedEyeCorrections *)arg0;
- (void)removeRedEyeCorrections:(CIRedEyeCorrections *)arg0;

@end
