/* Runtime dump - FAFamilyCircleRequest
 * Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAFamilyCircleRequest : NSObject
{
    NSString * _usernameOrDSID;
    NSString * _passwordOrToken;
}

@property (copy) NSString * usernameOrDSID;
@property (copy) NSString * passwordOrToken;

- (FAFamilyCircleRequest *)init;
- (void).cxx_destruct;
- (id)serviceRemoteObjectWithErrorHandler:(SSErrorHandler *)arg0;
- (NSDictionary *)requestOptions;
- (NSURLConnection *)serviceConnection;
- (NSString *)usernameOrDSID;
- (NSString *)passwordOrToken;
- (void)setUsernameOrDSID:(NSString *)arg0;
- (void)setPasswordOrToken:(NSString *)arg0;

@end
