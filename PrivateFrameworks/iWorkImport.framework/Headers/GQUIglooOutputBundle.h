/* Runtime dump - GQUIglooOutputBundle
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle>
{
    struct __CFDictionary * mAttachments;
    struct __CFData * mMainHtmlData;
    struct __CFString * mUriPrefix;
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
- (struct __CFData *)mainHtmlData;
- (void)setUriPrefix:(struct __CFString *)arg0;
- (struct __CFDictionary *)createOutputDictionary;
- (void)dealloc;
- (GQUIglooOutputBundle *)init;
- (struct __CFDictionary *)attachments;

@end
