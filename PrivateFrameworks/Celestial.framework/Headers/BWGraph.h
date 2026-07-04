/* Runtime dump - BWGraph
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWGraph : NSObject
{
    NSMutableArray * _nodes;
    NSMutableArray * _sourceNodes;
    NSMutableArray * _sinkNodes;
    NSMutableArray * _connections;
    NSMutableArray * _outputsWithSharedPools;
    char _running;
    char _beingConfigured;
    long long _inflightConfigurationID;
    NSObject<OS_dispatch_group> * _startGroup;
    NSObject<OS_dispatch_group> * _commitGroup;
    char _supportsLiveReconfiguration;
    long _errorStatus;
    <BWGraphStatusDelegate> * _statusDelegate;
    char _classicRetainedBufferCount;
}

@property (readonly, nonatomic) char supportsLiveReconfiguration;
@property (nonatomic) <BWGraphStatusDelegate> * statusDelegate;
@property long errorStatus;

+ (void)initialize;

- (void)beginConfiguration;
- (NSString *)dotString;
- (void)dealloc;
- (BWGraph *)init;
- (char)start:(id *)arg0;
- (void)setStatusDelegate:(<BWGraphStatusDelegate> *)arg0;
- (char)commitConfigurationWithID:(long long)arg0 error:(id *)arg1;
- (char)addNode:(NSObject *)arg0 error:(id *)arg1;
- (char)connectOutput:(NSObject *)arg0 toInput:(NSObject *)arg1 pipelineStage:(BWPipelineStage *)arg2;
- (char)supportsLiveReconfiguration;
- (void)waitForOutstandingStartOrCommitOperationToComplete;
- (NSMutableArray *)_sourceNodes;
- (NSMutableArray *)_sinkNodes;
- (NSObject *)_newDispatchGroupForSinksToTransitionToState:(int)arg0;
- (void)setErrorStatus:(long)arg0;
- (<BWGraphStatusDelegate> *)statusDelegate;
- (long)errorStatus;
- (void)_waitForOutstandingStartOrCommitOperationToComplete;
- (char)_resolveFormats:(id *)arg0;
- (char)_resolveRetainedBufferCounts:(id *)arg0;
- (char)_prepareNodesWithConfigurationChanges:(id *)arg0;
- (void)_makeParentConfigurationChangesLive;
- (NSDictionary *)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg0;
- (NSEnumerator *)_breadthFirstEnumerator;
- (NSEnumerator *)_depthFirstEnumerator;
- (NSEnumerator *)_reverseBreadthFirstEnumerator;
- (char)stop:(id *)arg0;

@end
