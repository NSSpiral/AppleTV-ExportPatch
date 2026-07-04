/* Runtime dump - WKDOMTextIterator
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMTextIterator : NSObject
{
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow> _upconvertedText;
}

@property (readonly) char atEnd;
@property (readonly) WKDOMRange * currentRange;
@property (readonly) unsigned int currentTextLength;
@property (readonly) unsigned short * currentTextPointer;

- (char)atEnd;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)advance;
- (WKDOMRange *)currentRange;
- (unsigned short *)currentTextPointer;
- (unsigned int)currentTextLength;
- (WKDOMTextIterator *)initWithRange:(NSObject *)arg0;

@end
