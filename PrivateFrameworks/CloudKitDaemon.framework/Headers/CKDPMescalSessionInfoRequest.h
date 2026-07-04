/* Runtime dump - CKDPMescalSessionInfoRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSessionInfoRequest : PBRequest <NSCopying>
{
    NSData * _requestData;
}

@property (readonly, nonatomic) char hasRequestData;
@property (retain, nonatomic) NSData * requestData;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPMescalSessionInfoRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setRequestData:(NSData *)arg0;
- (char)hasRequestData;
- (NSData *)requestData;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
