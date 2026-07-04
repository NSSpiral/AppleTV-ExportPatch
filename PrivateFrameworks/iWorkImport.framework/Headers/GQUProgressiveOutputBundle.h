/* Runtime dump - GQUProgressiveOutputBundle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUProgressiveOutputBundle : NSObject <GQUOutputBundle>
{
    GQUProgressiveHelper * mHelper;
    struct __CFDictionary * mQuickLookProperties;
    struct __CFDictionary * mAttachmentsURLs;
    struct __CFDictionary * mComputedAttachments;
    struct __CFString * mUuidStr;
    struct __CFString * mUriScheme;
    char mPreviewStarted;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDocumentSize:(struct CGSize)arg0;
- (void)setPageElementXPath:(struct __CFString *)arg0 withThumbnailsOnLeft:(char)arg1;
- (void)startProgressiveData;
- (char)setData:(struct __CFData *)arg0 mimeType:(struct __CFString *)arg1 forNamedResource:(struct __CFString *)arg2;
- (char)setDataForMainHtmlResource:(struct __CFData *)arg0;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg0;
- (void)setCurrentSheetUri:(struct __CFString *)arg0;
- (char)appendData:(struct __CFData *)arg0 mimeType:(struct __CFString *)arg1 resourceName:(struct __CFString *)arg2;
- (void)closeAttachment:(struct __CFString *)arg0;
- (struct __CFURL *)getAttachmentURL:(struct __CFString *)arg0 mimeType:(struct __CFString *)arg1;
- (void)dealloc;
- (GQUProgressiveOutputBundle *)initWithHandler:(id /* block */)arg0;

@end
