/* Runtime dump - BWNodeInput
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeInput : NSObject
{
    char _mediaTypeIsVideo;
    BWFormatRequirements * _formatRequirements;
    BWFormat * _format;
    long long _configurationID;
    unsigned long _mediaType;
    char _enabled;
    unsigned int _index;
    BWNode * _node;
    BWNodeConnection * _connection;
    int _passthroughMode;
    int _retainedBufferCount;
    int _delayedBufferCount;
    int _indefinitelyHeldBufferCount;
    BWVideoFormat * _liveFormat;
    long long _liveConfigurationID;
    unsigned int _numberOfBuffersReceived;
    unsigned int _numberOfBuffersDropped;
}

@property (readonly, nonatomic) unsigned long mediaType;
@property (nonatomic) char enabled;
@property (readonly, nonatomic) unsigned int index;
@property (readonly, nonatomic) BWNode * node;
@property (nonatomic) BWNodeConnection * connection;
@property (copy, nonatomic) BWFormatRequirements * formatRequirements;
@property (copy, nonatomic) BWFormat * format;
@property (readonly, nonatomic) BWVideoFormat * videoFormat;
@property (nonatomic) long long configurationID;
@property (nonatomic) int passthroughMode;
@property (nonatomic) char passesBuffersDownstream;
@property (nonatomic) int retainedBufferCount;
@property (nonatomic) int delayedBufferCount;
@property (nonatomic) int indefinitelyHeldBufferCount;
@property (retain, nonatomic) BWFormat * liveFormat;
@property (readonly, nonatomic) long long liveConfigurationID;
@property (readonly, nonatomic) unsigned int numberOfBuffersReceived;
@property (readonly, nonatomic) unsigned int numberOfBuffersDropped;

+ (void)initialize;

- (long long)configurationID;
- (void)setRetainedBufferCount:(int)arg0;
- (void)setConfigurationID:(long long)arg0;
- (void)handleMessage:(NSString *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (unsigned int)index;
- (BWNode *)node;
- (BWNodeConnection *)connection;
- (void)setConnection:(BWNodeConnection *)arg0;
- (BWNodeInput *)initWithMediaType:(unsigned long)arg0 node:(BWNode *)arg1 index:(unsigned int)arg2;
- (BWNodeInput *)initWithMediaType:(unsigned long)arg0 node:(BWNode *)arg1;
- (void)setFormatRequirements:(BWFormatRequirements *)arg0;
- (BWVideoFormat *)videoFormat;
- (void)_handleConfigurationLiveMessage:(NSString *)arg0;
- (void)setLiveFormat:(BWFormat *)arg0;
- (BWFormatRequirements *)formatRequirements;
- (void)setPassesBuffersDownstream:(char)arg0;
- (char)passesBuffersDownstream;
- (int)passthroughMode;
- (void)setPassthroughMode:(int)arg0;
- (int)retainedBufferCount;
- (int)delayedBufferCount;
- (void)setDelayedBufferCount:(int)arg0;
- (int)indefinitelyHeldBufferCount;
- (void)setIndefinitelyHeldBufferCount:(int)arg0;
- (BWFormat *)liveFormat;
- (long long)liveConfigurationID;
- (unsigned int)numberOfBuffersReceived;
- (unsigned int)numberOfBuffersDropped;
- (BWFormat *)format;
- (void)setFormat:(BWFormat *)arg0;
- (unsigned long)mediaType;

@end
