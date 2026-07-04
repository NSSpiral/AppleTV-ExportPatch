/* Runtime dump - NSPinyinString
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPinyinString : NSString
{
    NSString * _string;
    unsigned int _syllableCount;
    unsigned int _score;
    unsigned int _rangeCount;
    unsigned int _replacementCount;
    unsigned int _transpositionCount;
    unsigned int _insertionCount;
    unsigned int _deletionCount;
    unsigned int _firstModificationIndex;
    struct _NSRange * _ranges;
    char _lastSyllableIsPartial;
}

+ (NSString *)_alternativesForInputString:(NSString *)arg0;
+ (NSString *)_prefixesForInputString:(NSString *)arg0;
+ (NSString *)_correctionsForInputString:(NSString *)arg0;
+ (NSString *)alternativesForInputString:(NSString *)arg0;
+ (NSString *)prefixesForInputString:(NSString *)arg0;

- (NSPinyinString *)initWithString:(NSString *)arg0 syllableCount:(unsigned int)arg1 lastSyllableIsPartial:(char)arg2 score:(unsigned int)arg3 replacementCount:(unsigned int)arg4 transpositionCount:(unsigned int)arg5 insertionCount:(unsigned int)arg6 deletionCount:(unsigned int)arg7 indexOfFirstModification:(unsigned int)arg8 rangeCount:(unsigned int)arg9 ranges:(struct _NSRange *)arg10;
- (unsigned int)syllableCount;
- (char)lastSyllableIsPartial;
- (unsigned int)numberOfNonPinyinRanges;
- (unsigned int)numberOfReplacements;
- (unsigned int)numberOfTranspositions;
- (unsigned int)numberOfInsertions;
- (unsigned int)numberOfDeletions;
- (unsigned int)indexOfFirstModification;
- (struct _NSRange)nonPinyinRangeAtIndex:(unsigned int)arg0;
- (NSIndexSet *)nonPinyinIndexSet;
- (NSPinyinString *)initWithString:(NSString *)arg0 syllableCount:(unsigned int)arg1 lastSyllableIsPartial:(char)arg2 score:(unsigned int)arg3 replacementCount:(unsigned int)arg4 transpositionCount:(unsigned int)arg5 insertionCount:(unsigned int)arg6 deletionCount:(unsigned int)arg7 rangeCount:(unsigned int)arg8 ranges:(struct _NSRange *)arg9;
- (void)dealloc;
- (NSPinyinString *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)length;
- (NSString *)string;
- (Class)classForCoder;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (unsigned int)score;

@end
