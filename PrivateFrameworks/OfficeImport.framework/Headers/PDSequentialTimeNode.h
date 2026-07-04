/* Runtime dump - PDSequentialTimeNode
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDSequentialTimeNode : PDTimeNode

@property (retain, nonatomic) PDAnimationTarget * target;
@property (nonatomic) int presetClass;
@property (nonatomic) int presetId;
@property (nonatomic) int triggerType;
@property (nonatomic) int iterateType;
@property (nonatomic) double delay;
@property (nonatomic) double direction;
@property (retain, nonatomic) NSString * groupId;

+ (unsigned int)buildPartsFromTarget:(NSObject *)arg0;
+ (PDSequentialTimeNode *)timeNodeUnion:(PDTimeNodeUnion *)arg0 initWithClass:(Class)arg1;
+ (NSObject *)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg0 target:(PDAnimationTarget *)arg1;
+ (NSDictionary *)newSequentialTimeNodeGroupForAnimationInfo;
+ (NSObject *)newSequentialTimeNodeGroupForAnimationInfoWithClass:(Class)arg0;

- (void)setDelay:(double)arg0;
- (void)setTarget:(PDAnimationTarget *)arg0;
- (double)delay;
- (PDAnimationTarget *)target;
- (void)setDirection:(double)arg0;
- (double)direction;
- (int)presetId;
- (void)setPresetId:(int)arg0;
- (NSObject *)level1ParallelTimeNodeGroupAtNodeIndex:(unsigned int)arg0;
- (NSObject *)level2ParallelTimeNodeGroupAtNodeIndex:(unsigned int)arg0 level1NodeIndex:(unsigned int)arg1;
- (NSObject *)level3BehaviorAtNodeIndex:(unsigned int)arg0 level2NodeIndex:(unsigned int)arg1 level1NodeIndex:(unsigned int)arg2;
- (void)setLevel2ParallelAttribute:(NSObject *)arg0;
- (void)setPresetClass:(int)arg0;
- (int)presetClass;
- (void)setTriggerType:(int)arg0;
- (int)triggerType;
- (void)setIterateType:(int)arg0;
- (int)iterateType;
- (NSString *)groupId;
- (void)setGroupId:(NSString *)arg0;

@end
