/* Runtime dump - CoreRCInterfaceController
 * Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@interface CoreRCInterfaceController : NSObject <CoreRCInterfaceListenerDelegate>
{
    NSMutableArray * _interfaceListeners;
    <CoreRCInterfaceControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, nonatomic) CECFakeInterfaceListener * fakeInterfaceListener;
@property (nonatomic) <CoreRCInterfaceControllerDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, nonatomic) NSArray * interfaceListeners;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<CoreRCInterfaceControllerDelegate> *)arg0;
- (CoreRCInterfaceController *)init;
- (<CoreRCInterfaceControllerDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)startOnQueue:(NSObject *)arg0;
- (NSArray *)interfaceListeners;
- (CECFakeInterfaceListener *)fakeInterfaceListener;
- (void)interfaceListener:(CoreRCInterfaceListener *)arg0 didAddInterface:(CoreRCInterface *)arg1;
- (void)interfaceListener:(CoreRCInterfaceListener *)arg0 didRemoveInterface:(CoreRCInterface *)arg1;
- (id)firstInterface;
- (char)addInterfaceListenerClass:(Class)arg0;
- (char)addBundlesFromPaths:(NSArray *)arg0 expectedClass:(Class)arg1;

@end
