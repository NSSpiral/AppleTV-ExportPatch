/* Runtime dump - ABVCardCardDAVRecord
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardCardDAVRecord : ABVCardRecord

+ (char)includeREVInVCards;
+ (char)includeNotesInVCards;
+ (char)includeImageURIInVCards;
+ (char)includeABClipRectInVCardPhotos;

- (char)useThumbnailImageFormatIfAvailable;

@end
