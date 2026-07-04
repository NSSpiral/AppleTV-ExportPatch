/* Runtime dump - PRZhuyinModification
 * Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

@interface PRZhuyinModification : PRModification
{
    struct _NSRange _range;
    NSString * _replacementString;
    unsigned int _modificationType;
    struct _NSRange _syllableRange;
    struct _NSRange _additionalSyllableRange;
    double _modificationScore;
    unsigned int _syllableCountScore;
    id _letters;
    char _producesPartialSyllable;
}

- (NSString *)replacementString;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (struct _NSRange)range;
- (PRZhuyinModification *)initWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1 modificationType:(unsigned int)arg2 syllableRange:(struct _NSRange)arg3 additionalSyllableRange:(struct _NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned int)arg6 syllableLetters:(char *)arg7 producesPartialSyllable:(char)arg8;
- (unsigned int)syllableCountScore;
- (char)producesPartialSyllable;
- (PRZhuyinModification *)initWithRange:(struct _NSRange)arg0 replacementString:(NSString *)arg1 modificationType:(unsigned int)arg2 syllableRange:(struct _NSRange)arg3 modificationScore:(double)arg4 syllableCountScore:(unsigned int)arg5 syllableLetters:(char *)arg6 producesPartialSyllable:(char)arg7;
- (struct _NSRange)combinedSyllableRange;
- (char)_shouldAppendLetter:(unsigned char)arg0;
- (unsigned int)modificationType;
- (struct _NSRange)syllableRange;
- (double)modificationScore;
- (struct _NSRange)additionalSyllableRange;

@end
