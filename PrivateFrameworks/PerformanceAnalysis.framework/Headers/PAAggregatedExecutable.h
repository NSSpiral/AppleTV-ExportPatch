/* Runtime dump - PAAggregatedExecutable
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAAggregatedExecutable : PAAggregatedTask
{
    unsigned int _firstTimestampIndex;
    unsigned int _lastTimestampIndex;
    NSString * _name;
    NSUUID * _mainBinaryUuid;
    unsigned int _count;
    NSMutableSet * _rootFrames;
}

@property (readonly) PAExecutableAggregator * aggregator;
@property (readonly) NSUUID * mainBinaryUuid;
@property unsigned int count;
@property unsigned int firstTimestampIndex;
@property unsigned int lastTimestampIndex;
@property (retain) NSMutableSet * rootFrames;
@property (readonly) NSString * name;

- (void)dealloc;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)name;
- (int)compare:(NSObject *)arg0;
- (void)setCount:(unsigned int)arg0;
- (void)printHeaderToStream:(struct __sFILE *)arg0;
- (void)printToStream:(struct __sFILE *)arg0;
- (void)addSampleTask:(NSObject *)arg0 atTimestampIndex:(unsigned int)arg1;
- (PAExecutableAggregator *)aggregator;
- (PAAggregatedExecutable *)initWithAggregator:(PAExecutableAggregator *)arg0 andSampleTask:(NSObject *)arg1 atTimestampIndex:(unsigned int)arg2;
- (void)printBinaryImagesToStream:(struct __sFILE *)arg0;
- (NSUUID *)mainBinaryUuid;
- (unsigned int)firstTimestampIndex;
- (unsigned int)lastTimestampIndex;
- (void)printStacksToStream:(struct __sFILE *)arg0;
- (PAAggregatedExecutable *)initForIdentificationPurposesWithSampleTask:(NSObject *)arg0;
- (void)setFirstTimestampIndex:(unsigned int)arg0;
- (void)setLastTimestampIndex:(unsigned int)arg0;
- (NSMutableSet *)rootFrames;
- (NSObject *)copyDescriptionForFrame:(NSObject *)arg0;
- (void)setRootFrames:(NSMutableSet *)arg0;

@end
