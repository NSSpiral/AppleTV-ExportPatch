/* Runtime dump - BRAsyncTask
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRAsyncTaskContext;
@interface BRAsyncTask : NSObject
{
    NSThread * _callingThread;
    id _target;
    SEL _selector;
    id _object;
    id _result;
    BRAsyncTaskContext * _context;
    int _state;
    NSString * _identifier;
}

+ (NSString *)taskWithSelector:(SEL)arg0 onTarget:(NSObject *)arg1 withObject:(NSObject *)arg2 withContext:(BRAsyncTaskContext *)arg3;
+ (NSString *)taskWithSelector:(SEL)arg0 onTarget:(NSObject *)arg1 withObject:(NSObject *)arg2;
+ (NSString *)taskWithContext:(BRAsyncTaskContext *)arg0 withBlock:(id /* block */)arg1;
+ (void)_runTaskBlock:(id /* block */)arg0;
+ (BRAsyncTask *)voidReturnValue;
+ (BRAsyncTask *)taskWithBlock:(id /* block */)arg0;
+ (void)initialize;

- (NSString *)_initWithSelector:(SEL)arg0 onTarget:(NSObject *)arg1 withObject:(NSObject *)arg2 withContext:(BRAsyncTaskContext *)arg3;
- (NSThread *)callingThread;
- (void)cancel;
- (void)dealloc;
- (NSString *)description;
- (int)state;
- (void)setState:(int)arg0;
- (NSString *)identifier;
- (id)invoke;
- (NSObject *)target;
- (SEL)selector;
- (BRAsyncTaskContext *)context;
- (void)setIdentifier:(NSString *)arg0;
- (NSObject *)object;
- (void)run;
- (int)result;

@end
