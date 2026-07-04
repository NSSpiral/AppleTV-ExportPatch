/* Runtime dump - FigCaptureSourceConfiguration
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceConfiguration : NSObject <FigXPCCoding, NSCopying>
{
    NSString * _sourceID;
    struct OpaqueFigCaptureSource * _source;
    int _sourceType;
    NSDictionary * _sourceAttributes;
    FigCaptureSourceFormat * _requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    char _automaticallyEnablesLowLightBoostWhenAvailable;
    char _applyMaxIntegrationTimeOverrideWhenAvailable;
    NSDictionary * _faceDetectionConfiguration;
    char _sensorHDREnabled;
}

@property (copy, nonatomic) NSString * sourceID;
@property (readonly, nonatomic) struct OpaqueFigCaptureSource * source;
@property (retain, nonatomic) FigCaptureSourceFormat * requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration;
@property (copy, nonatomic) NSDictionary * faceDetectionConfiguration;
@property (readonly, nonatomic) int sourcePosition;
@property (readonly, nonatomic) int sourceType;
@property (nonatomic) int imageControlMode;
@property (nonatomic) char automaticallyEnablesLowLightBoostWhenAvailable;
@property (nonatomic) char applyMaxIntegrationTimeOverrideWhenAvailable;
@property (nonatomic) char sensorHDREnabled;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (NSObject *)stringForSourceType:(int)arg0;
+ (int)sourceTypeForString:(NSString *)arg0;

- (NSString *)sourceID;
- (int)imageControlMode;
- (void)setImageControlMode:(int)arg0;
- (float)videoZoomFactor;
- (void)setVideoZoomFactor:(float)arg0;
- (char)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg0;
- (float)videoZoomRampAcceleration;
- (void)setVideoZoomRampAcceleration:(float)arg0;
- (void)setSourceID:(NSString *)arg0;
- (void)setRequiredFormat:(FigCaptureSourceFormat *)arg0;
- (void)setRequiredMaxFrameRate:(float)arg0;
- (void)setRequiredMinFrameRate:(float)arg0;
- (void)setApplyMaxIntegrationTimeOverrideWhenAvailable:(char)arg0;
- (void)setSensorHDREnabled:(char)arg0;
- (void)setFaceDetectionConfiguration:(NSDictionary *)arg0;
- (FigCaptureSourceConfiguration *)initWithSourceType:(int)arg0;
- (NSDictionary *)copyXPCEncoding;
- (FigCaptureSourceConfiguration *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (FigCaptureSourceConfiguration *)copyWithZone:(struct _NSZone *)arg0;
- (int)sourceType;
- (struct OpaqueFigCaptureSource *)source;
- (FigCaptureSourceFormat *)requiredFormat;
- (int)sourcePosition;
- (float)requiredMaxFrameRate;
- (float)requiredMinFrameRate;
- (char)applyMaxIntegrationTimeOverrideWhenAvailable;
- (char)sensorHDREnabled;
- (NSDictionary *)faceDetectionConfiguration;
- (char)_isCameraSource;
- (int)_sourceToken;
- (id)_sourceUID;
- (NSDictionary *)_sourceAttributes;
- (FigCaptureSourceConfiguration *)initWithSource:(struct OpaqueFigCaptureSource *)arg0;

@end
