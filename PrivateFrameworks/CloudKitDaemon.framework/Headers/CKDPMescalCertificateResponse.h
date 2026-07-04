/* Runtime dump - CKDPMescalCertificateResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalCertificateResponse : PBCodable <NSCopying>
{
    NSData * _certificate;
}

@property (readonly, nonatomic) char hasCertificate;
@property (retain, nonatomic) NSData * certificate;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPMescalCertificateResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setCertificate:(NSData *)arg0;
- (char)hasCertificate;
- (NSData *)certificate;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
