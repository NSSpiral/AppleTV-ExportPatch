/* Runtime dump - CKDPMescalSessionInfoResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSessionInfoResponse : PBCodable <NSCopying>
{
    NSData * _sessionInfo;
    int _status;
    struct ? _has;
}

@property (readonly, nonatomic) char hasSessionInfo;
@property (retain, nonatomic) NSData * sessionInfo;
@property (nonatomic) char hasStatus;
@property (nonatomic) int status;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPMescalSessionInfoResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)setSessionInfo:(NSData *)arg0;
- (char)hasSessionInfo;
- (void)setHasStatus:(char)arg0;
- (char)hasStatus;
- (NSData *)sessionInfo;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
