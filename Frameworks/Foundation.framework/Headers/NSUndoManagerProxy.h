/* Runtime dump - NSUndoManagerProxy
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUndoManagerProxy : NSProxy
{
    NSUndoManager * _manager;
    Class _targetClass;
}

- (NSUndoManagerProxy *)initWithManager:(NSUndoManager *)arg0 targetClass:(Class)arg1;
- (void)superRelease;
- (NSUndoManagerProxy *)retain;
- (void)release;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (char)_tryRetain;
- (void)forwardInvocation:(NSInvocation *)arg0;

@end
