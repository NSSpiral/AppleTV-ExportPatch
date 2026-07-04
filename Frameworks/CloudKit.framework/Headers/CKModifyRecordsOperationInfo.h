/* Runtime dump - CKModifyRecordsOperationInfo
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    char _atomic;
    char _shouldOnlySaveAssetContent;
    NSArray * _recordsToSave;
    NSArray * _recordIDsToDelete;
    NSData * _clientChangeTokenData;
    int _savePolicy;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSDictionary * _conflictLosersToResolveByRecordID;
}

@property (retain, nonatomic) NSArray * recordsToSave;
@property (retain, nonatomic) NSArray * recordIDsToDelete;
@property (retain, nonatomic) NSData * clientChangeTokenData;
@property (nonatomic) char atomic;
@property (nonatomic) int savePolicy;
@property (nonatomic) char shouldOnlySaveAssetContent;
@property (copy, nonatomic) NSDictionary * recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary * conflictLosersToResolveByRecordID;

+ (char)supportsSecureCoding;

- (CKModifyRecordsOperationInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (void)setShouldOnlySaveAssetContent:(char)arg0;
- (void)setSavePolicy:(int)arg0;
- (void)setAtomic:(char)arg0;
- (NSDictionary *)recordIDsToDeleteToEtags;
- (NSArray *)recordsToSave;
- (NSDictionary *)conflictLosersToResolveByRecordID;
- (void)setRecordsToSave:(NSArray *)arg0;
- (void)setRecordIDsToDelete:(NSArray *)arg0;
- (void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg0;
- (void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg0;
- (void)setClientChangeTokenData:(NSData *)arg0;
- (NSArray *)recordIDsToDelete;
- (int)savePolicy;
- (NSData *)clientChangeTokenData;
- (char)shouldOnlySaveAssetContent;
- (char)atomic;

@end
