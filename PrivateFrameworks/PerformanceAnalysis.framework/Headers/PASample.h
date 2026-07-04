/* Runtime dump - PASample
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASample : NSObject <PASerializable>
{
    NSMutableDictionary * _tasks;
    double _machTimestamp;
    double _wallTimestamp;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) double machTimestamp;
@property (readonly) double wallTimestamp;
@property (readonly) NSArray * sampleTasks;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(struct NSMutableDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PASample *)initWithStackshot:(PAStackshot *)arg0;
- (double)machTimestamp;
- (double)wallTimestamp;
- (NSData *)_initWithSerializedData:(struct ? *)arg0;
- (NSArray *)sampleTasks;
- (id)sampleTaskForPid:(int)arg0;
- (void)addSampleTask:(NSObject *)arg0;

@end
