/* Runtime dump - ACDClientAuthorization
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDClientAuthorization : NSObject
{
    char _isGranted;
    ACDClient * _client;
    NSSet * _grantedPermissions;
    NSDictionary * _options;
}

@property (nonatomic) char isGranted;
@property (retain, nonatomic) ACDClient * client;
@property (retain, nonatomic) NSSet * grantedPermissions;
@property (copy, nonatomic) NSDictionary * options;

- (char)isGranted;
- (void)setOptions:(NSDictionary *)arg0;
- (NSDictionary *)options;
- (void).cxx_destruct;
- (NSSet *)grantedPermissions;
- (ACDClientAuthorization *)initForClient:(NSObject *)arg0;
- (void)setGrantedPermissions:(NSSet *)arg0;
- (void)setIsGranted:(char)arg0;
- (void)setClient:(ACDClient *)arg0;
- (ACDClient *)client;

@end
