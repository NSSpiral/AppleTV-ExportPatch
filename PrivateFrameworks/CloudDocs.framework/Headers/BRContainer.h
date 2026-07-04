/* Runtime dump - BRContainer
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainer : NSObject <NSSecureCoding>
{
    NSString * _identifier;
    NSMutableDictionary * _propertiesByBundleID;
    NSMultiReadUniWriteLock * _readWriteLock;
    long _lastServerUpdateOnceToken;
    NSDate * _lastServerUpdate;
    long _currentStatusOnceToken;
    NSData * _sbExtension;
    unsigned int _currentStatus;
    char _isOverQuota;
    char _isCloudSyncTCCDisabled;
    char _isInInitialState;
    char _isDocumentScopePublic;
}

@property (readonly, nonatomic) NSData * propertiesData;
@property (nonatomic) unsigned int currentStatus;
@property (retain, nonatomic) NSDate * lastServerUpdate;
@property (nonatomic) char overQuota;
@property (readonly, copy, nonatomic) NSSet * bundleIdentifiers;
@property (readonly, nonatomic) NSString * identifier;
@property (readonly, nonatomic) NSString * localizedName;
@property (readonly, nonatomic) char isDocumentScopePublic;
@property (nonatomic) char isInInitialState;
@property (readonly, nonatomic) NSString * supportedFolderLevels;
@property (readonly, nonatomic) NSURL * documentsURL;
@property (readonly, nonatomic) NSSet * documentsTypes;
@property (readonly, nonatomic) NSSet * exportedTypes;
@property (readonly, nonatomic) NSSet * importedTypes;
@property (readonly, retain, nonatomic) NSDate * lastServerUpdate;
@property (readonly, nonatomic) unsigned int currentStatus;
@property (readonly, nonatomic) char overQuota;
@property (nonatomic) char isCloudSyncTCCDisabled;

+ (char)supportsSecureCoding;
+ (BRContainer *)documentContainers;
+ (NSObject *)allContainersByContainerID;
+ (char)versionOfBundle:(NSObject *)arg0 changedFromVersion:(NSString *)arg1;
+ (BRContainer *)classesForDecoding;
+ (BRContainer *)containerRepositoryURLForIdentifier:(NSString *)arg0;
+ (NSString *)URLForPlistOfContainerIdentifier:(NSString *)arg0;
+ (BRContainer *)allContainers;
+ (NSObject *)localizedNameForDefaultCloudDocsContainer;
+ (NSObject *)readMetadataForContainerID:(NSObject *)arg0 fromPlistAtPath:(NSString *)arg1 createIfMissing:(char)arg2 error:(id *)arg3;
+ (BRContainer *)containerInRepositoryURL:(NSURL *)arg0 createIfMissing:(char)arg1 error:(id *)arg2;
+ (BRContainer *)containerInRepositoryURL:(NSURL *)arg0 error:(id *)arg1;
+ (BRContainer *)containerForItemAtURL:(NSURL *)arg0 error:(id *)arg1;
+ (BRContainer *)containerIDFromSharedMangledID:(NSObject *)arg0;
+ (NSObject *)ownerNameFromSharedMangledID:(NSObject *)arg0;
+ (char)validateOwnerName:(NSString *)arg0;
+ (void)_generateiOSIconsIntoDict:(id)arg0 usingBundle:(NSObject *)arg1;
+ (NSObject *)propertiesForContainerID:(NSObject *)arg0 usingBundle:(NSObject *)arg1 minimumBundleVersion:(NSString *)arg2 bundleIcons:(id *)arg3;
+ (BRContainer *)containersRepositoryURL;
+ (BRContainer *)sharedMangledIDWithContainerID:(NSObject *)arg0 ownerName:(NSString *)arg1;
+ (void)postContainerListUpdateNotification;
+ (NSObject *)privateMangledContainerID:(NSObject *)arg0;
+ (char)validateContainerID:(NSObject *)arg0;
+ (void)postContainerStatusChangeNotificationWithID:(int)arg0 key:(NSString *)arg1 value:(NSObject *)arg2;
+ (char)validateSharedMangledID:(NSObject *)arg0;
+ (NSObject *)privateUnmangledContainerID:(NSObject *)arg0;
+ (BRContainer *)containerForContainerID:(NSObject *)arg0;

- (void)dealloc;
- (BRContainer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)localizedName;
- (NSURL *)documentsURL;
- (char)isInInitialState;
- (NSSet *)documentsTypes;
- (NSObject *)imageDataForSize:(struct CGSize)arg0 scale:(int)arg1 isiOSIcon:(char *)arg2;
- (id)imageRepresentationsAvailable;
- (NSString *)shortDescription;
- (void)_computeCachedProperties;
- (NSURL *)containerRepositoryURL;
- (NSEnumerator *)bundleIdentifiersEnumerator;
- (NSLocale *)localizedNameForLocale:(NSObject *)arg0;
- (NSObject *)enumeratorOfBundleProperty:(NSObject *)arg0 valuesOfClass:(Class)arg1;
- (char)_getIsDocumentScopePublic;
- (NSString *)pathForIconName:(NSString *)arg0;
- (BRContainer *)initWithContainerID:(NSObject *)arg0 propertiesByBundleID:(NSMutableDictionary *)arg1;
- (NSDictionary *)pathForPlist;
- (NSString *)supportedFolderLevels;
- (NSSet *)exportedTypes;
- (NSSet *)importedTypes;
- (NSObject *)imageDataForSize:(struct CGSize)arg0 scale:(int)arg1;
- (void)_performWhileAccessingSecurityScopedContainer:(NSObject *)arg0;
- (NSDate *)lastServerUpdate;
- (void)setLastServerUpdate:(NSDate *)arg0;
- (unsigned int)currentStatus;
- (void)setCurrentStatus:(unsigned int)arg0;
- (char)isOverQuota;
- (char)isCloudSyncTCCDisabled;
- (char)deleteAllContentsOnClientAndServer:(id *)arg0;
- (char)_setProperties:(NSDictionary *)arg0 stagedBundleIconPaths:(NSArray *)arg1 bundleIconsDict:(id)arg2 salt:(id)arg3 needsRefresh:(char)arg4;
- (NSString *)mangledID;
- (char)setPropertiesFromRecordData:(NSData *)arg0 stagedBundleIconPaths:(NSArray *)arg1 salt:(id)arg2;
- (char)hasIconWithName:(NSString *)arg0;
- (NSData *)propertiesData;
- (id)iconURLs;
- (char)hasMostRecentMetadataForBundleID:(NSObject *)arg0;
- (char)setPropertiesFromExtractorDict:(id)arg0 bundleIcons:(id)arg1 forBundleIdentifier:(NSString *)arg2 salt:(id)arg3;
- (NSString *)versionNumberForBundleIdentifier:(NSString *)arg0;
- (NSSet *)bundleIdentifiers;
- (void)setIsCloudSyncTCCDisabled:(char)arg0;
- (void)setIsInInitialState:(char)arg0;
- (char)isDocumentScopePublic;

@end
