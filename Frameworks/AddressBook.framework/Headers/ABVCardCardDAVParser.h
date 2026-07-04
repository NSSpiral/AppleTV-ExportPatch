/* Runtime dump - ABVCardCardDAVParser
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardCardDAVParser : ABVCardParser
{
    NSMutableDictionary * _unknownAttributes;
    char _removeExistingProperties;
    char _localRecordHasAdditionalProperties;
    int _lastCropRectX;
    int _lastCropRectY;
    int _lastCropRectWidth;
    int _lastCropRectHeight;
    NSData * _lastCropRectChecksum;
}

@property (readonly) char localRecordHasAdditionalProperties;
@property (readonly) int lastCropRectX;
@property (readonly) int lastCropRectY;
@property (readonly) int lastCropRectWidth;
@property (readonly) int lastCropRectHeight;
@property (readonly) NSData * lastCropRectChecksum;

- (void)cleanUpCardState;
- (NSString *)defaultLabel;
- (void)setLocalRecordHasAdditionalProperties:(char)arg0;
- (void)noteLackOfValueForProperty:(unsigned int)arg0;
- (NSString *)genericLabel;
- (char)parseUID;
- (NSString *)defaultURLLabel;
- (char)_handleUnknownTag:(NSString *)arg0 withValue:(NSValue *)arg1;
- (void)noteLackOfValueForImageData;
- (NSString *)defaultADRLabel;
- (char)importToPerson:(void *)arg0 removeExistingProperties:(char)arg1;
- (char)importToGroup:(void *)arg0 removeExistingProperties:(char)arg1;
- (void *)createRecordInSource:(void *)arg0 outRecordType:(unsigned int *)arg1;
- (char)localRecordHasAdditionalProperties;
- (int)lastCropRectX;
- (int)lastCropRectY;
- (int)lastCropRectWidth;
- (int)lastCropRectHeight;
- (NSData *)lastCropRectChecksum;
- (void)dealloc;
- (ABVCardCardDAVParser *)initWithData:(NSData *)arg0;

@end
