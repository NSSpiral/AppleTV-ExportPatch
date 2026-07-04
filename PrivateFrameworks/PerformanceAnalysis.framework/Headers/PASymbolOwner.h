/* Runtime dump - PASymbolOwner
 * Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolOwner : NSObject <PASerializable>
{
    NSString * _name;
    NSString * _path;
    NSUUID * _uuid;
    unsigned long long _textSegmentLength;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSString * _bundleShortVersion;
    NSString * _binaryVersion;
    NSMutableArray * _symbols;
    NSArray * _oldSymbols;
    PASymbol * _testSymbol;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSString * name;
@property (retain) NSString * path;
@property (readonly) NSUUID * uuid;
@property (readonly) unsigned long long textSegmentLength;
@property (readonly) NSString * bundleIdentifier;
@property (readonly) NSString * bundleVersion;
@property (readonly) NSString * bundleShortVersion;
@property (readonly) NSString * binaryVersion;

+ (NSString *)classDictionaryKey;
+ (NSObject *)newInstanceWithoutReferencesFromBufferPosition:(void *)arg0;

- (void)dealloc;
- (NSString *)debugDescription;
- (NSString *)name;
- (NSString *)bundleIdentifier;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (NSUUID *)uuid;
- (NSString *)bundleVersion;
- (unsigned int)_insertionIndexInSymbols:(id)arg0 forSymbolWithOffsetIntoSymbolOwner:(unsigned long long)arg1;
- (NSObject *)_symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg0 inSymbols:(BRKeyboardJapaneseRomanSymbols *)arg1;
- (void)gatherBundleInfo;
- (void)incorporateDataFromCSSymbolOwner:(struct _CSTypeRef)arg0 andPath:(NSString *)arg1;
- (PASymbolOwner *)initWithCSSymbolOwnerRef:(struct _CSTypeRef)arg0 andPath:(NSString *)arg1;
- (id)addSymbol:(WDSymbol *)arg0;
- (NSObject *)symbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg0;
- (NSObject *)oldSymbolContainingOffsetIntoSymbolOwner:(unsigned long long)arg0;
- (void)incorporateDataFromPACSSymbolOwner:(NSObject *)arg0;
- (PASymbolOwner *)initWithUUID:(NSString *)arg0 andPath:(NSString *)arg1;
- (PASymbolOwner *)initWithCSSymbolOwnerRef:(struct _CSTypeRef)arg0;
- (PASymbolOwner *)initWithPACSSymbolOwner:(NSObject *)arg0;
- (int)compareInfoRichnessToSymbolOwner:(NSObject *)arg0;
- (unsigned long long)textSegmentLength;
- (NSString *)bundleShortVersion;
- (NSString *)binaryVersion;
- (void)addSelfToSerializationDictionary:(NSDictionary *)arg0;
- (unsigned long)sizeInBytesForSerializedVersion;
- (char)addSelfToBufferAtPosition:(void *)arg0 withCompletedSerializationDictionary:(NSDictionary *)arg1;
- (void)populateReferencesUsingBufferPosition:(void *)arg0 andDeserializationDictionary:(void)arg1 andDataBufferDictionary:(NSDictionary *)arg2;
- (char)containsSymbol:(id)arg0;
- (NSObject *)_initWithSerializedSymbolOwner:(struct ? *)arg0;

@end
