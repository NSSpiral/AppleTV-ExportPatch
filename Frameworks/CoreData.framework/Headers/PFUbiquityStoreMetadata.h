/* Runtime dump - PFUbiquityStoreMetadata
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityStoreMetadata : NSManagedObject

@property (retain, nonatomic) NSDictionary * storeOptions;
@property (readonly, nonatomic) NSURL * ubiquityRootURL;
@property (readonly) PFUbiquityLocation * ubiquityRootLocation;
@property (retain, nonatomic) NSData * storeOptionsBinaryPlistData;
@property (retain, nonatomic) NSString * modelVersionHashString;
@property (retain, nonatomic) NSString * storeURLString;
@property (retain, nonatomic) NSString * ubiquityName;
@property (retain, nonatomic) NSString * storeType;
@property (retain, nonatomic) NSString * ubiquityRootURLString;
@property (retain, nonatomic) NSString * storeIdentifier;
@property (retain, nonatomic) NSString * ubiquityRelativePath;
@property (retain, nonatomic) NSSet * transactionEntries;
@property (retain, nonatomic) NSSet * peerStates;
@property (retain, nonatomic) NSSet * primaryKeyRanges;

+ (NSString *)metadataForStoreWithName:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSString *)storeMetadatasWithName:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSString *)baselineRootDirectoryForUbiquityName:(NSString *)arg0 andUbiquityLogURL:(NSURL *)arg1;
+ (NSString *)allStoreMetadataInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)baselineStoreURLForUbiquityName:(NSString *)arg0 andUbiquityLogURL:(NSURL *)arg1;
+ (NSString *)baselineModelURLForUbiquityName:(NSString *)arg0 andUbiquityLogURL:(NSURL *)arg1;
+ (NSString *)baselineGCModelURLForUbiquityName:(NSString *)arg0 andUbiquityLogURL:(NSURL *)arg1;
+ (NSString *)baselineMetaFileURLForUbiquityName:(NSString *)arg0 andUbiquityLogURL:(NSURL *)arg1;
+ (char)isBaselineRootURL:(NSURL *)arg0;

- (PFUbiquityLocation *)ubiquityRootLocation;
- (NSURL *)ubiquityRootURL;
- (void)setStoreOptions:(NSDictionary *)arg0;
- (NSObject *)peerStateForPeerID:(NSObject *)arg0;
- (PFUbiquityStoreMetadata *)initWithUbiquityName:(NSString *)arg0 andUbiquityRootLocation:(NSObject *)arg1 insertIntoManagedObjectContext:(NSObject *)arg2;
- (void)updateWithStore:(NSObject *)arg0 andRootLocation:(NSObject *)arg1;
- (void)loadFromBaselineMetadata:(NSDictionary *)arg0 withLocalPeerID:(NSString *)arg1;
- (void)updatePeerStatesToMatchKnowledgeVector:(id)arg0;
- (NSDictionary *)storeOptions;

@end
