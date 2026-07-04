/* Runtime dump - NSURLResponseInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLResponseInternal : NSObject
{
    struct _CFURLResponse * response;
}

- (void)dealloc;
- (NSURLResponseInternal *)initWithURLResponse:(struct _CFURLResponse *)arg0;

@end
