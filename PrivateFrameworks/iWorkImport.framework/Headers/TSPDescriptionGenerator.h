/* Runtime dump - TSPDescriptionGenerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDescriptionGenerator : NSObject
{
    TSPObjectContext * _context;
    unsigned int _options;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableOrderedSet * _components;
    struct map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage> > > _messageMap;
    NSMutableDictionary * _objects;
    NSMutableDictionary * _uuidMap;
    NSMutableDictionary * _inverseUUIDMap;
    NSMutableDictionary * _dataMap;
}

+ (char)dumpMessagesForDocument:(NSObject *)arg0 decryptionKey:(SFUCryptoKey *)arg1 toURL:(NSURL *)arg2;
+ (TSPDescriptionGenerator *)directoryForDocumentUUID:(id)arg0 versionUUID:(NSUUID *)arg1;
+ (NSString *)filenameForPackageIdentifier:(unsigned char)arg0;

- (struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > *)_strongReferencesFromArchiver:(id)arg0;
- (struct /* ? */ *)_messageAlternateMapFromAlternateArchivers:(id)arg0;
- (void)processPackageMetadataMessage:(struct shared_ptr<google::protobuf::Message>)arg0;
- (id /* block */)newObjectIdentifierForUUIDHandler;
- (id /* block */)newPrinterCustomPropertiesHandler;
- (id /* block */)newDataDigestHandler;
- (char)dumpMessagesToFilePath:(NSString *)arg0;
- (struct ReferencePrinter *)newReferencePrinter;
- (char)dumpComponentMessages:(id)arg0 printNewLine:(char)arg1 withPrinter:(struct ReferencePrinter *)arg2 outputStream:(struct set<unsigned long long, std::__1::less<unsigned long long>, std::__1::allocator<unsigned long long> >)arg3;
- (void)performPrintOperationBlock:(id /* block */)arg0;
- (void)addUUIDMapEntriesForComponent:(id)arg0;
- (void)addMessage:(struct Message *)arg0 withStrongReferencesMap:(struct Message)arg1 forObjectIdentifier:(struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > *)arg2;
- (void)addArchiver:(NSArchiver *)arg0;
- (char)dumpMessagesForDocumentUUID:(id)arg0 versionUUID:(NSUUID *)arg1 packageIdentifier:(unsigned char)arg2;
- (NSString *)descriptionForIdentifier:(long long)arg0;
- (TSPDescriptionGenerator *)initWithContext:(TSPObjectContext *)arg0 options:(unsigned int)arg1;
- (TSPDescriptionGenerator *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)addComponent:(_UIDatePickerComponent *)arg0;

@end
