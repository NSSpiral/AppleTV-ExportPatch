/* Runtime dump - IKJSEventListenerObject
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject>
{
    NSMutableDictionary * _eventListenersMap;
}

@property (retain, nonatomic) NSMutableDictionary * eventListenersMap;

- (void).cxx_destruct;
- (void)removeEventListener:(NetflixNrdObjectCallback *)arg0 :(id)arg1;
- (char)_searchEventListener:(id)arg0 key:(NSString *)arg1 destroy:(char)arg2;
- (NSMutableDictionary *)eventListenersMap;
- (void)setEventListenersMap:(NSMutableDictionary *)arg0;
- (char)invokeListeners:(id)arg0 extraInfo:(NSDictionary *)arg1;
- (char)invokeMethod:(NSString *)arg0 withArguments:(NSDictionary *)arg1 thenDispatchEvent:(NSObject *)arg2 extraInfo:(NSDictionary *)arg3;
- (void)addEventListener:(NetflixNrdObjectCallback *)arg0 :(id)arg1 :(id)arg2;

@end
