/* Runtime dump - IMDIDSAccount
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDIDSAccount : IMDAccount
{
    IDSAccount * _idsAccount;
}

@property (readonly, retain, nonatomic) IDSAccount * idsAccount;

- (void)dealloc;
- (void)writeAccountDefaults:(id)arg0;
- (NSDictionary *)accountDefaults;
- (IDSAccount *)idsAccount;
- (IMDIDSAccount *)initWithAccountID:(NSString *)arg0 defaults:(SBFWallpaperDefaults *)arg1 service:(NSObject *)arg2 idsAccount:(IDSAccount *)arg3;

@end
