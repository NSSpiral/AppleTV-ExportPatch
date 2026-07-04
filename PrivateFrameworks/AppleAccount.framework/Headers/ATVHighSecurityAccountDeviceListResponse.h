/* Runtime dump - ATVHighSecurityAccountDeviceListResponse
 * Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray * devices;
@property (readonly, nonatomic) NSDictionary * userDisplayStrings;
@property (readonly, nonatomic) NSString * errorTitle;
@property (readonly, nonatomic) NSString * errorMessage;
@property (readonly, nonatomic) int errorCode;

- (NSDictionary *)userDisplayStrings;
- (NSString *)errorTitle;
- (NSString *)errorMessage;
- (NSArray *)devices;
- (int)errorCode;

@end
