/* Runtime dump - CertUIPrompt
 * Image: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

@interface CertUIPrompt : NSObject
{
    struct __SecTrust * _trust;
    NSString * _host;
    NSString * _service;
    NSString * _connectionDisplayName;
    id _responseBlock;
}

@property (retain, nonatomic) NSString * host;
@property (retain, nonatomic) NSString * service;
@property (copy, nonatomic) NSString * connectionDisplayName;

+ (NSURLResponse *)stringForResponse:(int)arg0;
+ (NSOperationQueue *)promptQueue;

- (void)dealloc;
- (NSString *)description;
- (NSString *)host;
- (void).cxx_destruct;
- (NSDictionary *)_sendablePropertiesFromProperties:(NSDictionary *)arg0;
- (NSObject *)_sendablePropertiesFromTrust:(struct __SecTrust *)arg0;
- (NSObject *)_sendablePropertyFromProperty:(NSObject *)arg0;
- (NSObject *)_copyPropertiesFromTrust:(struct __SecTrust *)arg0;
- (NSString *)connectionDisplayName;
- (id)_propertyNamed:(id)arg0 ofType:(NSString *)arg1 inProperties:(NSDictionary *)arg2;
- (NSObject *)_titleFromTrust:(struct __SecTrust *)arg0;
- (NSObject *)_issuerFromTrust:(struct __SecTrust *)arg0;
- (NSObject *)_subtitleFromTrust:(struct __SecTrust *)arg0;
- (NSDictionary *)_purposeFromTrustProperties:(NSDictionary *)arg0;
- (NSObject *)_expirationFromTrust:(struct __SecTrust *)arg0;
- (char)_isRootCertificateFromTrust:(struct __SecTrust *)arg0;
- (NSObject *)_digestFromTrust:(struct __SecTrust *)arg0;
- (NSString *)_newUserInfoForDisplayName:(NSString *)arg0 hostname:(NSString *)arg1 trust:(struct __SecTrust *)arg2;
- (id)_messagingCenter;
- (int)_responseFromReplyDict:(id)arg0;
- (int)_sendRemoteMessage;
- (struct __SecTrust *)trust;
- (void)_informConsumerOfResponse:(int)arg0;
- (void)setHost:(NSString *)arg0;
- (void)setService:(NSString *)arg0;
- (NSString *)service;
- (void)setConnectionDisplayName:(NSString *)arg0;
- (void)showPromptWithResponseBlock:(id /* block */)arg0;
- (void)setTrust:(struct __SecTrust *)arg0;
- (int)showAndWaitForResponse;

@end
