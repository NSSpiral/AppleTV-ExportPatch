/* Runtime dump - ABVCardPersonValueSetter
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardPersonValueSetter : ABVCardValueSetter
{
    void * _person;
    struct __CFArray * _properties;
}

+ (struct __CFArray *)supportedProperties;

- (ABVCardPersonValueSetter *)initWithPerson:(void *)arg0;
- (struct __CFArray *)foundProperties;
- (char)setImageData:(NSData *)arg0 cropRectX:(int)arg1 cropRectY:(int)arg2 cropRectWidth:(int)arg3 cropRectHeight:(int)arg4;
- (void)setValueInTemporaryCache:(NSObject *)arg0 forProperty:(unsigned int)arg1;
- (void)dealloc;
- (void *)valueForProperty:(unsigned int)arg0;
- (char)setValue:(void *)arg0 forProperty:(unsigned int)arg1;
- (NSData *)imageData;
- (NSString *)fullName;

@end
