/* Runtime dump - WebBookmarkTitleWordTokenizer
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarkTitleWordTokenizer : NSObject
{
    NSString * _string;
    unsigned int _stringLength;
    TIWordTokenizer * _wordTokenizer;
    struct _NSRange _rangeOfNextToken;
    unsigned int _startOfUnclassifiedRangeBeforeNextToken;
}

+ (void)initialize;

- (void)dealloc;
- (WebBookmarkTitleWordTokenizer *)init;
- (void)setString:(NSString *)arg0;
- (struct _NSRange)advanceToNextToken;

@end
