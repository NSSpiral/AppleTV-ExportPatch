/* Runtime dump - TSCEReference
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReference : NSObject
{
    struct ? mRef;
    NSString * mOverrideText;
    NSString * mOverrideTextAsTyped;
    unsigned char mStickyBits;
    char mWasConstructedViaNames;
}

- (id)referenceTextWithCalculationEngine:(TSCECalculationEngine *)arg0 hostTableID:(struct __CFUUID *)arg1;
- (struct ?)rangeReference;
- (TSCEReference *)initWithRangeReference:(struct ?)arg0;
- (struct __CFUUID *)tableID;
- (TSCEReference *)initWithCellReference:(struct ?)arg0;
- (void)setWasConstructedViaNames:(char)arg0;
- (void)setOverrideText:(NSString *)arg0;
- (void)setStickyBits:(unsigned char)arg0;
- (void)setOverrideTextAsTyped:(id)arg0;
- (unsigned char)stickyBits;
- (id)referenceTextForAutocompleteWithCalculationEngine:(TSCECalculationEngine *)arg0 hostTableID:(struct __CFUUID *)arg1 stickyBits:(unsigned char)arg2 inputString:(NSString *)arg3 inputStringIsComplete:(char)arg4;
- (id)referenceTextForAutocompleteWithCalculationEngine:(TSCECalculationEngine *)arg0 contextSheetName:(NSString *)arg1 stickyBits:(unsigned char)arg2 inputString:(NSString *)arg3 inputStringIsComplete:(char)arg4;
- (id)referenceTextWithCalculationEngine:(TSCECalculationEngine *)arg0 contextSheetName:(NSString *)arg1;
- (char)wasConstructedViaNames;
- (struct ?)cReference;
- (NSString *)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(NSString *)arg0 partial:(char)arg1;
- (NSString *)overrideText;
- (id)overrideTextAsTyped;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void).cxx_construct;

@end
