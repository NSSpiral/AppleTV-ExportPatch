/* Runtime dump - ABVCardCardDAVValueSetter
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter
{
    char _recordIsGroup;
    char _importingToExistingGroup;
}

@property char recordIsGroup;

+ (struct __CFDictionary *)_personToGroupPropertyMap;
+ (int)groupPropertyForPersonProperty:(int)arg0;

- (char)propertyIsValidForPerson:(unsigned int)arg0;
- (char)setImageData:(NSData *)arg0 cropRectX:(int)arg1 cropRectY:(int)arg2 cropRectWidth:(int)arg3 cropRectHeight:(int)arg4;
- (void)setRecordIsGroup:(char)arg0;
- (ABVCardCardDAVValueSetter *)initWithPerson:(void *)arg0 removeExistingProperties:(char)arg1;
- (ABVCardCardDAVValueSetter *)initWithGroup:(void *)arg0 removeExistingProperties:(char)arg1;
- (void *)copyParsedRecordWithSource:(void *)arg0 outRecordType:(unsigned int *)arg1;
- (void)_drainExistingProperties;
- (char)recordIsGroup;
- (void *)valueForProperty:(unsigned int)arg0;
- (char)setValue:(void *)arg0 forProperty:(unsigned int)arg1;
- (NSData *)imageData;

@end
