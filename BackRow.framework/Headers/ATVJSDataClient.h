/* Runtime dump - ATVJSDataClient
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVJSContext, ATVMerchant;
@interface ATVJSDataClient : ATVDataClient
{
    ATVMerchant * _merchant;
    NSObject<OS_dispatch_queue> * _jsContextAccessQueue;
    NSObject<OS_dispatch_source> * _jsContextPurgeTimer;
    ATVJSContext * _jsContext;
}

@property (retain, nonatomic) ATVMerchant * merchant;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * jsContextAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * jsContextPurgeTimer;
@property (retain, nonatomic) ATVJSContext * jsContext;

+ (NSObject *)dataPropertyToFeedProperty:(NSObject *)arg0;
+ (NSObject *)dataTypeFromFeedType:(NSObject *)arg0;
+ (NSObject *)dataTypeToFeedType:(NSObject *)arg0;

- (ATVMerchant *)merchant;
- (void)setMerchant:(ATVMerchant *)arg0;
- (ATVJSDataClient *)initWithMerchant:(ATVMerchant *)arg0;
- (void)setJsContextAccessQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSObject<OS_dispatch_queue> *)jsContextAccessQueue;
- (NSObject<OS_dispatch_source> *)jsContextPurgeTimer;
- (void)setJsContextPurgeTimer:(NSObject<OS_dispatch_source> *)arg0;
- (NSObject *)_queryDictionaryForQuery:(NSObject *)arg0;
- (void)_accessJSContextWithSuccessBlock:(char)arg0 failureBlock:(/* block */ id)arg1;
- (NSString *)_makeJSContext;
- (void).cxx_destruct;
- (NSString *)imageKeyForObject:(NSObject *)arg0;
- (void)concreteDataClientConnect;
- (void)concreteDataClientDisconnect;
- (char)processQueryAsync:(id)arg0;
- (void)executeQuery:(NSObject *)arg0 withCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)loadImageForObject:(NSObject *)arg0 size:(struct CGSize)arg1 crop:(char)arg2 completionHandler:(id /* block */)arg3;
- (void)cancelLoad:(id)arg0;
- (NSSet *)imageURLWithAsset:(NSSet *)arg0 size:(struct CGSize)arg1 crop:(char)arg2;
- (ATVJSContext *)jsContext;
- (void)setJsContext:(ATVJSContext *)arg0;

@end
