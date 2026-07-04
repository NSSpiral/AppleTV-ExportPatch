/* Runtime dump - NSAssertionHandler
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAssertionHandler : NSObject
{
    void * _reserved;
}

+ (NSAssertionHandler *)currentHandler;

- (void)handleFailureInMethod:(SEL)arg0 object:(NSObject *)arg1 file:(char *)arg2 lineNumber:(int)arg3 description:(NSString *)arg4;
- (void)handleFailureInFunction:(id)arg0 file:(char *)arg1 lineNumber:(int)arg2 description:(NSString *)arg3;

@end
