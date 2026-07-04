/* Runtime dump - BWFigCaptureDeviceSourceNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceSourceNode : BWSourceNode <BWFigCameraSourceNode>
{
    id _videoSBufHandler;
    id _stillImageSBufHandler;
    BWFigVideoCaptureDevice * _captureDevice;
    BWNodeOutput * _videoCaptureOutput;
    BWNodeOutput * _stillImageOutput;
    BWNodeOutput * _detectedFacesOutput;
    NSObject<OS_dispatch_group> * _streamEventNotificationGroup;
    NSObject<OS_dispatch_queue> * _streamEventDispatchQueue;
    char _detectedFacesOutputEnabled;
    int _resolvedSensorFormatIndex;
    int _streamSensorFormatIndex;
    unsigned long _sensorPixelFormat;
    unsigned long _streamSensorPixelFormat;
    int _offlineConfigurationSeed;
    int _resolvedOfflineConfigurationSeed;
    struct ? _sensorDimensions;
    struct ? _minOutputDimensions;
    int _minOutputDimensionsSensorFormatIndex;
    int _sensorFormatIndex;
    float _minFrameRate;
    float _maxFrameRate;
    float _aeMaxGain;
    int _maxIntegrationTimeOverride;
    char _requiresOverscan;
    char _temporalNoiseReductionEnabled;
    char _chromaNoiseReductionEnabled;
    char _automaticallyEnablesLowLightBoostWhenAvailable;
    char _lowLightBoostSupportedForFormat;
    int _motionAttachmentsSource;
    struct ? _outputDimensions;
    struct ? _streamOutputDimensions;
    struct ? _sensorOverscanDimensions;
    char _streamFormatChangeInFlight;
    struct ? _streamOutputDimensionsAfterFormatChange;
    unsigned long _streamSensorPixelFormatAfterFormatChange;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) BWFigVideoCaptureDevice * captureDevice;
@property (readonly) BWNodeOutput * videoCaptureOutput;
@property (readonly) BWNodeOutput * stillImageOutput;
@property (readonly) BWNodeOutput * detectedFacesOutput;

+ (void)initialize;
+ (NSObject *)captureDeviceSourceNodeWithCaptureDevice:(BWFigVideoCaptureDevice *)arg0;
+ (int)_indexOfFormatInFormatsArray:(NSArray *)arg0 matchingSensorDimensions:(struct ?)arg1 sensorPixelFormat:(unsigned long)arg2 sensorFormatIndex:(int)arg3;

- (float)minFrameRate;
- (float)maxFrameRate;
- (char)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(char)arg0;
- (struct ?)sensorDimensions;
- (void)setChromaNoiseReductionEnabled:(char)arg0;
- (struct ?)outputDimensions;
- (void)dealloc;
- (char)start:(id *)arg0;
- (BWFigVideoCaptureDevice *)captureDevice;
- (NSString *)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (BWNodeOutput *)videoCaptureOutput;
- (NSObject *)colorInfoForOutput:(NSObject *)arg0;
- (BWNodeOutput *)stillImageOutput;
- (BWNodeOutput *)detectedFacesOutput;
- (void)setSensorPixelFormat:(unsigned long)arg0;
- (void)setSensorDimensions:(struct ?)arg0;
- (void)setSensorFormatIndex:(int)arg0;
- (void)setRequiresOverscan:(char)arg0;
- (void)setMinFrameRate:(float)arg0;
- (void)setMaxFrameRate:(float)arg0;
- (void)setDetectedFacesOutputEnabled:(char)arg0;
- (void)setMotionAttachmentsSource:(int)arg0;
- (void)setTemporalNoiseReductionEnabled:(char)arg0;
- (float)aeMaxGain;
- (void)setAeMaxGain:(float)arg0;
- (int)maxIntegrationTimeOverride;
- (void)setMaxIntegrationTimeOverride:(int)arg0;
- (void)setLowLightBoostSupportedForFormat:(char)arg0;
- (void)setOutputDimensions:(struct ?)arg0;
- (struct ?)minOutputDimensions;
- (void)updateOutputRequirements;
- (struct ?)sensorOverscanDimensions;
- (char)detectedFacesOutputEnabled;
- (void)makeCurrentConfigurationLive;
- (char)hasNonLiveConfigurationChanges;
- (long)_bringStreamUpToDate;
- (void)_resolveOfflineConfiguration;
- (char)_haveNonLiveConfigurationChangesWithSensorFormatIndexChanged:(char *)arg0 sensorPixelFormatChanged:(char *)arg1 outputDimensionsChanged:(char *)arg2;
- (void)_registerForStreamNotifications;
- (void)_unregisterFromStreamNotifications;
- (NSObject *)_initWithCaptureDevice:(BWFigVideoCaptureDevice *)arg0;
- (void)_handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)_updateMinOutputDimensionsForResolvedSensorFormatIndex;
- (void)_bringStreamFormatIndexUpToDate;
- (void)_bringStreamPixelFormatUpToDate;
- (long)_updateStreamOutputDimensions;
- (long)_lockFramerateToMaxSupportedByCurrentSensorFormat;
- (void)_updateMetadataConfigurations;
- (struct ?)_maxOutputDimensionsForResolvedSensorFormatIndex;
- (unsigned long)sensorPixelFormat;
- (int)sensorFormatIndex;
- (int)motionAttachmentsSource;
- (char)requiresOverscan;
- (char)temporalNoiseReductionEnabled;
- (char)chromaNoiseReductionEnabled;
- (char)lowLightBoostSupportedForFormat;
- (char)stop:(id *)arg0;
- (struct OpaqueCMClock *)clock;

@end
