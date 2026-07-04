/* Runtime dump - CKDPResponseOperationResult
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResult : PBCodable <NSCopying>
{
    int _code;
    CKDPResponseOperationResultError * _error;
    struct ? _has;
}

@property (nonatomic) char hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) char hasError;
@property (retain, nonatomic) CKDPResponseOperationResultError * error;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)code;
- (CKDPResponseOperationResult *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (CKDPResponseOperationResultError *)error;
- (void)setHasCode:(char)arg0;
- (char)hasCode;
- (void)setError:(CKDPResponseOperationResultError *)arg0;
- (char)hasError;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;
- (void)setCode:(int)arg0;

@end
