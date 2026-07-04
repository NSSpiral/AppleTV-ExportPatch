/* Runtime dump - GQHStreamedXML
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHStreamedXML : NSObject <GQHXMLOutput>
{
    struct _xmlOutputBuffer * mOutputBuffer;
    struct __CFData * mData;
    struct __CFArray * mElementNameStack;
    int mLastOp;
    char mNeedNewlineBeforeNextElement;
    struct _xmlDoc * mXMLDoc;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)endElementWithExpectedName:(char *)arg0;
- (struct __CFData *)createProgressiveHtml;
- (void)addCharRef:(char *)arg0;
- (void)addXmlCharContent:(char *)arg0;
- (GQHStreamedXML *)initEmpty;
- (GQHStreamedXML *)initWithHead;
- (struct __CFData *)createHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg0;
- (void)pushElementName:(char *)arg0;
- (char *)popElementName;
- (char *)peekElementName;
- (void)dealloc;
- (void)setAttribute:(char *)arg0 value:(char *)arg1;
- (void)startElement:(char *)arg0;
- (void)endElement;

@end
