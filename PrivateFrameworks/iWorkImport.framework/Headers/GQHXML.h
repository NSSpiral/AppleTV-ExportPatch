/* Runtime dump - GQHXML
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHXML : NSObject
{
    <GQHXMLOutput> * mOutput;
    char mUseExternalCss;
    struct __CFString * mFilename;
    struct __CFString * mCssFilename;
    struct __CFString * mCss;
    struct __CFString * mLastCss;
    BOOL isProgressive;
}

@property (readonly) BOOL isProgressive;

- (void)setAttribute:(char *)arg0 cfStringValue:(struct __CFString *)arg1;
- (void)endElementWithExpectedName:(char *)arg0;
- (void)addContent:(struct __CFString *)arg0;
- (void)addStyleClass:(struct __CFString *)arg0;
- (struct __CFData *)createProgressiveHtml;
- (struct __CFData *)createProgressiveeCSSwithStyleTags:(unsigned char)arg0;
- (struct __CFString *)cssFilename;
- (GQHXML *)initEmptyWithFilename:(struct __CFString *)arg0 useExternalCss:(char)arg1;
- (void)addMetaTagWithTextFormat:(struct __CFString *)arg0;
- (void)addCharRef:(char *)arg0;
- (void)addXmlCharContent:(char *)arg0;
- (char)writeToOutputBundle:(NSObject *)arg0 isThumbnail:(char)arg1;
- (GQHXML *)initWithFilename:(struct __CFString *)arg0 documentSize:(struct CGSize *)arg1 outputBundle:(NSObject *)arg2 useExternalCss:(char)arg3;
- (void)addStyleClassLast:(struct __CFString *)arg0;
- (void)setAttribute:(char *)arg0 intValue:(int)arg1;
- (void)addViewportMetaTagForDocumentSize:(struct CGSize)arg0;
- (void)setAttribute:(char *)arg0 floatValue:(float)arg1;
- (void)addViewportMetaTagForDocumentSize:(struct CGSize)arg0 maximumScale:(float)arg1;
- (void)dealloc;
- (void)setAttribute:(char *)arg0 value:(char *)arg1;
- (BOOL)isProgressive;
- (void)startElement:(char *)arg0;
- (void)endElement;

@end
