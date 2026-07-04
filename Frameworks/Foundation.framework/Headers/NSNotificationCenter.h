/* Runtime dump - NSNotificationCenter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationCenter : NSObject
{
    void * _impl;
    void * _callback;
    id _pad;
}

+ (NSNotificationCenter *)defaultCenter;

- (NSObject *)mf_addImmediateObserver:(NSObject *)arg0 selector:(SEL)arg1 name:(NSString *)arg2 object:(NSObject *)arg3;
- (void)mf_removeObservers:(id)arg0;
- (void)postNotificationName:(NSString *)arg0;
- (void)__mainThreadPostNotificationName:(NSString *)arg0 object:(NSObject *)arg1;
- (void)__mainThreadPostNotificationName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
- (void)__mainThreadPostNotification:(NSNotification *)arg0;
- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 name:(NSString *)arg2 object:(NSObject *)arg3;
- (void)dealloc;
- (NSNotificationCenter *)init;
- (NSString *)description;
- (void)removeObserver:(NSObject *)arg0 name:(NSString *)arg1 object:(NSObject *)arg2;
- (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1 userInfo:(NSDictionary *)arg2;
- (void)postNotificationName:(NSString *)arg0 object:(NSObject *)arg1;
- (NSString *)addObserverForName:(NSString *)arg0 object:(NSObject *)arg1 queue:(NSObject *)arg2 usingBlock:(id /* block */)arg3;
- (char)isEmpty;
- (void)removeObserver:(NSObject *)arg0;
- (void)postNotification:(NSNotification *)arg0;
- (void)finalize;

@end
