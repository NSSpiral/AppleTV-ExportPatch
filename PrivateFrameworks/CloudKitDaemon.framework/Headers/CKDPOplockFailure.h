/* Runtime dump - CKDPOplockFailure
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPOplockFailure : PBCodable <NSCopying>
{
    CKDPRecord * _recordForOplockFailure;
}

@property (readonly, nonatomic) char hasRecordForOplockFailure;
@property (retain, nonatomic) CKDPRecord * recordForOplockFailure;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPOplockFailure *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setRecordForOplockFailure:(CKDPRecord *)arg0;
- (char)hasRecordForOplockFailure;
- (CKDPRecord *)recordForOplockFailure;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
