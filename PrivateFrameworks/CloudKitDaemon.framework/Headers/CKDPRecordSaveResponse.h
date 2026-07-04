/* Runtime dump - CKDPRecordSaveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordSaveResponse : PBCodable <NSCopying>
{
    NSString * _etag;
    CKDPRecord * _serverFields;
    CKDPDateStatistics * _timeStatistics;
}

@property (readonly, nonatomic) char hasEtag;
@property (retain, nonatomic) NSString * etag;
@property (readonly, nonatomic) char hasTimeStatistics;
@property (retain, nonatomic) CKDPDateStatistics * timeStatistics;
@property (readonly, nonatomic) char hasServerFields;
@property (retain, nonatomic) CKDPRecord * serverFields;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordSaveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (char)hasEtag;
- (NSString *)etag;
- (void)setTimeStatistics:(CKDPDateStatistics *)arg0;
- (void)setServerFields:(CKDPRecord *)arg0;
- (char)hasTimeStatistics;
- (char)hasServerFields;
- (CKDPDateStatistics *)timeStatistics;
- (CKDPRecord *)serverFields;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
