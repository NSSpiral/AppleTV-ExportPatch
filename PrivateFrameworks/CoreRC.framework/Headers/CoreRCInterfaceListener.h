/* Runtime dump - CoreRCInterfaceListener
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCInterfaceListener : NSObject
{
    NSMutableArray * _interfaces;
    <CoreRCInterfaceListenerDelegate> * _delegate;
}

@property (nonatomic) <CoreRCInterfaceListenerDelegate> * delegate;
@property (readonly, nonatomic) NSArray * interfaces;

- (void)dealloc;
- (void)setDelegate:(<CoreRCInterfaceListenerDelegate> *)arg0;
- (CoreRCInterfaceListener *)init;
- (<CoreRCInterfaceListenerDelegate> *)delegate;
- (void)addInterface:(GKInterface *)arg0;
- (CoreRCInterfaceListener *)initWithInterfaceController:(CoreRCInterfaceController *)arg0;
- (void)scheduleWithDispatchQueue:(VKDispatch *)arg0;
- (void)unscheduleFromDispatchQueue:(NSObject *)arg0;
- (void)removeInterface:(GKInterface *)arg0;
- (id)firstInterface;
- (NSArray *)interfaces;

@end
