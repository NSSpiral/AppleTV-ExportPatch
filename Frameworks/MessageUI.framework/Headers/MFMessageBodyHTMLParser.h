/* Runtime dump - MFMessageBodyHTMLParser
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyHTMLParser : MFMessageBodyParser
{
    NSScanner * _scanner;
}

- (int)messageBodyStringAccumulatorDefaultOptions;
- (Class)messageBodyElementClass;
- (void)didFindError:(NSError *)arg0;
- (void)_findBody;
- (void)_consumeNodesFromNode:(NSObject *)arg0 upToNode:(NSObject *)arg1;
- (char)_isMilestoneTagName:(NSString *)arg0;
- (MFMessageBodyHTMLParser *)initWithHTML:(id)arg0;
- (void)dealloc;
- (char)parse;

@end
