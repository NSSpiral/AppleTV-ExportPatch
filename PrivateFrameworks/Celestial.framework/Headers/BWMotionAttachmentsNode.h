/* Runtime dump - BWMotionAttachmentsNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionAttachmentsNode : BWNode
{
    struct OpaqueFigSampleBufferProcessor * _sampleBufferProcessor;
    NSDictionary * _optionsDict;
}

+ (void)initialize;

- (void)dealloc;
- (NSString *)nodeType;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (long)_setupSampleBufferProcessor;
- (BWMotionAttachmentsNode *)initWithSensorIDDict:(id)arg0 moduleInfo:(NSDictionary *)arg1 requiredFormat:(FigCaptureSourceFormat *)arg2 forPanorama:(char)arg3 motionAttachmentsSource:(int)arg4;

@end
