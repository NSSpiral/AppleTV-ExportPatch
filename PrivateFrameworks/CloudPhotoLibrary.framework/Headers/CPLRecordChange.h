/* Runtime dump - CPLRecordChange
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying>
{
    unsigned int _alterationTypeFlags;
    char _shouldFilterDefaultValuesForNewProperties;
    char _isSparseFullChange;
    char _inTrash;
    char _inExpunged;
    NSString * _identifier;
    NSDate * _recordModificationDate;
    unsigned int _changeType;
    NSDate * _dateDeleted;
    NSString * _realIdentifier;
    NSData * _recordChangeData;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSDate * recordModificationDate;
@property (nonatomic) unsigned int changeType;
@property (copy, nonatomic) NSDate * dateDeleted;
@property (nonatomic) char inTrash;
@property (nonatomic) char inExpunged;
@property (copy, nonatomic) NSString * realIdentifier;
@property (copy, nonatomic) NSData * recordChangeData;

+ (char)supportsSecureCoding;
+ (NSObject *)cplAdditionalSecureClassesForProperty:(NSString *)arg0;
+ (Class)classForStoredClassName:(NSString *)arg0 forCPLArchiver:(CPLArchiver *)arg1;
+ (NSString *)newChangeWithIdentifier:(NSString *)arg0 changeType:(unsigned int)arg1;
+ (NSString *)deleteChangeWithIdentifier:(NSString *)arg0;
+ (NSObject *)descriptionForChangeType:(unsigned int)arg0;
+ (NSObject *)newRecord;
+ (NSObject *)_descriptionForChangeType:(unsigned int)arg0 isSparseFullChange:(char)arg1;
+ (NSObject *)newChangeWithType:(unsigned int)arg0;
+ (NSString *)newRecordWithIdentifier:(NSString *)arg0;
+ (int)maxInlineDataSize;

- (CPLRecordChange *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (CPLRecordChange *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (char)isDelete;
- (int)dequeueOrder;
- (NSString *)resourcesDescription;
- (NSObject *)propertiesForChangeType:(unsigned int)arg0;
- (NSString *)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg0;
- (void)prepareForStorage;
- (void)awakeFromStorage;
- (NSString *)cplFullDescription;
- (id)storedClassNameForCPLArchiver:(id)arg0;
- (NSError *)proposedCloudIdentifierWithError:(id *)arg0;
- (NSString *)proposedLocalIdentifier;
- (NSString *)identifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(id *)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg0 error:(id *)arg1;
- (NSString *)relatedIdentifier;
- (void)setRelatedIdentifier:(NSString *)arg0;
- (NSString *)realIdentifier;
- (NSData *)recordChangeData;
- (void)markAsSparseFullChange;
- (NSString *)secondaryIdentifier;
- (void)setSecondaryIdentifier:(NSString *)arg0;
- (char)applyChange:(NSDictionary *)arg0 copyPropertiesToFinalChange:(NSDictionary *)arg1 forChangeType:(unsigned int)arg2 updatedProperty:(id *)arg3;
- (NSDictionary *)realRecordChangeFromRecordChange:(NSDictionary *)arg0 newRecord:(id *)arg1 updatedProperties:(id *)arg2;
- (char)encodePropertiesInObject:(NSObject *)arg0;
- (char)decodePropertiesFromObject:(NSObject *)arg0;
- (NSDictionary *)realRecordChangeFromRecordChange:(NSDictionary *)arg0 newRecord:(id *)arg1;
- (NSDictionary *)mergeRecordChangeWithNewRecordChange:(NSDictionary *)arg0;
- (char)shouldApplyPropertiesWithSelector:(SEL)arg0;
- (void)setShouldFilterDefaultValuesForNewProperties:(char)arg0;
- (char)shouldFilterDefaultValuesForNewProperties;
- (char)isSparseFullChange;
- (unsigned int)alterationTypeFlags;
- (void)setAlterationTypeFlags:(unsigned int)arg0;
- (void)setRealIdentifier:(NSString *)arg0;
- (void)setRecordChangeData:(NSData *)arg0;
- (id)compactedChangeWithRelatedChanges:(id)arg0 isOnlyChange:(char)arg1 usingClientCache:(NSObject *)arg2;
- (char)_addRealChangeToChangeBatch:(id)arg0 withStoredRecord:(NSObject *)arg1 andApplyToClientCache:(NSObject *)arg2 error:(id *)arg3;
- (char)addExpandedChangesToChangeBatch:(id)arg0 andApplyToClientCache:(NSObject *)arg1 error:(id *)arg2;
- (NSString *)propertiesDescription;
- (void)setChangeType:(unsigned int)arg0;
- (void)setResources:(NSArray *)arg0;
- (NSArray *)resources;
- (char)isFullRecord;
- (char)hasChangeType:(unsigned int)arg0;
- (unsigned int)changeType;
- (char)inExpunged;
- (void)setInTrash:(char)arg0;
- (void)setInExpunged:(char)arg0;
- (void)setDateDeleted:(NSDate *)arg0;
- (NSObject *)resourceForType:(unsigned int)arg0;
- (void)setRecordModificationDate:(NSDate *)arg0;
- (NSDate *)recordModificationDate;
- (char)inTrash;
- (NSDate *)dateDeleted;
- (char)supportsResources;
- (unsigned long long)realResourceSize;
- (unsigned long long)totalResourceSize;

@end
