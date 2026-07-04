/* Runtime dump - BWVideoCompressorNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVideoCompressorNode : BWNode
{
    NSDictionary * _compressionSettings;
    char _nextFrameEncodeAsKeyFrame;
    struct OpaqueVTCompressionSession * _compressionSession;
    char _didPrepareToEncode;
    char _sourceIsHDResolution;
    unsigned long _sourcePixelFormatType;
    NSObject<OS_dispatch_queue> * _emitterQueue;
    char _shouldAttachDebugSEI;
    float _maxVideoFrameRate;
}

+ (void)initialize;
+ (NSDictionary *)_formatRequirementsForCompressionSettings:(NSDictionary *)arg0 maxVideoFrameRate:(float)arg1 retainedBufferCountHint:(int *)arg2;

- (void)dealloc;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)setCompressionSettings:(NSDictionary *)arg0;
- (void)prepareForVideoCompression;
- (BWVideoCompressorNode *)initWithCompressionSettings:(NSDictionary *)arg0 maxVideoFrameRate:(float)arg1;
- (void)makeCurrentConfigurationLive;
- (void)_cleanCompressor;
- (void)insertKeyFrame;
- (NSDictionary *)compressionSettings;

@end
