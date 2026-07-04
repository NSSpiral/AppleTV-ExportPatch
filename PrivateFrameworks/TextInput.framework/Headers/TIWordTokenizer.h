/* Runtime dump - TIWordTokenizer
 * Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIWordTokenizer : NSObject
{
    NSString * m_string;
    struct ? m_inlineBuffer;
    struct _NSRange m_tokenRange;
    struct _NSRange m_searchRange;
    unsigned int m_bufferOffset;
}

- (void)dealloc;
- (TIWordTokenizer *)init;
- (struct _NSRange)rangeOfCurrentToken;
- (NSString *)allTokensForString:(NSString *)arg0;
- (struct _NSRange)advanceToNextToken;
- (void)setString:(NSString *)arg0 withSearchRange:(struct _NSRange)arg1;

@end
