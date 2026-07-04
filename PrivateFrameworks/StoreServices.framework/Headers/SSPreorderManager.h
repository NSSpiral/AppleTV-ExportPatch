/* Runtime dump - SSPreorderManager
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPreorderManager : NSObject
{
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _itemKinds;
    SSXPCConnection * _observerConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
    struct __CFArray * _observers;
    NSArray * _preorders;
}

@property (readonly) NSArray * itemKinds;
@property (readonly) NSArray * preorders;

+ (SSPreorderManager *)bookStoreItemKinds;
+ (SSPreorderManager *)musicStoreItemKinds;

- (void)_registerAsObserver;
- (void)dealloc;
- (SSPreorderManager *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0;
- (void)reloadFromServer;
- (NSArray *)preorders;
- (void)_connectAsObserver;
- (void)_handleMessage:(NSString *)arg0 fromServerConnection:(NSURLConnection *)arg1;
- (void)_sendMessageToObservers:(SEL)arg0;
- (SSPreorderManager *)initWithItemKinds:(NSArray *)arg0;
- (void)cancelPreorders:(id)arg0 withCompletionBlock:(id /* block */)arg1;
- (NSArray *)itemKinds;

@end
