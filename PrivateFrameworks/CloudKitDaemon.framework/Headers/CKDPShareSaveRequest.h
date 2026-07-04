/* Runtime dump - CKDPShareSaveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareSaveRequest : PBRequest <NSCopying>
{
    NSData * _protectedFullToken;
    CKDPShare * _share;
    NSData * _shortTokenHash;
}

@property (readonly, nonatomic) char hasShare;
@property (retain, nonatomic) CKDPShare * share;
@property (readonly, nonatomic) char hasShortTokenHash;
@property (retain, nonatomic) NSData * shortTokenHash;
@property (readonly, nonatomic) char hasProtectedFullToken;
@property (retain, nonatomic) NSData * protectedFullToken;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPShareSaveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (NSData *)protectedFullToken;
- (void)setShortTokenHash:(NSData *)arg0;
- (void)setProtectedFullToken:(NSData *)arg0;
- (char)hasShortTokenHash;
- (char)hasProtectedFullToken;
- (NSData *)shortTokenHash;
- (void)setShare:(CKDPShare *)arg0;
- (char)hasShare;
- (CKDPShare *)share;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
