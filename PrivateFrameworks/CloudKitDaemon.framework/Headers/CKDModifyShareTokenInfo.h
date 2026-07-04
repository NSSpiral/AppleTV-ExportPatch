/* Runtime dump - CKDModifyShareTokenInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareTokenInfo : NSObject
{
    CKShareID * _shareID;
    NSData * _shortSharingTokenHashData;
    NSData * _encryptedFullTokenData;
    NSString * _baseToken;
}

@property (retain, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) NSData * shortSharingTokenHashData;
@property (retain, nonatomic) NSData * encryptedFullTokenData;
@property (retain, nonatomic) NSString * baseToken;

- (void).cxx_destruct;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (NSString *)baseToken;
- (void)setBaseToken:(NSString *)arg0;
- (NSData *)shortSharingTokenHashData;
- (void)setShortSharingTokenHashData:(NSData *)arg0;
- (NSData *)encryptedFullTokenData;
- (void)setEncryptedFullTokenData:(NSData *)arg0;

@end
