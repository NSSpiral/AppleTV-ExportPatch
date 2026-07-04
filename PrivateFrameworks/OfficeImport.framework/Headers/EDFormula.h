/* Runtime dump - EDFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFormula : NSObject <EDFormulaBuilding>
{
    struct __CFData * mPackedData;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (EDFormula *)formula;

- (void)dealloc;
- (EDFormula *)init;
- (unsigned int)tokenCount;
- (char *)lastExtendedDataForTokenAtIndex:(unsigned int)arg0 length:(unsigned int *)arg1;
- (int)tokenTypeAtIndex:(unsigned int)arg0;
- (BOOL)isSupportedFormula;
- (BOOL)isCleaned;
- (void)removeAllTokens;
- (void)setWarning:(int)arg0;
- (BOOL)setupTokensWithTokensCount:(unsigned int)arg0 tokensWithDataCount:(unsigned int)arg1 extendedDataLength:(unsigned int)arg2 extendedDataCount:(unsigned int)arg3;
- (char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1;
- (void)setCleaned:(BOOL)arg0;
- (NSString *)originalFormulaString;
- (TSKWarning *)warning;
- (void)populateXlPtg:(struct XlPtg *)arg0 index:(unsigned int)arg1;
- (BOOL)copyTokenFromXlPtg:(struct XlPtg *)arg0;
- (BOOL)isBaseFormula;
- (struct ChVector<XlPtg *> *)xlPtgs;
- (struct EDToken *)tokenAtIndex:(unsigned int)arg0;
- (BOOL)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 extendedDataCount:(unsigned int)arg2;
- (char *)setExtendedDataAtIndex:(unsigned int)arg0 extendedDataIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setupExtendedDataForTokenAtIndex:(unsigned int)arg0 extendedDataLength:(unsigned int)arg1 extendedDataCount:(unsigned int)arg2;
- (BOOL)copyTokenAtIndex:(unsigned int)arg0 fromFormula:(EDArrayedFormula *)arg1;
- (int)warningType;
- (unsigned int)firstTokenIndexForArgAtIndex:(unsigned int)arg0;
- (BOOL)removeTokenAtIndex:(unsigned int)arg0;
- (id)saveArgs:(unsigned int)arg0 andDelete:(char)arg1;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg0 length:(unsigned int)arg1;
- (char)convertToList:(unsigned int)arg0 withFinalParen:(char)arg1;
- (char *)extendedDataForTokenAtIndex:(unsigned int)arg0 extendedDataIndex:(unsigned int)arg1 length:(unsigned int *)arg2;
- (char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1 numArgs:(int)arg2;
- (char)insertName:(unsigned int)arg0 atIndex:(unsigned int)arg1;
- (char)insertExternalName:(unsigned int)arg0 withLink:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (char)addArrayWithCol:(int)arg0 andRow:(int)arg1;
- (char)convertToList:(unsigned int)arg0;
- (char)convertToIntersect:(unsigned int)arg0;
- (char)convertLastRefsToArea;
- (EDLinkReference *)lastTokenRefOrArea3dLinkRefIsValid:(char *)arg0 withEDLinks:(EDLinksCollection *)arg1;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(char)arg0 withMin:(unsigned short)arg1 andMax:(unsigned short)arg2;
- (char)shrinkSpanningRefAtArgIndex:(unsigned int)arg0;
- (char)addInfixOperator:(int)arg0 atIndex:(unsigned int)arg1 factor:(double)arg2;
- (char)wrapArgumentsWithOperator:(int)arg0 argumentCount:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (char)fixTableOfConstantsRefs;
- (char)uppercaseArgAtIndex:(unsigned int)arg0;
- (void)replaceTokenTypeAtIndex:(unsigned int)arg0 withType:(int)arg1;
- (unsigned int)countExtendedDataForTokenAtIndex:(unsigned int)arg0;
- (BOOL)replaceTokenAtIndex:(unsigned int)arg0 withFormula:(EDArrayedFormula *)arg1;
- (BOOL)replaceTokenAtIndex:(unsigned int)arg0 withFormula:(EDArrayedFormula *)arg1 formulaTokenIndex:(unsigned int)arg2;
- (id)warningParameter;
- (void)setWarningParameter:(id)arg0;
- (void)updateContainsRelativeReferences:(BOOL)arg0;
- (void)updateCleanedWithEvaluationStack:(BOOL)arg0;
- (void)unarchiveFromData:(struct __CFData *)arg0 offset:(unsigned int *)arg1;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg0;
- (EDFormula *)initWithFormula:(EDArrayedFormula *)arg0;
- (BOOL)convertTokensToSharedAtRow:(unsigned int)arg0 column:(unsigned int)arg1;
- (BOOL)isContainsRelativeReferences;
- (BOOL)isCleanedWithEvaluationStack;
- (void)setOriginalFormulaString:(NSString *)arg0;
- (BOOL)isSharedFormula;

@end
