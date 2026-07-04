/* Runtime dump - PAMountStatusTracker
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAMountStatusTracker : NSObject <PASerializable>
{
    NSMutableDictionary * _mountStatusDict;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (PAMountStatusTracker *)init;
- (void)takeCurrentMountStatusForMachTime:(double)arg0;
- (unsigned int)forEachMountBlockingThread:(unsigned long long)arg0 withSanitizedPaths:(char)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(id /* block */)arg4;
- (unsigned int)forEachUnresponsiveMountWithSanitizedPaths:(char)arg0 BetweenMachStartTime:(double)arg1 andEndTime:(double)arg2 runBlock:(id /* block */)arg3;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;

@end
