/* Runtime dump - BWNodeOutput
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeOutput : NSObject
{
    NSString * _name;
    <BWNodeOutputConsumer> * _consumer;
    char _consumerIsANodeConnection;
    char _mediaTypeIsVideo;
    BWFormatRequirements * _formatRequirements;
    BWFormat * _format;
    long long _configurationID;
    BWPixelBufferPool * _preparedPixelBufferPool;
    unsigned long _preparedBufferPoolSize;
    BWPixelBufferPool * _livePixelBufferPool;
    unsigned long _livePixelBufferPoolSize;
    unsigned long _mediaType;
    BWNode * _node;
    char _providesPixelBufferPool;
    int _passthroughMode;
    int _indexOfInputWhichDrivesThisOutput;
    unsigned long _retainedBufferCount;
    unsigned long _owningNodeRetainedBufferCount;
    float _maxSampleDataOutputRate;
    char _dropsSampleBuffersWithUnexpectedPTS;
    BWFormat * _liveFormat;
    long long _liveConfigurationID;
    char _discardsSampleData;
    unsigned int _numberOfBuffersEmitted;
    unsigned int _numberOfBuffersDropped;
    struct ? _lastValidPTS;
    struct ? _lastEmittedPTS;
}

@property (copy, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned long mediaType;
@property (readonly, nonatomic) BWNode * node;
@property (nonatomic) <BWNodeOutputConsumer> * consumer;
@property (readonly, nonatomic) BWNodeConnection * connection;
@property (copy, nonatomic) BWFormatRequirements * formatRequirements;
@property (copy, nonatomic) BWFormat * format;
@property (readonly, nonatomic) BWVideoFormat * videoFormat;
@property (nonatomic) long long configurationID;
@property (nonatomic) char providesPixelBufferPool;
@property (readonly, nonatomic) BWPixelBufferPool * preparedPixelBufferPool;
@property (nonatomic) int passthroughMode;
@property (nonatomic) char buffersOriginateUpstream;
@property (nonatomic) int indexOfInputWhichDrivesThisOutput;
@property (nonatomic) unsigned long retainedBufferCount;
@property (nonatomic) unsigned long owningNodeRetainedBufferCount;
@property (nonatomic) float maxSampleDataOutputRate;
@property (nonatomic) char dropsSampleBuffersWithUnexpectedPTS;
@property (retain, nonatomic) BWFormat * liveFormat;
@property (readonly, nonatomic) long long liveConfigurationID;
@property (readonly, nonatomic) BWPixelBufferPool * livePixelBufferPool;
@property (nonatomic) char discardsSampleData;
@property (readonly, nonatomic) unsigned int numberOfBuffersEmitted;
@property (readonly, nonatomic) unsigned int numberOfBuffersDropped;

+ (void)initialize;

- (long long)configurationID;
- (void)setRetainedBufferCount:(unsigned long)arg0;
- (void)setConfigurationID:(long long)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)invalidate;
- (BWNode *)node;
- (BWNodeConnection *)connection;
- (BWNodeOutput *)initWithMediaType:(unsigned long)arg0 node:(BWNode *)arg1;
- (void)makeConfiguredFormatLive;
- (void)markEndOfLiveOutput;
- (void)emitSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (void)setFormatRequirements:(BWFormatRequirements *)arg0;
- (void)setProvidesPixelBufferPool:(char)arg0;
- (BWVideoFormat *)videoFormat;
- (void)setLiveFormat:(BWFormat *)arg0;
- (BWFormatRequirements *)formatRequirements;
- (int)passthroughMode;
- (void)setPassthroughMode:(int)arg0;
- (unsigned long)retainedBufferCount;
- (BWFormat *)liveFormat;
- (long long)liveConfigurationID;
- (unsigned int)numberOfBuffersDropped;
- (NSString *)_poolName;
- (char)_emitMessage:(NSString *)arg0;
- (void)setNodePreparedPixelBufferPool:(NSObject *)arg0;
- (void)setBuffersOriginateUpstream:(char)arg0;
- (char)buffersOriginateUpstream;
- (void)setPreparedSharedPixelBufferPool:(NSObject *)arg0;
- (void)prepareForConfiguredFormatToBecomeLive;
- (BWPixelBufferPool *)livePixelBufferPool;
- (void)emitNodeError:(NSError *)arg0;
- (void)emitDroppedSample:(NSObject *)arg0;
- (char)providesPixelBufferPool;
- (BWPixelBufferPool *)preparedPixelBufferPool;
- (int)indexOfInputWhichDrivesThisOutput;
- (void)setIndexOfInputWhichDrivesThisOutput:(int)arg0;
- (unsigned long)owningNodeRetainedBufferCount;
- (void)setOwningNodeRetainedBufferCount:(unsigned long)arg0;
- (float)maxSampleDataOutputRate;
- (void)setMaxSampleDataOutputRate:(float)arg0;
- (char)dropsSampleBuffersWithUnexpectedPTS;
- (void)setDropsSampleBuffersWithUnexpectedPTS:(char)arg0;
- (char)discardsSampleData;
- (void)setDiscardsSampleData:(char)arg0;
- (unsigned int)numberOfBuffersEmitted;
- (BWFormat *)format;
- (void)setFormat:(BWFormat *)arg0;
- (<BWNodeOutputConsumer> *)consumer;
- (void)setConsumer:(<BWNodeOutputConsumer> *)arg0;
- (unsigned long)mediaType;

@end
