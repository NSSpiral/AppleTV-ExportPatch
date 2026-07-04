/* Runtime dump - TRAuthorizedDeviceManager
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRAuthorizedDeviceManager : NSObject
{
    NSMutableDictionary * _authorizationList;
}

@property (readonly, nonatomic) NSArray * deviceIdentifiers;

+ (TRAuthorizedDeviceManager *)sharedDeviceManager;
+ (TRAuthorizedDeviceManager *)currentDeviceIdentifier;
+ (NSString *)_dataForDeviceIdentifier:(NSString *)arg0;
+ (NSData *)_deviceIdentifierForData:(NSData *)arg0;

- (TRAuthorizedDeviceManager *)init;
- (void).cxx_destruct;
- (id)_deviceAuthorizationDirectory;
- (NSString *)_deviceAuthorizationFilePath;
- (char)isAuthorizedDeviceWithIdentifier:(NSString *)arg0;
- (char)addDeviceWithIdentifier:(NSString *)arg0 forDeviceName:(NSString *)arg1 error:(id *)arg2;
- (NSArray *)deviceIdentifiers;
- (NSString *)deviceNameForIdentifier:(NSString *)arg0;
- (char)removeDeviceWithIdentifier:(NSString *)arg0 error:(id *)arg1;

@end
