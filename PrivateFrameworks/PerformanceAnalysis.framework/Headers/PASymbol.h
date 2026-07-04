/* Runtime dump - PASymbol
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbol : NSObject <PASerializable>
{
    NSString * _name;
    unsigned long long _length;
    unsigned long long _offsetInOwner;
    NSMutableArray * _sourceInfos;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSString * name;
@property (readonly) unsigned long long length;
@property (readonly) unsigned long long offsetIntoOwner;
@property (readonly) char isEmptySymbol;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (NSString *)name;
- (unsigned long long)length;
- (void)addSourceInfo:(NSDictionary *)arg0;
- (NSObject *)debugDescriptionForOffsetIntoOwner:(unsigned long long)arg0;
- (id)sourceInfoWithOffsetIntoSymbol:(unsigned long long)arg0;
- (void)setOffsetIntoOwner:(unsigned long long)arg0;
- (PASymbol *)initWithCSSymbolRef:(struct _CSTypeRef)arg0;
- (char)hasAnySourceInfo;
- (PASymbol *)initEmptySymbolWithOffsetIntoOwner:(unsigned long long)arg0;
- (char)isEmptySymbol;
- (char)containsOffsetIntoSymbolOwner:(unsigned long long)arg0;
- (int)compareToSymbol:(id)arg0;
- (int)compareInfoRichnessToSymbol:(id)arg0;
- (void)copySourceInfoFromSymbol:(id)arg0;
- (unsigned long long)offsetIntoOwner;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (PASymbol *)_initWithSerializedSymbol:(struct ? *)arg0;

@end
