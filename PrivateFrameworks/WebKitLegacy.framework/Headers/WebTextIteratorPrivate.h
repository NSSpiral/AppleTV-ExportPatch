/* Runtime dump - WebTextIteratorPrivate
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebTextIteratorPrivate : NSObject
{
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow> _upconvertedText;
}

+ (void)initialize;

- (void).cxx_construct;
- (void).cxx_destruct;

@end
