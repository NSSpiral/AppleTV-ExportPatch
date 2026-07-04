/* Runtime dump - TSCERegexMatcher
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERegexMatcher : NSObject
{
    NSRegularExpression * mRegex;
}

+ (TSCERegexMatcher *)regexMatcherWithStringMatch:(id)arg0;

- (TSCERegexMatcher *)initWithStringToMatch:(id)arg0;
- (void)dealloc;
- (char)matches:(TSDMagicMoveTextureZOrdererFlattenableMatches *)arg0;

@end
