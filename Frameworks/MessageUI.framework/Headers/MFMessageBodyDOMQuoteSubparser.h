/* Runtime dump - MFMessageBodyDOMQuoteSubparser
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMessageBodyDOMQuoteSubparser : MFMessageBodySubparser
{
    id _foundDedentedAttributionRangeBlock;
    id _foundTrailingEmptyQuoteRangeBlock;
    <MFMessageBodyElement_Private> * _lastUnindentedElement;
    <MFMessageBodyElement_Private> * _lastUnindentedAttributionHint;
    NSMutableArray * _unindentedSiblingNodes;
    unsigned int _unindentedSiblingGap;
    DOMRange * _trailingEmptyQuoteRange;
    unsigned int _trailingEmptyQuoteLevel;
}

- (void)setFoundDedentedAttributionRangeBlock:(id /* block */)arg0;
- (void)setFoundTrailingEmptyQuoteRangeBlock:(id /* block */)arg0;
- (void)copyBlocks;
- (void)messageBodyParser:(NSObject *)arg0 foundMessageBodyElement:(NSObject *)arg1;
- (void)_enumerateSurroundableRangesInRange:(NSObject *)arg0 withBlock:(id /* block */)arg1;
- (char)doesRange:(NSObject *)arg0 containAnyElementWithTagName:(NSString *)arg1;
- (void)dealloc;

@end
