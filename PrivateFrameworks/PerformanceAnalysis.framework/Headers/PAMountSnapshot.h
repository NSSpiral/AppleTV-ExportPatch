/* Runtime dump - PAMountSnapshot
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAMountSnapshot : NSObject <PASerializable>
{
    double _machTimestampWhenMeasured;
    double _machTimestampOfLastResponse;
    NSArray * _blockedThreadIDs;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) double machTimestampWhenMeasured;
@property (readonly) double machTimestampOfLastResponse;
@property (readonly) char isUnresponsive;
@property (readonly) NSArray * blockedThreadIDs;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (PAMountSnapshot *)initWithStatus:(struct netfs_status *)arg0 atMachTime:(double)arg1;
- (char)isBlockingThread:(unsigned long long)arg0;
- (char)isUnresponsive;
- (double)machTimestampWhenMeasured;
- (double)machTimestampOfLastResponse;
- (NSArray *)blockedThreadIDs;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PAMountSnapshot *)initWithSerializedMountSnapshot:(struct ? *)arg0;

@end
