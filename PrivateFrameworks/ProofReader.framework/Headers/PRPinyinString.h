/* Runtime dump - PRPinyinString
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRPinyinString : NSPinyinString
{
    unsigned int _originalLength;
    unsigned int _originalCheckedLength;
    unsigned int _modificationCount;
    unsigned int * _modificationTypes;
    struct _NSRange * _originalRanges;
    struct _NSRange * _finalRanges;
    struct _NSRange * _originalSyllableRanges;
    struct _NSRange * _originalAdditionalSyllableRanges;
}

+ (NSString *)alternativesForInputString:(NSString *)arg0;
+ (NSString *)prefixesForInputString:(NSString *)arg0;
+ (NSString *)correctionsForInputString:(NSString *)arg0;

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
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)length;
- (NSString *)string;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (unsigned int)numberOfModifications;
- (unsigned int)typeOfModificationAtIndex:(unsigned int)arg0;
- (struct _NSRange)originalRangeForModificationAtIndex:(unsigned int)arg0;
- (struct _NSRange)finalRangeForModificationAtIndex:(unsigned int)arg0;
- (struct _NSRange)originalSyllableRangeForModificationAtIndex:(unsigned int)arg0;
- (struct _NSRange)originalAdditionalSyllableRangeForModificationAtIndex:(unsigned int)arg0;
- (NSString *)annotatedString;
- (unsigned int)originalLength;
- (unsigned int)originalCheckedLength;
- (PRPinyinString *)initWithString:(NSString *)arg0 syllableCount:(unsigned int)arg1 lastSyllableIsPartial:(char)arg2 score:(unsigned int)arg3 originalLength:(unsigned int)arg4 modificationType:(unsigned int)arg5 originalModificationRange:(struct _NSRange)arg6 finalModificationRange:(struct _NSRange)arg7;
- (PRPinyinString *)initWithString:(NSString *)arg0 syllableCount:(unsigned int)arg1 lastSyllableIsPartial:(char)arg2 score:(unsigned int)arg3 originalLength:(unsigned int)arg4 modificationType:(unsigned int)arg5 originalModificationRange:(struct _NSRange)arg6 finalModificationRange:(struct _NSRange)arg7 originalSyllableRange:(struct _NSRange)arg8;
- (PRPinyinString *)initWithString:(NSString *)arg0 syllableCount:(unsigned int)arg1 lastSyllableIsPartial:(char)arg2 score:(unsigned int)arg3 originalLength:(unsigned int)arg4 modificationType:(unsigned int)arg5 originalModificationRange:(struct _NSRange)arg6 finalModificationRange:(struct _NSRange)arg7 originalSyllableRange:(struct _NSRange)arg8 originalAdditionalSyllableRange:(struct _NSRange)arg9;
- (PRPinyinString *)initWithUncheckedString:(NSString *)arg0 score:(unsigned int)arg1 originalLength:(unsigned int)arg2;
- (PRPinyinString *)initWithString:(NSString *)arg0 syllableCount:(unsigned int)arg1 lastSyllableIsPartial:(char)arg2 score:(unsigned int)arg3 originalLength:(unsigned int)arg4 originalCheckedLength:(unsigned int)arg5 numberOfModifications:(unsigned int)arg6 modificationTypes:(unsigned int *)arg7 originalModificationRanges:(struct _NSRange *)arg8 finalModificationRanges:(struct _NSRange *)arg9 originalSyllableRanges:(struct _NSRange *)arg10 originalAdditionalSyllableRanges:(struct _NSRange *)arg11;
- (unsigned int)finalCheckedLength;
- (unsigned int)score;

@end
