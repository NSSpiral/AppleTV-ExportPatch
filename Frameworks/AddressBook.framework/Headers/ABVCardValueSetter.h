/* Runtime dump - ABVCardValueSetter
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardValueSetter : NSObject

- (char)propertyIsValidForPerson:(unsigned int)arg0;
- (char)setImageData:(NSData *)arg0 cropRectX:(int)arg1 cropRectY:(int)arg2 cropRectWidth:(int)arg3 cropRectHeight:(int)arg4;
- (void)setValueInTemporaryCache:(NSObject *)arg0 forProperty:(unsigned int)arg1;
- (void *)valueForProperty:(unsigned int)arg0;
- (char)setValue:(void *)arg0 forProperty:(unsigned int)arg1;
- (NSData *)imageData;
- (char)setImageData:(NSData *)arg0;
- (NSString *)fullName;

@end
