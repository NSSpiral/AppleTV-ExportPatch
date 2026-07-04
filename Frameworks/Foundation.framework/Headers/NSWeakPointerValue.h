/* Runtime dump - NSWeakPointerValue
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSWeakPointerValue : NSValue
{
    void * _value;
    void * _weakValue;
}

- (NSWeakPointerValue *)initWithPointer:(void *)arg0;
- (unsigned int)hash;
- (NSWeakPointerValue *)copyWithZone:(struct _NSZone *)arg0;
- (void)getValue:(void *)arg0;
- (id)nonretainedObjectValue;
- (char *)objCType;
- (char)isEqualToValue:(id)arg0;

@end
