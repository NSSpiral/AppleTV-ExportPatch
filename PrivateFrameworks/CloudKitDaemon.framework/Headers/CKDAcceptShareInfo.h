/* Runtime dump - CKDAcceptShareInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptShareInfo : NSObject
{
    NSURL * _shareURL;
    CKShareID * _shareID;
    NSString * _etag;
    NSData * _publicPCSData;
    NSString * _publicPCSEtag;
    NSData * _publicKey;
}

@property (retain, nonatomic) NSURL * shareURL;
@property (retain, nonatomic) CKShareID * shareID;
@property (retain, nonatomic) NSString * etag;
@property (retain, nonatomic) NSData * publicPCSData;
@property (retain, nonatomic) NSString * publicPCSEtag;
@property (retain, nonatomic) NSData * publicKey;

- (void).cxx_destruct;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (void)setPublicPCSEtag:(NSString *)arg0;
- (void)setPublicPCSData:(NSData *)arg0;
- (NSData *)publicPCSData;
- (NSString *)publicPCSEtag;
- (NSURL *)shareURL;
- (void)setShareURL:(NSURL *)arg0;
- (NSData *)publicKey;
- (void)setPublicKey:(NSData *)arg0;

@end
