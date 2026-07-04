/* Runtime dump - CKDShortTokenInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShortTokenInfo : NSObject <NSCopying>
{
    NSString * _routingKey;
    NSData * _shortSharingTokenHashData;
    CKShareID * _shareID;
}

@property (retain, nonatomic) NSString * routingKey;
@property (retain, nonatomic) NSData * shortSharingTokenHashData;
@property (retain, nonatomic) CKShareID * shareID;

- (CKDShortTokenInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (NSString *)routingKey;
- (void)setRoutingKey:(NSString *)arg0;
- (NSData *)shortSharingTokenHashData;
- (void)setShortSharingTokenHashData:(NSData *)arg0;

@end
