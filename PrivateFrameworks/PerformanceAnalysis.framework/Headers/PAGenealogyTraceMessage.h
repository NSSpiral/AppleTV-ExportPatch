/* Runtime dump - PAGenealogyTraceMessage
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyTraceMessage : PAGenealogyTimestampedMessage <PASerializable>
{
    unsigned long long _traceId;
    NSUUID * _binaryUuid;
    unsigned int _binaryOffset;
    void * _buffer;
    unsigned long _bufferLength;
    NSString * _message;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSUUID * binaryUuid;
@property (readonly) unsigned int binaryOffset;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)message;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PAGenealogyTraceMessage *)initWithSerializedGenealogyTraceMessage:(struct ? *)arg0;
- (NSUUID *)binaryUuid;
- (unsigned int)binaryOffset;
- (PAGenealogyTraceMessage *)initWithId:(unsigned long long)arg0 andOffset:(unsigned int)arg1 intoBinaryWithUUID:(id)arg2 withBuffer:(void *)arg3 ofLength:(void)arg4 atMachTime:(unsigned long)arg5 withActivityId:(double)arg6;

@end
