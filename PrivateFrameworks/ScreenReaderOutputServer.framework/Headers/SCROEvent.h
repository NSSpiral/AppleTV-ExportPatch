/* Runtime dump - SCROEvent
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROEvent : NSObject
{
    int _handlerType;
    NSMutableArray * _callbacks;
    NSMutableDictionary * _setDictionary;
    NSMutableDictionary * _getDictionary;
    NSMutableArray * _actions;
    char _readOnly;
}

+ (NSObject *)brailleEvent;

- (void)dealloc;
- (SCROEvent *)initForHandlerType:(int)arg0;
- (int)handlerType;
- (void)requestRegisterCallbackForKey:(int)arg0;
- (void)requestSetValue:(id)arg0 forKey:(int)arg1;
- (void)requestValueForKey:(int)arg0;
- (void)requestPerformActionForKey:(int)arg0;
- (NSString *)claimValueForKey:(int)arg0;
- (void)setMainDictionary:(NSDictionary *)arg0;
- (NSDictionary *)mainDictionary;
- (void)setClaimDictionary:(NSDictionary *)arg0;
- (NSDictionary *)claimDictionary;
- (void)performWithHandler:(id /* block */)arg0 trusted:(char)arg1;

@end
