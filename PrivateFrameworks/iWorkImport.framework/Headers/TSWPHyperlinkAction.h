/* Runtime dump - TSWPHyperlinkAction
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPHyperlinkAction : TSWPTwoPartAction
{
    TSWPHyperlinkField * _hyperlinkField;
    TSDRep<TSWPHyperlinkHostRepProtocol> * _hyperlinkRep;
}

+ (TSWPHyperlinkAction *)hyperlinkActionWithHyperlink:(id)arg0 inRep:(NSObject *)arg1 action:(NSObject *)arg2;

- (TSWPHyperlinkAction *)initWithHyperlink:(OADHyperlink *)arg0 inRep:(NSObject *)arg1 action:(NSObject *)arg2;
- (void)dealloc;

@end
