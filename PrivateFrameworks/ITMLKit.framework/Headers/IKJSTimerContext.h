/* Runtime dump - IKJSTimerContext
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSTimerContext : NSObject
{
    char _isRepeating;
    NSTimer * _timer;
    id _ownerObject;
    JSManagedValue * _managedCallback;
    IKJSManagedArray * _managedArgs;
}

@property (retain, nonatomic) NSTimer * timer;
@property (readonly, retain, nonatomic) id ownerObject;
@property (readonly, retain, nonatomic) JSManagedValue * managedCallback;
@property (readonly, retain, nonatomic) IKJSManagedArray * managedArgs;
@property (readonly, nonatomic) char isRepeating;

- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (char)isRepeating;
- (NSObject *)ownerObject;
- (void)removeManagedReferences;
- (IKJSTimerContext *)initWithCallback:(id /* block */)arg0 callbackArgs:(id)arg1 repeating:(char)arg2 ownerObject:(NSObject *)arg3 timer:(NSTimer *)arg4;
- (JSManagedValue *)managedCallback;
- (IKJSManagedArray *)managedArgs;

@end
