/* Runtime dump - ATVJSClassWrapper
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVJSClassWrapper : NSObject
{
    struct OpaqueJSClass * _jsClassRef;
}

@property (readonly, nonatomic) struct OpaqueJSClass * jsClassRef;

- (void)dealloc;
- (ATVJSClassWrapper *)initWithJSClassRef:(struct OpaqueJSClass *)arg0;
- (struct OpaqueJSClass *)jsClassRef;

@end
