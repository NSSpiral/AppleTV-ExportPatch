/* Runtime dump - MFMessageBodyOriginalTextSubparser
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser
{
    NSMutableArray * _lastTextElements;
    <MFMessageBodyElement_Private> * _lastNonWhitespaceTextElement;
    id _foundTextBlock;
    id _foundWhitespaceBlock;
    char _foundText;
    char _foundForwardSeparator;
}

- (void)copyBlocks;
- (void)setFoundTextBlock:(id /* block */)arg0;
- (void)messageBodyParser:(NSObject *)arg0 foundMessageBodyElement:(NSObject *)arg1;
- (void)messageBodyParserDidFinishParsing:(id)arg0;
- (void)_consumeTextElement:(NSObject *)arg0 isAttribution:(char)arg1;
- (void)_consumeAnyLastTextElementAsAttribution:(char)arg0;
- (void)setFoundWhitespaceBlock:(id /* block */)arg0;
- (void)dealloc;

@end
