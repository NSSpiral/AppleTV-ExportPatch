/* Runtime dump - CKDPRecordRetrieveVersionsResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying>
{
    NSMutableArray * _recordVersions;
    char _isDeleted;
    struct ? _has;
}

@property (nonatomic) char hasIsDeleted;
@property (nonatomic) char isDeleted;
@property (retain, nonatomic) NSMutableArray * recordVersions;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveVersionsResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addRecordVersions:(id)arg0;
- (unsigned int)recordVersionsCount;
- (void)clearRecordVersions;
- (NSObject *)recordVersionsAtIndex:(unsigned int)arg0;
- (void)setIsDeleted:(char)arg0;
- (void)setHasIsDeleted:(char)arg0;
- (char)hasIsDeleted;
- (NSMutableArray *)recordVersions;
- (void)setRecordVersions:(NSMutableArray *)arg0;
- (char)isDeleted;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
