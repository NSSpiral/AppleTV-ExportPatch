/* Runtime dump - SCRCMathExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathExpression : NSObject
{
    SCRCMathExpression * _parent;
    unsigned int _cachedMaximumDepth;
}

@property (readonly, nonatomic) NSArray * subExpressions;
@property (nonatomic) SCRCMathExpression * parent;
@property (readonly, nonatomic) NSArray * children;
@property (readonly, nonatomic) char isRangeSubSuperscript;
@property (readonly, nonatomic) char canBeUsedWithRange;
@property (readonly, nonatomic) char isBaseSubSuperscript;
@property (readonly, nonatomic) char canBeUsedWithBase;
@property (readonly, nonatomic) char isNumber;
@property (readonly, nonatomic) char isInteger;
@property (readonly, nonatomic) int integerValue;
@property (readonly, nonatomic) char isNaturalSuperscript;
@property (readonly, nonatomic) char hasSimpleArrayOfChildren;
@property (readonly, nonatomic) char isEllipsis;
@property (readonly, nonatomic) char isTermSeparator;
@property (readonly, nonatomic) char isOperationSymbol;
@property (readonly, nonatomic) char isFenceDelimiter;
@property (readonly, nonatomic) char isFunctionName;
@property (readonly, nonatomic) char isWordOrAbbreviation;
@property (readonly, nonatomic) unsigned int fractionLevel;
@property (readonly, nonatomic) char isSimpleNumericalFraction;
@property (readonly, nonatomic) char beginsWithSpace;
@property (readonly, nonatomic) char endsWithSpace;
@property (readonly, nonatomic) char isMultiRowTable;
@property (readonly, nonatomic) char isUnlinedFraction;
@property (readonly, nonatomic) NSString * latexFormatStringAsOver;
@property (readonly, nonatomic) NSString * latexFormatStringAsUnder;
@property (readonly, nonatomic) char canBeWrappedInLatexMathIndicators;
@property (readonly, nonatomic) NSArray * siblings;

+ (Class)_classForExpressionType:(NSObject *)arg0;
+ (void)setPathToSegmentOrderingPlist:(id)arg0;
+ (NSDictionary *)mathExpressionWithDictionary:(NSDictionary *)arg0;

- (char)isNumber;
- (SCRCMathExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)localizedStringForKey:(NSString *)arg0;
- (int)integerValue;
- (SCRCMathExpression *)parent;
- (void)setParent:(SCRCMathExpression *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSArray *)subExpressions;
- (unsigned int)maximumDepth;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (unsigned int)numberOfTables;
- (NSNumber *)localizedStringForNumber:(NSNumber *)arg0;
- (id)latexDescriptionInMathMode:(char)arg0;
- (NSString *)latexMathModeDescription;
- (NSBundle *)_scrcBundle;
- (NSString *)localizedAttributedStringForKey:(NSString *)arg0 treePosition:(NSObject *)arg1;
- (NSString *)localizedAttributedStringForKey:(NSString *)arg0;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2 prefix:(NSString *)arg3 suffix:(NSString *)arg4;
- (id)speakableSegments:(id)arg0 withPrefix:(NSString *)arg1 suffix:(NSString *)arg2;
- (void)_applyTreePositionOfOriginalSegment:(id)arg0 toPrefixedOrSuffixedSegment:(id)arg1;
- (unsigned int)fractionLevel;
- (id)fenceDelimiters;
- (NSString *)latexIdentifierForIdentifier:(NSString *)arg0;
- (NSString *)speakableDescription;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1 isPartOfWord:(char)arg2;
- (NSObject *)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg0;
- (NSString *)dollarCodeDescription;
- (NSObject *)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(NSObject *)arg0;
- (NSObject *)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(NSObject *)arg0 numberOfOuterRadicals:(unsigned int)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1 openOperator:(id)arg2 openOperatorTreePosition:(NSObject *)arg3 closeOperator:(id)arg4 closeOperatorTreePosition:(NSObject *)arg5;
- (id)speakableSegmentsUpToDepth:(unsigned int)arg0;
- (NSObject *)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (id)speakableSummary;
- (NSString *)latexDescription;
- (char)isRangeSubSuperscript;
- (char)canBeUsedWithRange;
- (char)isBaseSubSuperscript;
- (char)canBeUsedWithBase;
- (char)isInteger;
- (char)isNaturalSuperscript;
- (char)hasSimpleArrayOfChildren;
- (char)isEllipsis;
- (char)isTermSeparator;
- (char)isOperationSymbol;
- (char)isFenceDelimiter;
- (char)isFunctionName;
- (char)isWordOrAbbreviation;
- (char)isSimpleNumericalFraction;
- (char)beginsWithSpace;
- (char)endsWithSpace;
- (char)isMultiRowTable;
- (char)isUnlinedFraction;
- (char)canFormWordStartingWithExpression:(NSObject *)arg0;
- (NSString *)latexFormatStringAsOver;
- (NSString *)latexFormatStringAsUnder;
- (NSString *)localizedSegmentOrderingForKey:(NSString *)arg0;
- (NSArray *)siblings;
- (NSObject *)arrayWithoutNilsFromFirstChild:(NSObject *)arg0 secondChild:(NSObject *)arg1 thirdChild:(NSObject *)arg2;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2 localizablePrefix:(NSString *)arg3 localizableSuffix:(NSString *)arg4;
- (id)speakableSegments:(id)arg0 withLocalizablePrefix:(char)arg1 localizableSuffix:(NSString *)arg2;
- (unsigned int)maximumFractionLevelOfSubExpressions;
- (NSString *)latexIdentifierForFenceOperator:(id)arg0 isClosingOperator:(char)arg1;
- (NSString *)latexDescriptionForChildrenJoinedByString:(NSString *)arg0;
- (char)canBeWrappedInLatexMathIndicators;
- (NSString *)mathMLString;
- (NSArray *)children;

@end
