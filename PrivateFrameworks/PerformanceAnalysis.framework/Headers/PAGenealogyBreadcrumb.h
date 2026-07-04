/* Runtime dump - PAGenealogyBreadcrumb
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyBreadcrumb : PAGenealogyTimestampedMessage <PASerializable>
{
    NSString * _message;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)message;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PAGenealogyBreadcrumb *)initWithSerializedGenealogyBreadcrumb:(struct ? *)arg0;
- (PAGenealogyBreadcrumb *)initWithMessage:(NSString *)arg0 atMachTime:(double)arg1 withActivityId:(unsigned long long)arg2;

@end
