/* Runtime dump - WebTextIterator
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebTextIterator : NSObject
{
    WebTextIteratorPrivate * _private;
}

- (char)atEnd;
- (void)dealloc;
- (NSString *)currentText;
- (void)advance;
- (WKDOMRange *)currentRange;
- (unsigned short *)currentTextPointer;
- (unsigned int)currentTextLength;
- (WebTextIterator *)initWithRange:(NSObject *)arg0;
- (DOMNode *)currentNode;

@end
