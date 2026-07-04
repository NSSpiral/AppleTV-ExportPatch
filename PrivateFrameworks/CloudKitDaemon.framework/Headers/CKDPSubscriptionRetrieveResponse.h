/* Runtime dump - CKDPSubscriptionRetrieveResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray * _subscriptions;
}

@property (retain, nonatomic) NSMutableArray * subscriptions;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPSubscriptionRetrieveResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)setSubscriptions:(NSMutableArray *)arg0;
- (void)addSubscriptions:(id)arg0;
- (unsigned int)subscriptionsCount;
- (void)clearSubscriptions;
- (NSObject *)subscriptionsAtIndex:(unsigned int)arg0;
- (NSMutableArray *)subscriptions;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
