/* Runtime dump - AFContextManager
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFContextManager : NSObject
{
    struct __CFArray * _contextProviders;
    CPDistributedMessagingCenter * _center;
}

+ (AFContextManager *)defaultContextManager;

- (void)removeContextProvider:(NSObject *)arg0;
- (char)addContextProvider:(NSObject *)arg0;
- (void)dealloc;
- (AFContextManager *)init;
- (void).cxx_destruct;
- (void)nothing;
- (void)_collateContextsIntoArray:(NSArray *)arg0;
- (void)_shutdownServer;
- (id)_collateContexts;
- (void)startCenter:(id)arg0;

@end
