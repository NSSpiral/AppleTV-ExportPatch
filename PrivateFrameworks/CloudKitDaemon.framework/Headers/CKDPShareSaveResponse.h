/* Runtime dump - CKDPShareSaveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareSaveResponse : PBCodable <NSCopying>
{
    CKDPShare * _share;
}

@property (readonly, nonatomic) char hasShare;
@property (retain, nonatomic) CKDPShare * share;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareSaveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setShare:(CKDPShare *)arg0;
- (char)hasShare;
- (CKDPShare *)share;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
