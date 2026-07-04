/* Runtime dump - CKDPSubscriptionCreateRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionCreateRequest : PBRequest <NSCopying>
{
    CKDPSubscription * _subscription;
}

@property (readonly, nonatomic) char hasSubscription;
@property (retain, nonatomic) CKDPSubscription * subscription;

+ (NSDictionary *)options;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPSubscriptionCreateRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setSubscription:(CKDPSubscription *)arg0;
- (CKDPSubscription *)subscription;
- (char)hasSubscription;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
