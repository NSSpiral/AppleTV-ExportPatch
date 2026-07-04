/* Runtime dump - PLCloudTrigger
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudTrigger : NSObject
{
    NSObject<OS_dispatch_queue> * _triggerQueue;
    NSMutableDictionary * _subscriptions;
    unsigned int _type;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, retain, nonatomic) NSDictionary * subscriptions;

- (void)dealloc;
- (unsigned int)type;
- (PLCloudTrigger *)initWithType:(unsigned int)arg0;
- (void)activate;
- (void)triggerWithContextObject:(NSObject *)arg0;
- (void)subscribeWithInstance:(id)arg0 selector:(SEL)arg1;
- (void)unsubscribeWithInstance:(id)arg0;
- (NSDictionary *)subscriptions;

@end
