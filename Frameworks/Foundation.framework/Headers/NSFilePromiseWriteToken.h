/* Runtime dump - NSFilePromiseWriteToken
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFilePromiseWriteToken : NSObject
{
    NSURL * promiseURL;
    NSURL * logicalURL;
}

@property (copy) NSURL * promiseURL;
@property (copy) NSURL * logicalURL;

- (void)setPromiseURL:(NSURL *)arg0;
- (void)setLogicalURL:(NSURL *)arg0;
- (NSURL *)promiseURL;
- (void)dealloc;
- (NSURL *)logicalURL;

@end
