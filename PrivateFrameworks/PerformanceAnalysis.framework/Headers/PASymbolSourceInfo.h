/* Runtime dump - PASymbolSourceInfo
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolSourceInfo : NSObject <PASerializable>
{
    unsigned long long _offsetIntoSymbolOwner;
    unsigned long long _length;
    NSString * _fileName;
    unsigned int _lineNumber;
    unsigned int _columnNumber;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSString * sourceFileName;
@property (readonly) unsigned int sourceFileLineNumber;
@property (readonly) unsigned int sourceFileColumnNumber;
@property (readonly) unsigned long long offsetIntoSymbolOwner;
@property (readonly) unsigned long long length;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (unsigned long long)length;
- (unsigned long long)offsetIntoSymbolOwner;
- (NSObject *)_initEmptySourceInfoWithOffsetIntoSymbolOwner:(unsigned long long)arg0;
- (char)isEmptySourceInfo;
- (PASymbolSourceInfo *)initWithCSSymbolOwner:(struct _CSTypeRef)arg0 andOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (NSString *)sourceFileName;
- (unsigned int)sourceFileLineNumber;
- (unsigned int)sourceFileColumnNumber;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (NSDictionary *)_initWithSerializedSymbolSourceInfo:(struct ? *)arg0;
- (void)fixupOffsetFromVersion1WithSymbolOffsetIntoSymbolOwner:(unsigned long long)arg0;

@end
