/* Runtime dump - TSPUnarchiver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnarchiver : NSObject
{
    unsigned int _messageType;
    struct auto_ptr<google::protobuf::Message> _message;
    long long _objectIdentifier;
    struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > _strongReferences;
    unsigned long long _messageVersion;
    TSPUnknownContent * _unknownContent;
    <TSPObjectDelegate> * _objectDelegate;
    <TSPLazyReferenceDelegate> * _lazyReferenceDelegate;
    <TSPUnarchiverDelegate> * _delegate;
    struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > _references;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > _repeatedReferences;
    struct vector<void (^)(), std::__1::allocator<void (^)()> > _finalizeHandlers;
}

@property (readonly, nonatomic) char hasPreUFFVersion;
@property (readonly, nonatomic) unsigned long long preUFFVersion;
@property (readonly, nonatomic) char isFromCopy;
@property (readonly, nonatomic) char isCrossDocumentPaste;
@property (readonly, nonatomic) char isCrossAppPaste;
@property (readonly, nonatomic) unsigned int messageType;
@property (readonly, nonatomic) unsigned long long messageVersion;
@property (readonly, nonatomic) unsigned long long fileFormatVersion;
@property (readonly, nonatomic) char documentHasCurrentFileFormatVersion;
@property (readonly, nonatomic) char hasDocumentVersionUUID;
@property (readonly, nonatomic) long long objectIdentifier;
@property (readonly, nonatomic) NSUUID * objectUUID;
@property (readonly, nonatomic) TSPUnknownContent * unknownContent;
@property (readonly, weak, nonatomic) <TSPObjectDelegate> * objectDelegate;
@property (readonly, weak, nonatomic) <TSPUnarchiverDelegate> * delegate;
@property (readonly, nonatomic) char canValidateReferences;

- (long long)objectIdentifier;
- (TSPUnknownContent *)unknownContent;
- (<TSPObjectDelegate> *)objectDelegate;
- (NSUUID *)objectUUID;
- (unsigned long long)fileFormatVersion;
- (unsigned long long)messageVersion;
- (struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > *)strongReferences;
- (void)readWeakReferenceMessage:(struct Reference *)arg0 completion:(struct Reference)arg1;
- (void)readReferenceMessage:(struct Reference *)arg0 isWeak:(struct Reference)arg1 validateStrongReferences:(id)arg2 allowUnknownObject:(NSObject *)arg3 selector:(unsigned int)arg4 weakSelector:(NSString *)arg5 completion:(int)arg6;
- (void)validateReferenceToObjectIdentifier:(long long)arg0 isWeak:(char *)arg1 validateStrongReferences:(char)arg2 selector:(SEL)arg3 weakSelector:(SEL)arg4;
- (void)readRepeatedReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 isWeak:(struct RepeatedPtrField<TSP::Reference>)arg1 validateStrongReferences:(char)arg2 allowUnknownObject:(char)arg3 selector:(char)arg4 completion:(SEL)arg5;
- (void)readRepeatedWeakReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 completion:(struct RepeatedPtrField<TSP::Reference>)arg1;
- (void)readLazyReferenceMessage:(struct Reference *)arg0 isWeak:(struct Reference)arg1 validateStrongReferences:(id)arg2 allowUnknownObject:(NSObject *)arg3 selector:(unsigned int)arg4 delegate:(<TSPUnarchiverDelegate> *)arg5 completion:(int)arg6;
- (void)readWeakLazyReferenceMessage:(struct Reference *)arg0 completion:(struct Reference)arg1;
- (void)readRepeatedLazyReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 isWeak:(struct RepeatedPtrField<TSP::Reference>)arg1 validateStrongReferences:(char)arg2 allowUnknownObject:(char)arg3 selector:(char)arg4 delegate:(SEL)arg5 completion:(id /* block */)arg6;
- (void)readRepeatedWeakLazyReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 completion:(struct RepeatedPtrField<TSP::Reference>)arg1;
- (char)hasDocumentVersionUUID;
- (void)readWeakReferenceToObjectUUID:(id)arg0 delegate:(<TSPUnarchiverDelegate> *)arg1 completion:(id /* block */)arg2;
- (char)canValidateReferences;
- (void)readReferenceMessage:(struct Reference *)arg0 completion:(struct Reference)arg1;
- (void)readUnownedReferenceMessage:(struct Reference *)arg0 completion:(struct Reference)arg1;
- (void)readRepeatedReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 completion:(struct RepeatedPtrField<TSP::Reference>)arg1;
- (void)readRepeatedUnownedReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 completion:(struct RepeatedPtrField<TSP::Reference>)arg1;
- (void)readLazyReferenceMessage:(struct Reference *)arg0 completion:(struct Reference)arg1;
- (void)readRepeatedLazyReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 completion:(struct RepeatedPtrField<TSP::Reference>)arg1;
- (NSString *)readDataReferenceMessage:(struct DataReference *)arg0;
- (char)documentHasCurrentFileFormatVersion;
- (void)addFinalizeHandler:(id /* block */)arg0;
- (NSString *)readWeakObjectUUIDReferenceMessage:(struct UUID *)arg0 completion:(struct UUID)arg1;
- (NSString *)readWeakObjectUUIDPathReferenceMessage:(struct UUIDPath *)arg0 completion:(struct UUIDPath)arg1;
- (NSString *)readRepeatedWeakObjectUUIDReferenceMessage:(struct RepeatedPtrField<TSP::UUID> *)arg0 completion:(struct RepeatedPtrField<TSP::UUID>)arg1;
- (NSString *)readRepeatedWeakObjectUUIDPathReferenceMessage:(struct RepeatedPtrField<TSP::UUIDPath> *)arg0 completion:(struct RepeatedPtrField<TSP::UUIDPath>)arg1;
- (TSPUnarchiver *)initWithMessageType:(unsigned int)arg0 message:(struct auto_ptr<google::protobuf::Message>)arg1 identifier:(NSString *)arg2 strongReferences:(long long)arg3 fieldInfos:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > >)arg4 messageVersion:(unsigned long long)arg5 unknownMessages:(struct auto_ptr<TSP::FieldInfoTree>)arg6 ignoreVersionChecking:(id)arg7 objectDelegate:(unsigned long long)arg8 lazyReferenceDelegate:(<TSPLazyReferenceDelegate> *)arg9 delegate:(char)arg10 error:(NSError *)arg11;
- (struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > *)repeatedReferences;
- (struct vector<void (^)(), std::__1::allocator<void (^)()> > *)finalizeHandlers;
- (void)readRepeatedLazyReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 isWeak:(struct RepeatedPtrField<TSP::Reference>)arg1 validateStrongReferences:(char)arg2 allowUnknownObject:(char)arg3 selector:(char)arg4 completion:(SEL)arg5;
- (void)readReferenceMessage1:(struct Reference *)arg0 message2:(struct Reference)arg1 completion:(id /* block */)arg2;
- (void)readWeakReferenceMessage1:(struct Reference *)arg0 message2:(struct Reference)arg1 completion:(id /* block */)arg2;
- (void)readReferenceMessage:(struct Reference *)arg0 repeatedMessage:(struct Reference)arg1 completion:(id /* block */)arg2;
- (void)readWeakReferenceMessage:(struct Reference *)arg0 repeatedMessage:(struct Reference)arg1 completion:(id /* block */)arg2;
- (char)isFromCopy;
- (char)isCrossDocumentPaste;
- (char)isCrossAppPaste;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)filterIdentifiers:(struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > *)arg0;
- (unsigned long long)preUFFVersion;
- (char)hasPreUFFVersion;
- (void)readSparseReferenceArrayMessage:(struct SparseReferenceArray *)arg0 isWeak:(struct SparseReferenceArray)arg1 completion:(id /* block */)arg2;
- (void)readSparseReferenceArrayMessage:(struct SparseReferenceArray *)arg0 completion:(struct SparseReferenceArray)arg1;
- (void)readSparseWeakReferenceArrayMessage:(struct SparseReferenceArray *)arg0 completion:(struct SparseReferenceArray)arg1;
- (NSString *)readSparseWeakObjectUUIDReferenceArrayMessage:(struct SparseUUIDArray *)arg0;
- (NSString *)readSparseWeakObjectUUIDPathReferenceArrayMessage:(struct SparseUUIDPathArray *)arg0;
- (unsigned int)messageType;
- (<TSPUnarchiverDelegate> *)delegate;
- (struct Message *)message;
- (void).cxx_construct;
- (void).cxx_destruct;
- (struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > *)references;

@end
