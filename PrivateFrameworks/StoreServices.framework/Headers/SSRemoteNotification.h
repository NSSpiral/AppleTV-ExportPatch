/* Runtime dump - SSRemoteNotification
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSRemoteNotification : NSObject <SSXPCCoding>
{
    NSDictionary * _userInfo;
}

@property (readonly, nonatomic) int actionType;
@property (readonly, nonatomic) NSString * alertBodyString;
@property (readonly, nonatomic) NSString * alertCancelString;
@property (readonly, nonatomic) NSString * alertOKString;
@property (readonly, nonatomic) NSString * alertTitleString;
@property (readonly, nonatomic) id badgeValue;
@property (readonly, nonatomic) NSString * soundFileName;
@property (readonly, nonatomic) NSDictionary * notificationUserInfo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)copyXPCEncoding;
- (SSRemoteNotification *)initWithXPCEncoding:(NSString *)arg0;
- (NSString *)valueForKey:(NSString *)arg0;
- (void)dealloc;
- (NSString *)badgeValue;
- (int)actionType;
- (SSRemoteNotification *)initWithNotificationUserInfo:(NSDictionary *)arg0;
- (NSString *)_valueForAlertKey:(NSString *)arg0;
- (NSString *)alertBodyString;
- (NSString *)alertCancelString;
- (NSString *)alertOKString;
- (NSString *)alertTitleString;
- (NSString *)soundFileName;
- (NSDictionary *)notificationUserInfo;

@end
