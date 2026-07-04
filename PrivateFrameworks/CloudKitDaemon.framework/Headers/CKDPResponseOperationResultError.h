/* Runtime dump - CKDPResponseOperationResultError
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultError : PBCodable <NSCopying>
{
    CKDPResponseOperationResultErrorClient * _clientError;
    NSString * _errorDescription;
    NSString * _errorInternal;
    NSString * _errorKey;
    CKDPResponseOperationResultErrorExtension * _extensionError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer * _serverError;
    struct ? _has;
}

@property (readonly, nonatomic) char hasClientError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorClient * clientError;
@property (readonly, nonatomic) char hasServerError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorServer * serverError;
@property (readonly, nonatomic) char hasExtensionError;
@property (retain, nonatomic) CKDPResponseOperationResultErrorExtension * extensionError;
@property (nonatomic) char hasRetryAfterSeconds;
@property (nonatomic) int retryAfterSeconds;
@property (readonly, nonatomic) char hasErrorDescription;
@property (retain, nonatomic) NSString * errorDescription;
@property (readonly, nonatomic) char hasErrorKey;
@property (retain, nonatomic) NSString * errorKey;
@property (readonly, nonatomic) char hasErrorInternal;
@property (retain, nonatomic) NSString * errorInternal;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPResponseOperationResultError *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasClientError;
- (CKDPResponseOperationResultErrorClient *)clientError;
- (char)hasServerError;
- (CKDPResponseOperationResultErrorServer *)serverError;
- (char)hasExtensionError;
- (CKDPResponseOperationResultErrorExtension *)extensionError;
- (char)hasRetryAfterSeconds;
- (int)retryAfterSeconds;
- (void)setClientError:(CKDPResponseOperationResultErrorClient *)arg0;
- (void)setErrorKey:(NSString *)arg0;
- (char)hasErrorKey;
- (NSString *)errorKey;
- (void)setServerError:(CKDPResponseOperationResultErrorServer *)arg0;
- (void)setErrorInternal:(NSString *)arg0;
- (void)setExtensionError:(CKDPResponseOperationResultErrorExtension *)arg0;
- (void)setRetryAfterSeconds:(int)arg0;
- (void)setHasRetryAfterSeconds:(char)arg0;
- (char)hasErrorInternal;
- (NSString *)errorInternal;
- (void)setErrorDescription:(NSString *)arg0;
- (char)hasErrorDescription;
- (NSString *)errorDescription;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
