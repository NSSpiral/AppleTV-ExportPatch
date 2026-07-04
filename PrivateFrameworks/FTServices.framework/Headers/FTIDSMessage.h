/* Runtime dump - FTIDSMessage
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTIDSMessage : IDSBaseMessage <NSCopying>
{
    NSData * _pushCert;
    struct __SecKey * _identityKey;
    NSData * _identityCert;
    struct __SecKey * _identityPublicKey;
    struct __SecKey * _pushKey;
    struct __SecKey * _pushPublicKey;
    NSData * _pushToken;
    NSString * _selfURI;
    NSMutableArray * _certDataArray;
    NSMutableArray * _publicKeyArray;
    NSMutableArray * _privateKeyArray;
    NSMutableArray * _userIDArray;
}

@property (nonatomic) struct __SecKey * pushPrivateKey;
@property (nonatomic) struct __SecKey * pushPublicKey;
@property (copy, nonatomic) NSData * pushCertificate;
@property (copy, nonatomic) NSData * pushToken;
@property (copy, nonatomic) NSString * selfURI;
@property (copy, nonatomic) NSMutableArray * certDataArray;
@property (copy, nonatomic) NSMutableArray * publicKeyArray;
@property (copy, nonatomic) NSMutableArray * privateKeyArray;
@property (copy, nonatomic) NSMutableArray * userIDArray;
@property (nonatomic) struct __SecKey * identityPrivateKey;
@property (nonatomic) struct __SecKey * identityPublicKey;
@property (copy, nonatomic) NSData * IDCertificate;

- (int)command;
- (void)dealloc;
- (FTIDSMessage *)init;
- (FTIDSMessage *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPushToken:(NSData *)arg0;
- (NSData *)pushToken;
- (NSString *)selfURI;
- (void)setSelfURI:(NSString *)arg0;
- (void)setIDCertificate:(NSObject *)arg0;
- (void)setIdentityPrivateKey:(struct __SecKey *)arg0;
- (void)setIdentityPublicKey:(struct __SecKey *)arg0;
- (void)addAuthUserID:(NSObject *)arg0 certificate:(NSData *)arg1 privateKey:(struct __SecKey *)arg2 publicKey:(struct __SecKey *)arg3;
- (char)wantsHTTPHeaders;
- (char)wantsBinaryPush;
- (char)wantsIDSServer;
- (char)wantsCompressedBody;
- (char)wantsBagKey;
- (char)wantsSignature;
- (char)wantsBodySignature;
- (struct __SecKey *)pushPrivateKey;
- (void)setPushPrivateKey:(struct __SecKey *)arg0;
- (struct __SecKey *)pushPublicKey;
- (void)setPushPublicKey:(struct __SecKey *)arg0;
- (NSData *)pushCertificate;
- (void)setPushCertificate:(NSData *)arg0;
- (NSMutableArray *)certDataArray;
- (void)setCertDataArray:(NSMutableArray *)arg0;
- (NSMutableArray *)publicKeyArray;
- (void)setPublicKeyArray:(NSMutableArray *)arg0;
- (NSMutableArray *)privateKeyArray;
- (void)setPrivateKeyArray:(NSMutableArray *)arg0;
- (NSMutableArray *)userIDArray;
- (void)setUserIDArray:(NSMutableArray *)arg0;
- (struct __SecKey *)identityPrivateKey;
- (struct __SecKey *)identityPublicKey;
- (NSData *)IDCertificate;
- (int)responseCommand;
- (NSDictionary *)additionalMessageHeaders;
- (NSDictionary *)additionalMessageHeadersForOutgoingPush;

@end
