/* Runtime dump - MFMimeTextAttachment
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMimeTextAttachment : MFMessageTextAttachment

- (void)download;
- (unsigned int)approximateSize;
- (NSString *)persistentUniqueIdentifier;
- (MFMimeTextAttachment *)initWithMimePart:(MFMimePart *)arg0;
- (char)hasBeenDownloaded;
- (id)_displayedMimePart;

@end
