/* Runtime dump - CKDPShareTokenSaveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenSaveRequest : PBRequest <NSCopying>
{
    NSData * _protectedFullToken;
    CKDPShareIdentifier * _shareId;
    NSData * _shortTokenHash;
}

@property (readonly, nonatomic) char hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier * shareId;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData * shortTokenHash;
@property (readonly, nonatomic) char hasProtectedFullToken;
@property (retain, nonatomic) NSData * protectedFullToken;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareTokenSaveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSData *)protectedFullToken;
- (void)setShareId:(CKDPShareIdentifier *)arg0;
- (void)setShortTokenHash:(NSData *)arg0;
- (void)setProtectedFullToken:(NSData *)arg0;
- (char)hasShareId;
- (char)hasShortTokenHash;
- (char)hasProtectedFullToken;
- (CKDPShareIdentifier *)shareId;
- (NSData *)shortTokenHash;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
