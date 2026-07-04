/* Runtime dump - PFUbiquityBaselineMetadata
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineMetadata : NSObject <NSCoding>
{
    NSString * _storeName;
    NSString * _authorPeerID;
    NSString * _modelVersionHash;
    PFUbiquityLocation * _rootLocation;
    PFUbiquityKnowledgeVector * _pKV;
    PFUbiquityKnowledgeVector * _kv;
    NSMutableDictionary * _peerRanges;
}

@property (readonly) NSString * storeName;
@property (readonly) NSString * authorPeerID;
@property (readonly) NSString * modelVersionHash;
@property (readonly) PFUbiquityLocation * rootLocation;
@property (readonly, nonatomic) PFUbiquityKnowledgeVector * previousKnowledgeVector;
@property (readonly) PFUbiquityKnowledgeVector * knowledgeVector;
@property (readonly) NSDictionary * peerRanges;

- (PFUbiquityBaselineMetadata *)initWithLocalPeerID:(NSString *)arg0 storeName:(NSString *)arg1 modelVersionHash:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
- (NSString *)modelVersionHash;
- (NSString *)storeName;
- (PFUbiquityKnowledgeVector *)knowledgeVector;
- (void)setKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (NSDictionary *)peerRanges;
- (char)gatherMetadataWithStore:(NSObject *)arg0 andError:(id *)arg1;
- (NSString *)authorPeerID;
- (PFUbiquityKnowledgeVector *)previousKnowledgeVector;
- (id)createNewLocalRangeWithRangeStart:(unsigned int)arg0 andRangeEnd:(unsigned int)arg1 forEntityNamed:(id)arg2;
- (void)addDictionaryForPeerRange:(NSObject *)arg0;
- (NSDictionary *)createPeerRangeDictionary:(NSDictionary *)arg0;
- (void)setPreviousKnowledgeVectorFromCurrentMetadata:(NSDictionary *)arg0;
- (void)_migrateToModelVersionHash:(id)arg0;
- (PFUbiquityLocation *)rootLocation;
- (void)dealloc;
- (PFUbiquityBaselineMetadata *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (PFUbiquityBaselineMetadata *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end
