/* Runtime dump - PAMountStatus
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAMountStatus : NSObject
{
    NSString * _path;
    NSString * _type;
    NSMutableArray * _snapshots;
}

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)copySanitizedName;
- (NSString *)copyName;
- (PAMountStatus *)initWithName:(NSString *)arg0 andType:(NSObject *)arg1;
- (void)addStatus:(struct netfs_status *)arg0 atMachTime:(double)arg1;
- (char)isBlockingThread:(unsigned long long)arg0 betweenMachStartTime:(double)arg1 andEndTime:(double)arg2;
- (char)isUnresponsiveBetweenMachStartTime:(double)arg0 andEndTime:(double)arg1;
- (NSObject *)copyUnresponsiveDescriptionForThread:(unsigned long long)arg0 withSanitizedPaths:(char)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 includeThreadIDs:(char)arg4;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;

@end
