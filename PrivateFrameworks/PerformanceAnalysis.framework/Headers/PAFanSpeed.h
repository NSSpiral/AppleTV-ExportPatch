/* Runtime dump - PAFanSpeed
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAFanSpeed : NSObject <PASerializable>
{
    double _machTimestamp;
    int _fanSpeed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) double machTimesamp;
@property (readonly) int fanSpeed;
@property (readonly) char fanSpeedIsValid;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;
+ (int)numFans;

- (PAFanSpeed *)init;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PAFanSpeed *)initWithMachTime:(double)arg0;
- (char)fanSpeedIsValid;
- (int)fanSpeed;
- (double)machTimesamp;
- (PAFanSpeed *)initWithSerializedFanSpeed:(struct ? *)arg0;

@end
