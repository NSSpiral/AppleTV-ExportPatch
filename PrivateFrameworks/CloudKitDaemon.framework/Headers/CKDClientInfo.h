/* Runtime dump - CKDClientInfo
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientInfo : NSObject
{
    NSArray * _enabledKeyboards;
    NSString * _cachedHostname;
    NSObject<OS_dispatch_queue> * _hostCallbackQueue;
    struct MGNotificationTokenStruct * _hostNotificationToken;
    Class _CKDUITextInputModeClass;
}

@property (readonly, nonatomic) NSString * hostname;
@property (readonly, nonatomic) NSArray * enabledKeyboards;
@property (nonatomic) Class CKDUITextInputModeClass;

+ (CKDClientInfo *)sharedClientInfo;

- (void)dealloc;
- (CKDClientInfo *)init;
- (CKDClientInfo *)_init;
- (void).cxx_destruct;
- (NSArray *)enabledKeyboards;
- (void)setCKDUITextInputModeClass:(Class)arg0;
- (void)_inputModeChanged;
- (void)_refreshHostname;
- (Class)CKDUITextInputModeClass;
- (void)_refreshEnabledKeyboards;
- (NSString *)hostname;

@end
