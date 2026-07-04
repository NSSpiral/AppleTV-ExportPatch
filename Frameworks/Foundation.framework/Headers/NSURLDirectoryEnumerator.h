/* Runtime dump - NSURLDirectoryEnumerator
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator
{
    struct __CFURLEnumerator * _enumerator;
    id _errorHandler;
    char shouldContinue;
}

@property (copy) id errorHandler;

- (void)skipDescendents;
- (NSURLDirectoryEnumerator *)initWithURL:(NSString *)arg0 includingPropertiesForKeys:(NSArray *)arg1 options:(unsigned int)arg2 errorHandler:(id /* block */)arg3;
- (void)dealloc;
- (NSObject *)nextObject;
- (unsigned int)level;
- (void)skipDescendants;
- (void)setErrorHandler:(id /* block */)arg0;
- (id /* block */)errorHandler;
- (NSDictionary *)fileAttributes;
- (NSDictionary *)directoryAttributes;
- (void)finalize;

@end
