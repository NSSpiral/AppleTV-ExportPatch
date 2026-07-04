/* Runtime dump - MFMessageFileWrapper
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageFileWrapper : NSObject
{
    NSString * _path;
    NSString * _filename;
    NSString * _preferredFilename;
    NSData * _data;
    NSMutableDictionary * _attributes;
    NSString * _linkDestination;
    NSString * _url;
    int _type;
}

+ (NSArray *)supportedArchivedClassNames;

- (char)isDisplayableImage;
- (id)preferredFilenameStrippingZipIfNeededUseApplications:(char)arg0;
- (char)isMedia;
- (char)isDisplayableByWebKit;
- (char)_pathExtensionEquals:(id)arg0;
- (char)isRFC822;
- (char)isZip;
- (float)minimumZoomFontSize;
- (MFMessageFileWrapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)preferredFilename;
- (NSDictionary *)fileWrappers;
- (char)isSymbolicLink;
- (void)setFileAttributes:(NSDictionary *)arg0;
- (void)setMeetingStorePersistentID:(NSString *)arg0;
- (char)isPDFFile;
- (NSString *)icsRepresentation;
- (void)dealloc;
- (NSString *)description;
- (void)setType:(unsigned long)arg0;
- (unsigned long)type;
- (NSString *)path;
- (NSURL *)URL;
- (void)setPath:(NSString *)arg0;
- (NSString *)mimeType;
- (void)setURL:(NSString *)arg0;
- (MFMessageFileWrapper *)initWithPath:(NSString *)arg0;
- (char)isRegularFile;
- (NSData *)regularFileContents;
- (NSString *)filename;
- (char)isDirectory;
- (void)setFilename:(NSString *)arg0;
- (void)setMessageID:(NSString *)arg0;
- (void)_isImage:(char *)arg0 orPDFFile:(char *)arg1;
- (void)setFileProtection:(id)arg0;
- (void)setFinderFlags:(unsigned short)arg0;
- (unsigned short)finderFlags;
- (void)setEventUniqueID:(NSObject *)arg0;
- (NSObject *)eventUniqueID;
- (void)setICSRepresentation:(NSDictionary *)arg0;
- (id)fileProtection;
- (char)isUnzippableFile;
- (MFMessageFileWrapper *)initSymbolicLinkWithDestination:(NSObject *)arg0;
- (void)setContentID:(NSString *)arg0;
- (NSString *)contentID;
- (char)isPlaceholder;
- (char)isImageFile;
- (NSFileAccessNode *)symbolicLinkDestination;
- (NSString *)meetingStorePersistentID;
- (NSString *)messageID;
- (void)setMimeType:(NSString *)arg0;
- (NSString *)inferredMimeType;
- (NSDictionary *)fileAttributes;
- (unsigned long)creator;
- (MFMessageFileWrapper *)initRegularFileWithContents:(id)arg0;
- (void)setPreferredFilename:(NSString *)arg0;
- (void)setCreator:(unsigned long)arg0;

@end
