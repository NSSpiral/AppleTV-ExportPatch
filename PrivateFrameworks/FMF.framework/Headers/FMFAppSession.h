/* Runtime dump - FMFAppSession
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFAppSession : NSObject

+ (FMFAppSession *)sharedInstance;

- (NSNumber *)_fmfAppAccountFromAOSAccount:(NSObject *)arg0;
- (void)startListeningForFMFAppPushInEnvironment:(NSDictionary *)arg0 withMessageHandler:(NSObject<MBConnectionHandler> *)arg1 tokenHandler:(/* block */ id)arg2;
- (void)stopListeningForFMFAppPush;
- (void)locationAuthorizationForShareMyLocationWithCompletion:(id /* block */)arg0;
- (NSObject *)thisDeviceId;
- (void)retrieveFMFAccountWithCompletion:(id /* block */)arg0;
- (void)renewFMFAccountCredentialsWithCompletion:(id /* block */)arg0;

@end
