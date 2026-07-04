/* Runtime dump - ATVUserNotificationCenter
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVUserNotificationCenter : NSObject <SSErrorHandlerDelegate>
{
    char _connected;
    <ATVUserNotificationDelegate> * _delegate;
    SSErrorHandler * _errorHandler;
    NSMutableDictionary * _registeredOperationClasses;
}

@property (weak, nonatomic) <ATVUserNotificationDelegate> * delegate;
@property (retain, nonatomic) SSErrorHandler * errorHandler;
@property char connected;
@property (retain, nonatomic) NSMutableDictionary * registeredOperationClasses;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVUserNotificationCenter *)sharedInstance;
+ (void)initializeNotificationCenterWithDelegate:(<ATVUserNotificationDelegate> *)arg0;

- (void)setDelegate:(<ATVUserNotificationDelegate> *)arg0;
- (<ATVUserNotificationDelegate> *)delegate;
- (void).cxx_destruct;
- (void)startUserNotificationCenter;
- (void)initializeStoreErrorHandler;
- (NSMutableDictionary *)registeredOperationClasses;
- (void)setRegisteredOperationClasses:(NSMutableDictionary *)arg0;
- (void)startErrorHandler;
- (void)setConnected:(char)arg0;
- (void)_handleCVVCheck:(id)arg0;
- (void)_handle2SVCheck:(id)arg0;
- (void)errorHandlerDidDisconnect:(id)arg0;
- (void)errorHandler:(SSErrorHandler *)arg0 handleSession:(NSObject *)arg1;
- (NSString *)cfUserNotificationForToken:(int)arg0;
- (void)_didHandleCFUserNotification:(NSNotification *)arg0;
- (void)registerOperationClass:(Class)arg0 forFailureType:(int)arg1;
- (void)stopErrorHandler;
- (void)setErrorHandler:(SSErrorHandler *)arg0;
- (SSErrorHandler *)errorHandler;
- (char)isConnected;

@end
