/* Runtime dump - MFMessageTextAttachment
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageTextAttachment : NSObject
{
    NSMutableDictionary * _cache;
}

@property (retain, nonatomic) MFMessageFileWrapper * fileWrapper;

+ (unsigned int)precedenceLevel;

- (char)isPass;
- (unsigned char)pass;
- (NSURL *)mf_markupURL;
- (struct CGSize)mf_markupSizeForImageScale:(unsigned int)arg0;
- (id)mf_markupStringForComposition:(char)arg0 prependBlankLine:(char)arg1 imageScale:(unsigned int)arg2;
- (void)setImageScalingFlags:(unsigned int)arg0;
- (unsigned int)imageScalingFlags;
- (char)isCalendarFile;
- (char)isDisplayableInline;
- (id)_contentTypeByStrippingZipIfNeeded:(char)arg0;
- (char)isContentOpenable;
- (char)_isSinglePagePDFThatIsAllowedToBeInline;
- (NSObject *)unzippedContentType;
- (char)isContentDownloadable;
- (char)isDisplayableInsidePlugin;
- (NSString *)mimeType;
- (NSString *)contentType;
- (void)download;
- (unsigned int)approximateSize;
- (MFMessageTextAttachment *)initWithWrapper:(NSObject *)arg0;
- (void)setMimePart:(MFMimePart *)arg0;
- (void)inlineDisplayData:(id *)arg0 mimeType:(id *)arg1;
- (void)setFileWrapper:(MFMessageFileWrapper *)arg0;
- (NSString *)persistentUniqueIdentifier;
- (id)textEncodingGuess;
- (char)needsRedownload;
- (void)dealloc;
- (MFMessageTextAttachment *)init;
- (NSString *)description;
- (void)setCachedValue:(id)arg0 forKey:(NSString *)arg1;
- (NSString *)cachedValueForKey:(NSString *)arg0;
- (char)isPlaceholder;
- (MFMimePart *)mimePart;
- (id)fileWrapperForcingDownload:(char)arg0;
- (char)hasBeenDownloaded;
- (char)shouldDownloadAttachmentOnDisplay;
- (NSData *)textEncodingNameForData:(NSData *)arg0 mimeType:(NSString *)arg1;
- (MFMessageFileWrapper *)fileWrapper;

@end
