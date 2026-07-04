/* Runtime dump - PFUbiquityKnowledgeVector
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying>
{
    NSDictionary * _kv;
    NSDictionary * _storeKVDict;
    unsigned int _hash;
}

@property (readonly, nonatomic) unsigned int hash;
@property (readonly, nonatomic) unsigned int length;

+ (PFUbiquityKnowledgeVector *)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg0;
+ (NSString *)createKnowledgeVectorDictionaryFromString:(NSString *)arg0;

- (NSObject *)transactionNumberForPeerID:(NSObject *)arg0;
- (PFUbiquityKnowledgeVector *)initWithStoreKnowledgeVectorDictionary:(NSDictionary *)arg0;
- (void)updateWithKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (char)isZeroVector;
- (char)isAncestorOfKnowledgeVector:(id)arg0;
- (id)allPeerIDs;
- (char)conflictsWithKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (NSDictionary *)createStoreKnowledgeVectorDictionary;
- (NSObject *)newKnowledgeVectorByDecrementingPeerWithID:(int)arg0;
- (NSString *)createKnowledgeVectorString;
- (id)newKnowledgeVectorBySubtractingVector:(id)arg0;
- (PFUbiquityKnowledgeVector *)initWithKnowledgeVectorString:(NSString *)arg0;
- (PFUbiquityKnowledgeVector *)initWithKnowledgeVectorDictionary:(PFUbiquityKnowledgeVector *)arg0;
- (id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg0;
- (id)createAncestorVectorForConflictingVector:(id)arg0;
- (NSObject *)newKnowledgeVectorByIncrementingPeerWithID:(int)arg0;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg0;
- (void)_updateHash;
- (PFUbiquityKnowledgeVector *)initFromCopy:(id)arg0 storeKVDict:(NSDictionary *)arg1 hash:(unsigned int)arg2;
- (PFUbiquityKnowledgeVector *)initWithKnowledgeVectorDictionary:(PFUbiquityKnowledgeVector *)arg0 andStoreKnowledgeVectorDictionary:(NSDictionary *)arg1;
- (char)hasPeerIDInCommonWith:(id)arg0;
- (char)isDescendantOfKnowledgeVector:(id)arg0;
- (void)decrementToMinimumWithKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (char)canMergeWithKnowledgeVector:(PFUbiquityKnowledgeVector *)arg0;
- (void)dealloc;
- (PFUbiquityKnowledgeVector *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (PFUbiquityKnowledgeVector *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (unsigned int)length;
- (PFUbiquityKnowledgeVector *)copyWithZone:(struct _NSZone *)arg0;

@end
