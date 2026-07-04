/* Runtime dump - CKDPRecordRetrieveChangesResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying>
{
    NSMutableArray * _changedRecords;
    NSMutableArray * _changedShares;
    NSData * _clientChangeToken;
    int _status;
    NSData * _syncContinuationToken;
    struct ? _has;
}

@property (retain, nonatomic) NSMutableArray * changedRecords;
@property (readonly, nonatomic) char hasSyncContinuationToken;
@property (retain, nonatomic) NSData * syncContinuationToken;
@property (readonly, nonatomic) char hasClientChangeToken;
@property (retain, nonatomic) NSData * clientChangeToken;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray * changedShares;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveChangesResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setClientChangeToken:(NSData *)arg0;
- (char)hasClientChangeToken;
- (NSData *)clientChangeToken;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (void)addChangedRecord:(NSObject *)arg0;
- (void)addChangedShare:(id)arg0;
- (unsigned int)changedRecordsCount;
- (void)clearChangedRecords;
- (NSObject *)changedRecordAtIndex:(unsigned int)arg0;
- (void)setSyncContinuationToken:(NSData *)arg0;
- (unsigned int)changedSharesCount;
- (void)clearChangedShares;
- (NSObject *)changedShareAtIndex:(unsigned int)arg0;
- (char)hasSyncContinuationToken;
- (NSMutableArray *)changedRecords;
- (void)setChangedRecords:(NSMutableArray *)arg0;
- (NSData *)syncContinuationToken;
- (NSMutableArray *)changedShares;
- (void)setChangedShares:(NSMutableArray *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
