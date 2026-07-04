/* Runtime dump - TSPPasteboardWriteAssistant
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardWriteAssistant : NSObject <TSPEncoderWriteCoordinatorDelegate, TSPPasteboardWriting, TSPProxyObjectMapping>
{
    TSPObjectContext * _pasteboardContext;
    TSPPasteboardObject * _pasteboardObject;
    TSPMemoryEncoder * _encoder;
    TSPEncoderWriteCoordinator * _writeCoordinator;
    NSMutableDictionary * _dataProviderMap;
    NSMutableOrderedSet * _dataProviderTypes;
    char _shouldRefuseAdditionalDataProviders;
    TSPPasteboard * _nativeDataPasteboard;
    TSPPasteboardNativeDataProvider * _nativeDataProvider;
    long _writeNativeDataToPasteboardOnceToken;
    long _nativeDataOnceToken;
    char _didAttemptToSerializeNativeData;
    char _excludeNativeData;
    NSDictionary * _contentDescription;
}

@property (readonly, nonatomic) TSPObjectContext * pasteboardContext;
@property (readonly, nonatomic) TSPPasteboardObject * pasteboardObject;
@property (copy, nonatomic) NSDictionary * contentDescription;
@property (nonatomic) char excludeNativeData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPObjectContext *)pasteboardContext;
- (TSPPasteboardObject *)pasteboardObject;
- (id)writableTypesForPasteboard:(id)arg0;
- (NSObject *)pasteboardPropertyListForType:(NSObject *)arg0;
- (NSObject *)proxyForReferencedObject:(NSObject *)arg0;
- (int)componentWriterMode;
- (NSObject *)createMetadataForRootObject:(NSObject *)arg0 dataArchiver:(id)arg1 objectUUIDToIdentifierDictionary:(NSDictionary *)arg2 externalReferences:(id)arg3 weakExternalReferences:(id)arg4 lazyReferences:(NSHashTable *)arg5 dataReferences:(NSHashTable *)arg6 error:(id *)arg7;
- (char)skipMetadataObjectSerialization;
- (void)delayArchivingOfObject:(NSObject *)arg0;
- (void)setProxy:(NSObject *)arg0 forReferencedObject:(NSObject *)arg1;
- (id)tspPasteboardWithPasteboard:(TSPPasteboard *)arg0;
- (char)excludeNativeData;
- (void)waitForNativeDataIfNeeded;
- (void)writeNativeDataToPasteboard:(id)arg0;
- (void)setDataProvider:(NSObject *)arg0 forTypes:(NSArray *)arg1;
- (void)setExcludeNativeData:(char)arg0;
- (TSPPasteboardWriteAssistant *)initWithContext:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)setContentDescription:(NSDictionary *)arg0;
- (NSDictionary *)contentDescription;
- (void)loadData;

@end
