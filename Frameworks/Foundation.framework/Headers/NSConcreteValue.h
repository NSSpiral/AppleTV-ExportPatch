/* Runtime dump - NSConcreteValue
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteValue : NSValue
{
    unsigned int _specialFlags;
    void * typeInfo;
}

+ (void)initialize;
+ (char)supportsSecureCoding;

- (void *)_value;
- (char)_matchType:(char *)arg0 size:(unsigned int)arg1;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSConcreteValue *)copyWithZone:(struct _NSZone *)arg0;
- (void)getValue:(void *)arg0;
- (char *)objCType;
- (char)isEqualToValue:(id)arg0;

@end
