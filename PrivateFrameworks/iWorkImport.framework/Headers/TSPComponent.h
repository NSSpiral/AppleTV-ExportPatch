/* Runtime dump - TSPComponent
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponent : NSObject <NSDiscardableContent>
{
    int _accessCount;
    <TSPComponentDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _accessQueue;
    long long _identifier;
    NSString * _preferredLocator;
    NSString * _locator;
    unsigned long long _readVersion;
    unsigned long long _writeVersion;
    unsigned long long _saveToken;
    TSPObject * _strongRootObject;
    TSPObject * _weakRootObject;
    NSHashTable * _writtenObjects;
    TSPComponentExternalReferenceMap * _externalReferenceMap;
    NSMutableSet * _dataReferences;
    struct ? _flags;
    NSDictionary * _objectUUIDToIdentifierDictionary;
    unsigned long long _encodedLength;
}

@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) NSString * preferredLocator;
@property (readonly, nonatomic) NSString * locator;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) unsigned long long writeVersion;
@property (readonly, nonatomic) char isStoredOutsideObjectArchive;
@property (readonly, nonatomic) NSDictionary * objectUUIDToIdentifierDictionary;
@property (readonly, nonatomic) unsigned long long saveToken;
@property (readonly, nonatomic) unsigned long long encodedLength;
@property (readonly) unsigned char packageIdentifier;
@property (retain) TSPObject * rootObject;
@property (readonly) char modified;
@property (readonly) char persisted;
@property (readonly) char needsArchiving;
@property (readonly, nonatomic) char isTransientComponent;

- (char)needsArchiving;
- (unsigned long long)saveToken;
- (unsigned char)packageIdentifier;
- (unsigned long long)writeVersion;
- (void)setModified:(char)arg0 forObject:(NSObject *)arg1;
- (void)setRootObject:(TSPObject *)arg0;
- (NSString *)locator;
- (char)isStoredOutsideObjectArchive;
- (NSDictionary *)objectUUIDToIdentifierDictionary;
- (TSPComponent *)initWithDelegate:(<TSPComponentDelegate> *)arg0 identifier:(long long)arg1 preferredLocator:(NSString *)arg2 packageIdentifier:(unsigned char)arg3 isStoredOutsideObjectArchive:(char)arg4 encodedLength:(unsigned long long)arg5;
- (void)setReadVersion:(unsigned long long)arg0 writeVersion:(unsigned long long)arg1 objectUUIDToIdentifierDictionary:(NSDictionary *)arg2;
- (struct ComponentExternalReferenceInfo)externalReferenceInfoForObjectIdentifier:(long long)arg0;
- (unsigned long long)readVersion;
- (NSString *)preferredLocator;
- (void)setPackageIdentifier:(unsigned char)arg0 preferredLocator:(NSString *)arg1 locator:(NSString *)arg2 isStoredOutsideObjectArchive:(char)arg3 rootObjectOrNil:(id)arg4 archivedObjects:(NSHashTable *)arg5 externalReferenceMap:(TSPComponentExternalReferenceMap *)arg6 dataReferences:(NSMutableSet *)arg7 readVersion:(unsigned long long)arg8 writeVersion:(unsigned long long)arg9 objectUUIDToIdentifierDictionary:(NSDictionary *)arg10 saveToken:(unsigned long long)arg11 encodedLength:(unsigned long long)arg12 wasCopied:(char)arg13 wasModifiedDuringWrite:(char)arg14;
- (void)enumerateDataReferences:(id)arg0;
- (void)enumerateExternalReferences:(id)arg0;
- (id)newExternalReferenceMapWithStrongReferences:(NSHashTable *)arg0 weakReferences:(NSHashTable *)arg1 delegate:(<TSPComponentDelegate> *)arg2;
- (NSObject *)newUpdatedExternalReferenceMapUsingDelegate:(NSObject *)arg0;
- (void)saveToMessage:(struct ComponentInfo *)arg0 saveToken:(unsigned long long)arg1 writtenComponentInfo:(NSDictionary *)arg2;
- (char)shouldForceCaching;
- (char)needsArchivingImpl;
- (char)shouldKeepStrongObjectImpl;
- (char)isTransientComponent;
- (char)isCachingEnabled;
- (void)setModified:(char)arg0 forObject:(NSObject *)arg1 isDocumentUpgrade:(char)arg2;
- (void)setModifiedImpl:(char)arg0 forObject:(NSObject *)arg1;
- (void)setArchivedObjectsImpl:(id)arg0;
- (void)markAsDiscarded;
- (char)addExternalReferenceToObjectOrLazyReference:(NSObject *)arg0 isWeak:(char)arg1 externalReferenceMap:(TSPComponentExternalReferenceMap *)arg2 delegate:(<TSPComponentDelegate> *)arg3;
- (TSPComponent *)initWithDelegate:(<TSPComponentDelegate> *)arg0 rootObject:(TSPObject *)arg1;
- (TSPComponent *)initWithDelegate:(<TSPComponentDelegate> *)arg0 message:(struct ComponentInfo *)arg1 packageIdentifier:(struct ComponentInfo)arg2 encodedLength:(unsigned long long)arg3;
- (void)setLocator:(NSString *)arg0;
- (void)didReadObjects:(NSArray *)arg0;
- (void)willDiscardComponent;
- (char)modified;
- (TSPComponent *)init;
- (long long)identifier;
- (void).cxx_construct;
- (char)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (char)isContentDiscarded;
- (void).cxx_destruct;
- (TSPObject *)rootObject;
- (unsigned long long)encodedLength;
- (char)persisted;

@end
