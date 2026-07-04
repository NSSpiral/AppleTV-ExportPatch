/* Runtime dump - CTCellularPlanManager
 * Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanManager : NSObject <CTCellularPlanClientDelegate>
{
    NSMutableArray * _subscriptionCompletions;
    struct dispatch_queue_s * _queue;
    NSString * _lastSessionId;
    NSData * _cookieData;
    NSXPCConnection * _connection;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CTCellularPlanManager *)sharedManager;

- (void)dealloc;
- (CTCellularPlanManager *)init;
- (void)_subscriptionDetailsWithCompletion:(id /* block */)arg0 updateIfNeeded:(/* block */ id)arg1;
- (void)_connect_sync;
- (void)isNewDataPlanCapable:(id)arg0;
- (void)setActivePlan:(NSData *)arg0 completion:(id /* block */)arg1;
- (void)didPurchasePlanWithIccid:(NSString *)arg0 downloadProfile:(char)arg1;
- (void)setUserInPurchaseFlow:(char)arg0;
- (void)getDeviceInfo:(NSDictionary *)arg0;
- (void)openInternalUrlId:(int)arg0;
- (void)getCurrentPlanType:(NSObject *)arg0;
- (void)getIMEIPrefix:(NSString *)arg0;
- (void)setIMEIPrefix:(NSString *)arg0;
- (void)getSelectedEnv:(id)arg0;
- (void)setSelectedEnv:(int)arg0;
- (void)getSelectedProxy:(NSObject *)arg0;
- (void)setSelectedProxy:(int)arg0;
- (void)subscriptionDetailsDidUpdate:(NSArray *)arg0;
- (void)subscriptionDetailsForCompletion:(NSArray *)arg0;
- (void)subscriptionDetailsRequestDidFail:(NSError *)arg0;
- (void)_ensureConnected_sync;
- (void)_plansForRenewal:(char)arg0 progress:(NSProgress *)arg1 completion:(/* block */ id)arg2 latitude:(id)arg3 longitude:(/* block */ id)arg4;
- (void)plansWithCompletion:(id /* block */)arg0 latitude:(/* block */ id)arg1 longitude:(id)arg2;
- (void)_reconnect;
- (void)connectionSettings:(NSDictionary *)arg0;
- (void)plansWithProgress:(id)arg0 andCompletion:(/* block */ id)arg1;
- (void)plansForRenewalWithProgress:(id)arg0 andCompletion:(/* block */ id)arg1;
- (void)plansWithCompletion:(id /* block */)arg0;
- (void)plansForRenewalWithCompletion:(id /* block */)arg0;
- (void)subscriptionDetailsWithCompletion:(id /* block */)arg0;
- (void)carrierHandoffToken:(NSString *)arg0;

@end
