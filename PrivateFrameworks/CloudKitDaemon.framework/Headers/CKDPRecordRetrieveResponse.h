/* Runtime dump - CKDPRecordRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveResponse : PBCodable <NSCopying>
{
    CKDPRecord * _record;
    char _clientVersionETagMatch;
    struct ? _has;
}

@property (readonly, nonatomic) char hasRecord;
@property (retain, nonatomic) CKDPRecord * record;
@property (nonatomic) char hasClientVersionETagMatch;
@property (nonatomic) char clientVersionETagMatch;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPRecordRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKDPRecord *)record;
- (void)setRecord:(CKDPRecord *)arg0;
- (char)hasRecord;
- (char)clientVersionETagMatch;
- (void)setClientVersionETagMatch:(char)arg0;
- (void)setHasClientVersionETagMatch:(char)arg0;
- (char)hasClientVersionETagMatch;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
