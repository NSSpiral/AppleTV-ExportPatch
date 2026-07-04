/* Runtime dump - HMDWatchSessionMessageCallback
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWatchSessionMessageCallback : NSObject
{
    id _responseHandler;
    NSObject<OS_dispatch_source> * _responseTimer;
}

@property (copy, nonatomic) id responseHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> * responseTimer;

- (void).cxx_destruct;
- (NSObject<OS_dispatch_source> *)responseTimer;
- (void)setResponseTimer:(NSObject<OS_dispatch_source> *)arg0;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg0;
- (HMDWatchSessionMessageCallback *)initWithResponseHandler:(id /* block */)arg0;

@end
