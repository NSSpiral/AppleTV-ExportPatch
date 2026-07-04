/* Runtime dump - BWPipelineStage
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWPipelineStage : NSObject
{
    NSObject<OS_dispatch_queue> * _executionQueue;
    NSObject<OS_dispatch_group> * _executionGroup;
    NSMutableArray * _queuedMessages;
    NSMutableArray * _inputsForQueuedMessages;
    NSString * _name;
}

@property (readonly, nonatomic) NSString * name;

+ (void)initialize;
+ (NSString *)pipelineStageWithName:(NSString *)arg0 priority:(unsigned int)arg1;
+ (NSString *)pipelineStageWithName:(NSString *)arg0 priority:(unsigned int)arg1 discardsLateSampleData:(char)arg2;
+ (NSObject *)_currentPipelineStage;
+ (void)_setCurrentPipelineStage:(NSObject *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (void)sendMessage:(NSString *)arg0 toInput:(NSObject *)arg1;
- (NSString *)_initWithName:(NSString *)arg0 priority:(unsigned int)arg1 discardsLateSampleData:(char)arg2;
- (char)_isCurrentPipelineStage;
- (void)_serviceQueuedMessages;

@end
