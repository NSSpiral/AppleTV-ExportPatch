/* Runtime dump - WKTypeRefWrapper
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKTypeRefWrapper : NSObject
{
    struct WKRetainPtr<const void *> _object;
}

@property (readonly) void * object;

- (void *)object;
- (void).cxx_construct;
- (void).cxx_destruct;
- (WKTypeRefWrapper *)initWithObject:(void *)arg0;

@end
