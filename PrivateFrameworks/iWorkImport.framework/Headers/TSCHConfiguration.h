/* Runtime dump - TSCHConfiguration
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHConfiguration : NSObject
{
    char mSupportsChartDataEditor;
    char mSupportsChartRangeEditingMode;
    char mSupportsNumberFormatSameAsSource;
    char mShowMessageOnSelection;
    char mDisableHighQualityRenderingIfNecessary;
    char mSupports3DFillDataEmbeddingRecovery;
    char mUse3DFillFor3DChartFallback;
    char mShouldForceDiscreteGraphicsFor3D;
    char mExportsUsingSageKeynoteChartNonStyleDefaultsOverride;
    char mSupportsTextBackground;
    char mSupportsTextWrapping;
    Class mMultiDataChartOptionsControllerBuildSupportClass;
    NSString * mSaveChartStyleHelpKey;
}

@property (nonatomic) char supportsChartDataEditor;
@property (nonatomic) char supportsChartRangeEditingMode;
@property (nonatomic) char supportsNumberFormatSameAsSource;
@property (nonatomic) char showMessageOnSelection;
@property (nonatomic) char disableHighQualityRenderingIfNecessary;
@property (nonatomic) char supports3DFillDataEmbeddingRecovery;
@property (nonatomic) char use3DFillFor3DChartFallback;
@property (nonatomic) char shouldForceDiscreteGraphicsFor3D;
@property (nonatomic) char exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
@property (nonatomic) char supportsTextBackground;
@property (nonatomic) char supportsTextWrapping;
@property (nonatomic) Class multiDataChartOptionsControllerBuildSupportClass;
@property (copy, nonatomic) NSString * saveChartStyleHelpKey;
@property (readonly) TSSPropertyMap * appSpecificPropertyOverrides;

+ (void)resetSharedChartConfiguration;
+ (TSCHConfiguration *)sharedChartConfiguration;
+ (TSCHConfiguration *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCHConfiguration *)_singletonAlloc;

- (void)setSupports3DFillDataEmbeddingRecovery:(char)arg0;
- (char)use3DFillFor3DChartFallback;
- (char)disableHighQualityRenderingIfNecessary;
- (char)supportsNumberFormatSameAsSource;
- (TSSPropertyMap *)appSpecificPropertyOverrides;
- (char)supportsTextWrapping;
- (char)supportsChartDataEditor;
- (void)setSupportsChartDataEditor:(char)arg0;
- (char)supportsChartRangeEditingMode;
- (void)setSupportsChartRangeEditingMode:(char)arg0;
- (void)setSupportsNumberFormatSameAsSource:(char)arg0;
- (char)showMessageOnSelection;
- (void)setShowMessageOnSelection:(char)arg0;
- (void)setDisableHighQualityRenderingIfNecessary:(char)arg0;
- (char)supports3DFillDataEmbeddingRecovery;
- (void)setUse3DFillFor3DChartFallback:(char)arg0;
- (char)shouldForceDiscreteGraphicsFor3D;
- (void)setShouldForceDiscreteGraphicsFor3D:(char)arg0;
- (char)exportsUsingSageKeynoteChartNonStyleDefaultsOverride;
- (void)setExportsUsingSageKeynoteChartNonStyleDefaultsOverride:(char)arg0;
- (char)supportsTextBackground;
- (void)setSupportsTextBackground:(char)arg0;
- (void)setSupportsTextWrapping:(char)arg0;
- (Class)multiDataChartOptionsControllerBuildSupportClass;
- (void)setMultiDataChartOptionsControllerBuildSupportClass:(Class)arg0;
- (NSString *)saveChartStyleHelpKey;
- (void)setSaveChartStyleHelpKey:(NSString *)arg0;
- (TSCHConfiguration *)retain;
- (void)release;
- (TSCHConfiguration *)init;
- (TSCHConfiguration *)autorelease;
- (unsigned int)retainCount;
- (TSCHConfiguration *)copyWithZone:(struct _NSZone *)arg0;

@end
