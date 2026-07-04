/* Runtime dump - TSPArchiver
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPArchiver : TSPArchiverBase
{
    char _flags;
    NSHashTable * _alternates;
    NSArray * _unknownMessages;
    NSObject<OS_dispatch_group> * _archiveGroup;
    NSObject<OS_dispatch_group> * _serializeGroup;
    NSObject<OS_dispatch_data> * _serializedData;
    unsigned long long _documentReadVersion;
    unsigned long long _documentWriteVersion;
    NSHashTable * _aggregatedStrongReferences;
    NSHashTable * _aggregatedWeakReferences;
    NSHashTable * _aggregatedCommandToModelReferences;
    NSHashTable * _aggregatedLazyReferences;
    NSHashTable * _aggregatedDataReferences;
    NSUUID * _objectUUID;
    TSPObject * _explicitComponentRootObject;
}

@property (nonatomic) unsigned long long messageVersion;
@property (readonly, nonatomic) char shouldSaveAlternates;
@property (readonly, nonatomic) NSUUID * objectUUID;
@property (readonly, nonatomic) TSPObject * explicitComponentRootObject;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) char needsArchive;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * archiveGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> * serializeGroup;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> * serializedData;
@property (readonly, nonatomic) unsigned long long documentReadVersion;
@property (readonly, nonatomic) unsigned long long documentWriteVersion;
@property (readonly, nonatomic) NSHashTable * aggregatedStrongReferences;
@property (readonly, nonatomic) NSHashTable * aggregatedWeakReferences;
@property (readonly, nonatomic) NSHashTable * aggregatedCommandToModelReferences;
@property (readonly, nonatomic) NSHashTable * aggregatedLazyReferences;
@property (readonly, nonatomic) NSHashTable * aggregatedDataReferences;
@property (readonly, nonatomic) NSHashTable * alternates;

- (NSUUID *)objectUUID;
- (void)requiresDocumentReadVersion:(unsigned long long)arg0 writeVersion:(unsigned long long)arg1;
- (void)aggregateReferencesFromArchiver:(id)arg0;
- (void)fail;
- (char)updateMessageInfo:(struct MessageInfo *)arg0 withArchiver:(NSKeyedArchiver *)arg1;
- (char)shouldSaveAlternates;
- (void)requiresDocumentVersion:(unsigned long long)arg0;
- (NSString *)addAlternateForMessageVersion:(unsigned long long)arg0;
- (char)beginArchive;
- (char)needsArchive;
- (char)beginWrite;
- (TSPObject *)explicitComponentRootObject;
- (NSObject<OS_dispatch_group> *)archiveGroup;
- (NSObject<OS_dispatch_group> *)serializeGroup;
- (unsigned long long)documentReadVersion;
- (unsigned long long)documentWriteVersion;
- (NSHashTable *)aggregatedStrongReferences;
- (NSHashTable *)aggregatedWeakReferences;
- (NSHashTable *)aggregatedCommandToModelReferences;
- (NSHashTable *)aggregatedLazyReferences;
- (NSHashTable *)aggregatedDataReferences;
- (NSHashTable *)alternates;
- (char)success;
- (void).cxx_destruct;
- (void)cleanup;
- (TSPArchiver *)initWithObject:(TSPObject *)arg0;
- (void)serialize;
- (NSObject<OS_dispatch_data> *)serializedData;
- (void)archive;

@end
