/* Runtime dump - CKDShareTokenInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareTokenInfo : NSObject <NSCopying>
{
    NSString * _routingKey;
    NSData * _shortSharingTokenData;
    NSData * _publicTokenData;
    NSData * _privateTokenData;
}

@property (retain, nonatomic) NSString * routingKey;
@property (retain, nonatomic) NSData * shortSharingTokenData;
@property (readonly, nonatomic) NSString * shortSharingToken;
@property (readonly, nonatomic) NSData * shortSharingTokenHashData;
@property (retain, nonatomic) NSData * publicTokenData;
@property (retain, nonatomic) NSData * privateTokenData;

- (CKDShareTokenInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSData *)shortSharingTokenData;
- (void)setPrivateTokenData:(NSData *)arg0;
- (void)setPublicTokenData:(NSData *)arg0;
- (NSString *)routingKey;
- (void)setRoutingKey:(NSString *)arg0;
- (NSData *)shortSharingTokenHashData;
- (NSData *)privateTokenData;
- (NSData *)publicTokenData;
- (void)setShortSharingTokenData:(NSData *)arg0;
- (NSString *)shortSharingToken;

@end
