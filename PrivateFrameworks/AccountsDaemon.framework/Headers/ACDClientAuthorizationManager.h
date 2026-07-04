/* Runtime dump - ACDClientAuthorizationManager
 * Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDClientAuthorizationManager : NSObject
{
    ACDDatabase * _database;
}

- (ACDClientAuthorizationManager *)initWithDatabase:(ACDDatabase *)arg0;
- (void).cxx_destruct;
- (NSString *)allAuthorizationsForAccountTypeWithIdentifier:(NSString *)arg0;
- (NSObject *)authorizationForClient:(NSObject *)arg0 accountTypeWithIdentifier:(NSString *)arg1;
- (NSObject *)removeAuthorizationForClient:(NSObject *)arg0 accountType:(NSObject *)arg1;
- (NSObject *)authorizationForClient:(NSObject *)arg0 accountType:(NSObject *)arg1;
- (NSString *)_setFromCSVString:(NSString *)arg0;
- (NSSet *)_csvStringFromSet:(NSSet *)arg0;
- (NSObject *)removeAuthorizationForClient:(NSObject *)arg0 accountTypeWithIdentifier:(NSString *)arg1;
- (NSString *)removeAllClientAuthorizationsForAccountTypeWithIdentifier:(NSString *)arg0;
- (NSObject *)setAuthorization:(NSObject *)arg0 forClient:(struct _GEOTileKey)arg1 onAccountType:(NSObject *)arg2;
- (NSObject *)allAuthorizationsForAccountType:(NSObject *)arg0;
- (NSObject *)removeAllClientAuthorizationsForAccountType:(NSObject *)arg0;

@end
