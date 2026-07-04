/* Runtime dump - EDConditionalFormatting
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDConditionalFormatting : NSObject
{
    NSMutableArray * mRules;
    EDReferenceCollection * mRanges;
    BOOL mApplyToDate;
}

+ (EDConditionalFormatting *)conditionalFormatting;

- (void)dealloc;
- (EDConditionalFormatting *)init;
- (unsigned int)ruleCount;
- (NSObject *)ruleAtIndex:(unsigned int)arg0;
- (void)addRule:(NSObject *)arg0;
- (BOOL)isApplyToDate;
- (void)addRange:(NSObject *)arg0;
- (unsigned int)rangeCount;
- (struct _NSRange)rangeAtIndex:(unsigned int)arg0;
- (NSString *)rules;

@end
