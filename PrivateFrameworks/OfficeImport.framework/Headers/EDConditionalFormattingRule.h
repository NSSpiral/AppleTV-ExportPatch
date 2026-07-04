/* Runtime dump - EDConditionalFormattingRule
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDConditionalFormattingRule : NSObject
{
    EDResources * mResources;
    int mType;
    int mOperator;
    NSMutableArray * mFormulas;
    unsigned int mDifferentialStyleIndex;
    BOOL mStopIfTrue;
    BOOL mAppliesToDateOnly;
    long mPriority;
    BOOL mAboveAverage;
    BOOL mBottom;
    BOOL mEqualAverage;
    BOOL mPercent;
    unsigned long mRank;
    long mStdDev;
    NSString * mText;
    int mTimePeriod;
}

+ (NSArray *)conditionalFormattingRuleWithResources:(NSArray *)arg0;

- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setPriority:(long)arg0;
- (long)priority;
- (unsigned long)rank;
- (BOOL)percent;
- (unsigned int)formulaCount;
- (NSObject *)formulaAtIndex:(unsigned int)arg0;
- (EDConditionalFormattingRule *)initWithResources:(NSArray *)arg0;
- (int)compareToOtherRuleUsingPriority:(id)arg0;
- (int)operatorEnum;
- (void)setOperatorEnum:(int)arg0;
- (void)addFormula:(struct TSCEFormula *)arg0 worksheet:(EDWorksheet *)arg1;
- (NSObject *)differentialStyle;
- (void)setDifferentialStyle:(NSObject *)arg0;
- (BOOL)stopIfTrue;
- (void)setStopIfTrue:(BOOL)arg0;
- (BOOL)aboveAverage;
- (void)setAboveAverage:(BOOL)arg0;
- (BOOL)equalAverage;
- (void)setEqualAverage:(BOOL)arg0;
- (void)setPercent:(BOOL)arg0;
- (void)setRank:(unsigned long)arg0;
- (long)stdDev;
- (void)setStdDev:(long)arg0;
- (int)timePeriod;
- (void)setTimePeriod:(int)arg0;
- (BOOL)appliesToDateOnly;
- (void)setAppliesToDateOnly:(BOOL)arg0;
- (unsigned int)differentialStyleIndex;
- (void)setDifferentialStyleIndex:(unsigned int)arg0;
- (BOOL)bottom;
- (void)setBottom:(BOOL)arg0;

@end
