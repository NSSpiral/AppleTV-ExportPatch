/* Runtime dump - GQUQuicklookOutputBundle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary * mQuicklookProperties;
    struct __CFDictionary * mAttachments;
    struct __CFData * mMainHtmlData;
    struct __CFString * mUriScheme;
    struct __CFString * mUuidStr;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDocumentSize:(struct CGSize)arg0;
- (void)setPageElementXPath:(struct __CFString *)arg0 withThumbnailsOnLeft:(char)arg1;
- (char)setData:(struct __CFData *)arg0 mimeType:(struct __CFString *)arg1 forNamedResource:(struct __CFString *)arg2;
- (char)setDataForMainHtmlResource:(struct __CFData *)arg0;
- (struct __CFString *)createUriForResource:(struct __CFString *)arg0;
- (char)giveOutputToPreviewRequest:(struct __QLPreviewRequest *)arg0;
- (GQUQuicklookOutputBundle *)initWithUriScheme:(struct __CFString *)arg0;
- (struct __CFData *)mainHtmlData;
- (struct __CFDictionary *)quicklookDictionary;
- (void)dealloc;
- (GQUQuicklookOutputBundle *)init;

@end
