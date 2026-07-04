/* Runtime dump - MFMailInlineTextAttachment
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailInlineTextAttachment : MFMessageTextAttachment
{
    MFMimeTextAttachment * _original;
    NSData * _iconImageData;
    struct CGSize _cachedImageSize;
    id _hasBeenDownloaded;
    char _displayableAsIcon;
}

@property char displayableAsIcon;

+ (unsigned int)precedenceLevel;

- (void)download;
- (char)isDisplayableInline;
- (unsigned int)approximateSize;
- (void)setDisplayableInline:(char)arg0;
- (char)isDisplayableInsidePlugin;
- (MFMailInlineTextAttachment *)initWithWrapper:(NSObject *)arg0;
- (void)_cacheImageSizeIfNecessary;
- (void)setDisplayableAsIcon:(char)arg0;
- (void)inlineDisplayData:(id *)arg0 mimeType:(id *)arg1;
- (char)displayableAsIcon;
- (void)setFileWrapper:(MFMessageFileWrapper *)arg0;
- (NSString *)persistentUniqueIdentifier;
- (MFMailInlineTextAttachment *)initWithMimeTextAttachment:(NSObject *)arg0 andMessageBody:(NSObject *)arg1;
- (id)textEncodingGuess;
- (NSObject *)mimeTextAttachment;
- (float)constrainedWidth;
- (void)_setImageDimensions:(struct CGSize)arg0;
- (void)setupForComposition;
- (void)setDisplayableInsidePlugin:(char)arg0;
- (void)setNeedsRedownload:(char)arg0;
- (char)needsRedownload;
- (void)dealloc;
- (char)hasBeenDownloaded;
- (char)shouldDownloadAttachmentOnDisplay;
- (struct CGSize)imageDimensions;

@end
