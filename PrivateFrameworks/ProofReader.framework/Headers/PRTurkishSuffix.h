/* Runtime dump - PRTurkishSuffix
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRTurkishSuffix : NSObject
{
    NSString * _pattern;
    NSString * _name;
    id _patternBuffer;
    id _isOptional;
    unsigned int _patternBufferLength;
    int _suffixType;
    char _postponesApostrophe;
}

+ (PRTurkishSuffix *)standardTurkishNounSuffixes;
+ (PRTurkishSuffix *)standardTurkishVerbSuffixes;
+ (PRTurkishSuffix *)standardTurkishSuffixes;
+ (void)_enumerateSuffixMatchesForBuffer:(char *)arg0 length:(unsigned int)arg1 followedByLetter:(unsigned char)arg2 options:(unsigned int)arg3 depth:(unsigned int)arg4 matchState:(int)arg5 suffixStack:(id *)arg6 suffixRangeStack:(struct _NSRange *)arg7 usingBlock:(id /* block */)arg8;
+ (void)enumerateSuffixMatchesForBuffer:(char *)arg0 length:(unsigned int)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;
+ (void)enumerateSuffixMatchesForWord:(id)arg0 options:(unsigned int)arg1 usingBlock:(id /* block */)arg2;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (void)_fillPatternBuffer;
- (int)suffixType;
- (char)postponesApostrophe;
- (PRTurkishSuffix *)initWithPattern:(NSString *)arg0 name:(NSString *)arg1 type:(int)arg2 postponesApostrophe:(char)arg3;
- (unsigned int)matchingIndexInBuffer:(char *)arg0 length:(unsigned int)arg1 followedByLetter:(unsigned char)arg2 matchWithNameOnly:(char *)arg3;
- (NSString *)pattern;

@end
