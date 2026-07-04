/* Runtime dump - PASymbolHandle
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolHandle : NSObject <PASerializable>
{
    PASymbol * _symbol;
    PASymbolOwner * _owner;
    unsigned long long _symbolOwnerStartAddressInTask;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) char hasSymbolOwner;
@property (readonly) NSUUID * symbolOwnerUUID;
@property (readonly) unsigned long long symbolOwnerStartAddressInTask;
@property (readonly) NSString * symbolOwnerName;
@property (retain) NSString * symbolOwnerPath;
@property (readonly) unsigned long long symbolOwnerTextSegmentLength;
@property (readonly) NSString * symbolOwnerBundleIdentifier;
@property (readonly) NSString * symbolOwnerBundleVersion;
@property (readonly) NSString * symbolOwnerBundleShortVersion;
@property (readonly) NSString * symbolOwnerBinaryVersion;
@property (readonly) char hasSymbol;
@property (readonly) NSString * symbolName;
@property (readonly) unsigned long long symbolStartAddressInTask;
@property (readonly) unsigned long long symbolLength;

+ (PASymbolHandle *)getEmptySymbolHandle;
+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (PASymbolHandle *)_initAsEmptyHandle;
- (unsigned long long)symbolStartAddressInTask;
- (unsigned long long)symbolLength;
- (NSString *)_sourceInformationForAddress:(unsigned long long)arg0;
- (char)hasSourceInformationForAddress:(unsigned long long)arg0;
- (NSString *)debugDescriptionForAddress:(unsigned long long)arg0;
- (unsigned long long)symbolOwnerStartAddressInTask;
- (NSString *)symbolName;
- (NSString *)symbolOwnerName;
- (NSUUID *)symbolOwnerUUID;
- (NSString *)sourceFileNameForAddress:(unsigned long long)arg0;
- (unsigned int)sourceLineNumberForAddress:(unsigned long long)arg0;
- (unsigned int)sourceColumnNumberForAddress:(unsigned long long)arg0;
- (char)hasSymbolOwner;
- (NSString *)symbolOwnerPath;
- (void)setSymbolOwnerPath:(NSString *)arg0;
- (unsigned long long)symbolOwnerTextSegmentLength;
- (NSString *)symbolOwnerBundleIdentifier;
- (NSString *)symbolOwnerBundleVersion;
- (NSString *)symbolOwnerBundleShortVersion;
- (NSString *)symbolOwnerBinaryVersion;
- (char)hasSymbol;
- (int)compareInfoRichnessToSymbolHandle:(id)arg0 forAddress:(unsigned long long)arg1;
- (PASymbolHandle *)initWithSymbol:(PASymbol *)arg0 andSymbolOwnerStartAddress:(unsigned long long)arg1 andSymbolOwner:(NSObject *)arg2;
- (char)addToPersistentCache;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;

@end
