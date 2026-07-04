/* Runtime dump - GQHDOMXML
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHDOMXML : NSObject <GQHXMLOutput>
{
    struct _xmlDoc * mXMLDoc;
    struct _xmlNode * mCurrentNode;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)endElementWithExpectedName:(char *)arg0;
- (struct __CFData *)createProgressiveHtml;
- (void)addCharRef:(char *)arg0;
- (void)addXmlCharContent:(char *)arg0;
- (GQHDOMXML *)initEmpty;
- (GQHDOMXML *)initWithHead;
- (struct __CFData *)createHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg0;
- (void)removeStyleSheetLinkNodeAndAddStyle:(struct __CFString *)arg0;
- (void)dealloc;
- (void)setAttribute:(char *)arg0 value:(char *)arg1;
- (void)startElement:(char *)arg0;
- (void)endElement;

@end
