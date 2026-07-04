/* Runtime dump - PSITokenizer
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSITokenizer : NSObject
{
    NSCharacterSet * _excludedSingleCharacterSet;
}

- (void)dealloc;
- (PSITokenizer *)init;
- (void)tokenizeString:(NSString *)arg0 withOptions:(int)arg1 tokenOutput:(struct tokenOutput_t *)arg2;
- (NSString *)newTokensFromString:(NSString *)arg0 withOptions:(int)arg1 outCopyRanges:(id *)arg2;

@end
