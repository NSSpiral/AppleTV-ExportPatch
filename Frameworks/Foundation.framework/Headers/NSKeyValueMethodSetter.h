/* Runtime dump - NSKeyValueMethodSetter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueMethodSetter : NSKeyValueSetter
{
    struct objc_method * _method;
}

- (NSKeyValueMethodSetter *)initWithContainerClassID:(NSObject *)arg0 key:(NSString *)arg1 method:(struct objc_method *)arg2;
- (struct objc_method *)method;

@end
