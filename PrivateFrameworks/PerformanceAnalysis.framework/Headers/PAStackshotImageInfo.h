/* Runtime dump - PAStackshotImageInfo
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAStackshotImageInfo : NSObject <PASerializable>
{
    unsigned long long _loadAddress;
    NSUUID * _imageUUID;
}

@property (readonly) unsigned long long loadAddress;
@property (readonly) NSUUID * imageUUID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (PAStackshotImageInfo *)initWithUUID:(NSString *)arg0 andAddress:(unsigned long long)arg1;
- (unsigned long long)loadAddress;
- (NSUUID *)imageUUID;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PAStackshotImageInfo *)initWithSerializedImageInfo:(struct ? *)arg0;
- (PAStackshotImageInfo *)initWithImageInfo:(void *)arg0 is64Bit:(char)arg1;

@end
