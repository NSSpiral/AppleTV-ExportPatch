/* Runtime dump - CKDPSubscriptionRetrieveRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionRetrieveRequest : PBRequest <NSCopying>
{
    CKDPIdentifier * _identifier;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) CKDPIdentifier * identifier;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPIdentifier *)identifier;
- (CKDPSubscriptionRetrieveRequest *)copyWithZone:(struct _NSZone *)arg0;
- (void)setIdentifier:(CKDPIdentifier *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (char)hasIdentifier;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
