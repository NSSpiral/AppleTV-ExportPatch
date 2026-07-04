/* Runtime dump - CPLChangeBatch
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSFastEnumeration>
{
    NSMutableArray * _records;
    NSMutableDictionary * _additionalRecords;
    NSMutableDictionary * _localResources;
}

@property (readonly, nonatomic) NSArray * records;

+ (char)supportsSecureCoding;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (CPLChangeBatch *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (CPLChangeBatch *)init;
- (NSObject *)objectAtIndexedSubscript:(unsigned int)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSArray *)records;
- (void)addRecord:(NSObject *)arg0;
- (void).cxx_destruct;
- (NSMutableDictionary *)_additionalRecords;
- (void)_setAdditionalRecords:(NSArray *)arg0;
- (NSString *)cplFullDescription;
- (void)addRecordsFromBatch:(id)arg0;
- (void)_addChange:(NSDictionary *)arg0 resultBatch:(id)arg1 changesPerIdentifier:(NSString *)arg2 changesPerClass:(NSObject *)arg3;
- (void)_setRecords:(NSArray *)arg0;
- (void)sortBatch;
- (void)extractInitialDownloadBatch:(id *)arg0 shouldConsiderRecordFilter:(NSObject *)arg1;
- (NSObject *)localResourceOfType:(unsigned int)arg0 forItemWithCloudIdentifier:(NSString *)arg1;
- (void)appendLocalResources:(NSArray *)arg0 forItemWithCloudIdentifier:(NSString *)arg1;
- (void)_addAdditionalRecord:(NSObject *)arg0;
- (NSString *)summaryDescription;
- (CPLChangeBatch *)initWithRecords:(NSArray *)arg0;
- (NSArray *)_initWithRecords:(NSArray *)arg0;
- (NSString *)extractDeletesFromBatchDeletedRecordIdentifiers:(id *)arg0 trashedRecordIdentifiers:(id *)arg1;
- (NSString *)additionalRecordWithIdentifier:(NSString *)arg0;

@end
