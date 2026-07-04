/* Runtime dump - BWMetadataSourceNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMetadataSourceNode : BWSourceNode
{
    char _running;
    struct opaqueCMFormatDescription * _formatDescription;
    struct OpaqueCMClock * _clock;
    NSObject<OS_dispatch_queue> * _emitSamplesDispatchQueue;
}

@property (readonly, nonatomic) struct opaqueCMFormatDescription * formatDescription;

+ (void)initialize;

- (struct opaqueCMFormatDescription *)formatDescription;
- (BWMetadataSourceNode *)initWithFormatDescription:(struct opaqueCMFormatDescription *)arg0 clock:(struct OpaqueCMClock *)arg1;
- (void)dealloc;
- (char)start:(id *)arg0;
- (NSString *)nodeSubType;
- (void)appendMetadataSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (char)stop:(id *)arg0;
- (struct OpaqueCMClock *)clock;

@end
