/* Runtime dump - NSFileCoordinatorAccessorBlockCompletion
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileCoordinatorAccessorBlockCompletion : NSObject
{
    id block;
    int count;
}

+ (NSFileCoordinatorAccessorBlockCompletion *)completionWithBlock:(id /* block */)arg0;

- (void)decrement;
- (void)increment;
- (void)dealloc;

@end
