/* Runtime dump - FBServiceClientAuthenticator
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBServiceClientAuthenticator : NSObject
{
    NSString * _entitlement;
    unsigned int _credentials;
}

+ (FBServiceClientAuthenticator *)sharedSystemClientAuthenticator;
+ (FBServiceClientAuthenticator *)sharedUIAppClientAuthenticator;
+ (FBServiceClientAuthenticator *)sharedForegroundUIAppClientAuthenticator;

- (FBServiceClientAuthenticator *)init;
- (FBServiceClientAuthenticator *)initWithCredentials:(unsigned int)arg0;
- (FBServiceClientAuthenticator *)initWithEntitlement:(NSString *)arg0 additionalCredentials:(unsigned int)arg1;
- (int)authenticateAuditToken:(struct ? *)arg0 forEntitlement:(id)arg1 withResult:(NSObject *)arg2;
- (int)authenticateConnection:(NSURLConnection *)arg0 forEntitlement:(id)arg1 withResult:(NSObject *)arg2;
- (int)_authenticateAuditToken:(struct ? *)arg0 connection:(NSURLConnection *)arg1 entitlement:(NSString *)arg2 withResult:(NSObject *)arg3;
- (FBServiceClientAuthenticator *)initWithEntitlement:(NSString *)arg0;
- (int)authenticateAuditToken:(struct ? *)arg0 withResult:(NSObject *)arg1;
- (int)authenticateConnection:(NSURLConnection *)arg0 withResult:(NSObject *)arg1;

@end
