/* Runtime dump - AADelegateResponseStore
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADelegateResponseStore : NSObject

+ (void)saveiCloudResponseParameters:(NSDictionary *)arg0;
+ (void)restoreFinished;
+ (void)saveiCloudToken:(NSString *)arg0 hsaToken:(NSString *)arg1 fmipToken:(NSString *)arg2 faceTimeToken:(NSString *)arg3 madridToken:(NSString *)arg4 gameCenterToken:(NSString *)arg5;
+ (NSObject *)responseAndTokenRuntimeStore;
+ (void)_saveKeychainItem:(NSObject *)arg0 forUsername:(id)arg1 service:(NSObject *)arg2 itemDescription:(NSString *)arg3;

@end
