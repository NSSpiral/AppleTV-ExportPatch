/* Runtime dump - BKSSystemApplication
 * Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate>
{
    NSObject<OS_dispatch_queue> * _queue;
    BKSSystemApplicationClient * _client;
    <BKSSystemApplicationDelegate> * _delegate;
}

@property (nonatomic) <BKSSystemApplicationDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)restart;
- (void)dealloc;
- (void)setDelegate:(<BKSSystemApplicationDelegate> *)arg0;
- (<BKSSystemApplicationDelegate> *)delegate;
- (BKSSystemApplication *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)sendActions:(id)arg0;
- (void)start;
- (char)clientIsAliveForWatchdog:(id)arg0;

@end
