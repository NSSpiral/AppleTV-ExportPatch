/* Runtime dump - MFMessageBodyDOMParser
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyDOMParser : MFMessageBodyParser
{
    DOMDocument * _document;
}

+ (char)documentContainsAnyQuotation:(id)arg0;

- (MFMessageBodyDOMParser *)initWithDOMDocument:(NSObject *)arg0;
- (NSObject *)rangeForElement:(NSObject *)arg0;
- (Class)messageBodyElementClass;
- (void)_consumeAccumulatedNodes:(id)arg0;
- (void)extendRange:(NSObject *)arg0 toElement:(DOMNode *)arg1;
- (NSObject *)rangeFromElement:(NSObject *)arg0 toElement:(DOMNode *)arg1;
- (void)dealloc;
- (char)parse;

@end
