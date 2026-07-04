/* Runtime dump - BWNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNode : NSObject
{
    NSMutableArray * _inputs;
    NSMutableArray * _outputs;
    NSString * _name;
    char _supportsConcurrentLiveInputCallbacks;
    char _supportsLiveReconfiguration;
    char _singleInput;
    char _singleOutput;
    BWGraph * _graph;
    <BWNodeRenderDelegate> * _renderDelegate;
    long long _configurationID;
    BWNodeInput * _input;
    BWNodeOutput * _output;
}

@property (copy, nonatomic) NSString * name;
@property (readonly) NSString * nodeType;
@property (readonly) NSString * nodeSubType;
@property (readonly) NSArray * inputs;
@property (readonly) NSArray * outputs;
@property (readonly) BWNodeInput * input;
@property (readonly) BWNodeOutput * output;
@property (nonatomic) <BWNodeRenderDelegate> * renderDelegate;
@property (nonatomic) char supportsConcurrentLiveInputCallbacks;
@property (nonatomic) char supportsLiveReconfiguration;
@property (readonly, nonatomic) char hasNonLiveConfigurationChanges;
@property (nonatomic) BWGraph * graph;

+ (void)initialize;

- (NSArray *)outputs;
- (NSArray *)inputs;
- (long long)configurationID;
- (void)addInput:(NSObject *)arg0;
- (BWNodeOutput *)output;
- (void)setConfigurationID:(long long)arg0;
- (void)dealloc;
- (BWNode *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (BWNodeInput *)input;
- (NSString *)nodeType;
- (void)configurationWithID:(long long)arg0 updatedFormat:(BWFormat *)arg1 didBecomeLiveForInput:(NSObject *)arg2;
- (void)didReachEndOfDataForInput:(NSObject *)arg0;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)setSupportsLiveReconfiguration:(char)arg0;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)_handleMessage:(NSString *)arg0 fromInput:(NSObject *)arg1;
- (<BWNodeRenderDelegate> *)renderDelegate;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleNodeError:(NSError *)arg0 forInput:(NSObject *)arg1;
- (void)setRenderDelegate:(<BWNodeRenderDelegate> *)arg0;
- (char)supportsLiveReconfiguration;
- (void)makeCurrentConfigurationLive;
- (char)hasNonLiveConfigurationChanges;
- (char)supportsConcurrentLiveInputCallbacks;
- (char)allInputsHaveReachedState:(int)arg0;
- (void)setSupportsConcurrentLiveInputCallbacks:(char)arg0;
- (void)handleDroppedSample:(NSObject *)arg0 forInput:(NSObject *)arg1;
- (BWGraph *)graph;
- (void)setGraph:(BWGraph *)arg0;
- (void)addOutput:(NSObject *)arg0;

@end
