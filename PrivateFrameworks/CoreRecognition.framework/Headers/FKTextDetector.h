/* Runtime dump - FKTextDetector
 * Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface FKTextDetector : NSObject
{
    char _detectDiacritics;
    char _returnSubFeatures;
    char _createFeaturesForAllConcomps;
    char _measureTime;
    char _enableBinarizerFiltering;
    int _minimumCharacterHeight;
    struct ? * _session;
    int _thresholdingAlgorithm;
    int _binarizerLimit;
    double _timeTransform;
    double _timeBinarizer;
    double _timeConcomps;
    double _timeSequences;
    double _timeRecognizer;
}

@property (nonatomic) char detectDiacritics;
@property (nonatomic) int minimumCharacterHeight;
@property (nonatomic) char returnSubFeatures;
@property (nonatomic) struct ? * session;
@property (nonatomic) int thresholdingAlgorithm;
@property (nonatomic) char createFeaturesForAllConcomps;
@property (nonatomic) char measureTime;
@property (nonatomic) char enableBinarizerFiltering;
@property (nonatomic) int binarizerLimit;
@property (nonatomic) double timeTransform;
@property (nonatomic) double timeBinarizer;
@property (nonatomic) double timeConcomps;
@property (nonatomic) double timeSequences;
@property (nonatomic) double timeRecognizer;

- (void)dealloc;
- (struct ? *)session;
- (void)setSession:(struct ? *)arg0;
- (FKTextDetector *)initWithDimensions:(struct CGSize)arg0;
- (void)setReturnSubFeatures:(char)arg0;
- (void)setDetectDiacritics:(char)arg0;
- (NSObject *)detectFeaturesInBuffer:(struct __CVBuffer *)arg0 withRegionOfInterest:(struct CGRect)arg1 error:(struct CGSize)arg2;
- (int)minimumCharacterHeight;
- (char)measureTime;
- (void)setTimeTransform:(double)arg0;
- (double)timeTransform;
- (void)setTimeBinarizer:(double)arg0;
- (int)thresholdingAlgorithm;
- (int)binarizerLimit;
- (char)enableBinarizerFiltering;
- (double)timeBinarizer;
- (void)setTimeConcomps:(double)arg0;
- (double)timeConcomps;
- (void)setTimeSequences:(double)arg0;
- (char)detectDiacritics;
- (double)timeSequences;
- (void)setTimeRecognizer:(double)arg0;
- (double)timeRecognizer;
- (char)returnSubFeatures;
- (char)createFeaturesForAllConcomps;
- (void)translatePropertiesToOptions;
- (NSObject *)detectFeaturesInBuffer:(struct __CVBuffer *)arg0 error:(id *)arg1;
- (void)setMinimumCharacterHeight:(int)arg0;
- (void)setThresholdingAlgorithm:(int)arg0;
- (void)setCreateFeaturesForAllConcomps:(char)arg0;
- (void)setMeasureTime:(char)arg0;
- (void)setEnableBinarizerFiltering:(char)arg0;
- (void)setBinarizerLimit:(int)arg0;

@end
