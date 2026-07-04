/* Runtime dump - EDBuildableFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDBuildableFormula : NSObject <EDFormulaBuilding>
{
    struct EDBuildablePtg * mTree;
    int mWarning;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (EDFormula *)formula;
- (int)tokenTypeAtIndex:(unsigned int)arg0;
- (BOOL)isSupportedFormula;
- (void)setWarning:(int)arg0;
- (char *)addToken:(int)arg0 extendedDataLength:(unsigned int)arg1;
- (struct EDBuildablePtg *)tokenAtIndex:(int)arg0;
- (int)warningType;
- (void)removeTokenAtIndex:(unsigned int)arg0;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg0 length:(unsigned int)arg1;
- (char)convertToList:(unsigned int)arg0 withFinalParen:(char)arg1;
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
- (struct EDBuildablePtg *)tokenAtIndex:(int)arg0 previousToken:(unsigned short)arg1;
- (char)insertName:(unsigned int)arg0 link:(unsigned int)arg1 external:(char)arg2 atIndex:(unsigned int)arg3;
- (char)makeArrayForLastToken:(unsigned int)arg0;
- (char)convertRefs:(unsigned int)arg0 toTypes:(int *)arg1;
- (void)convertRefsInList:(struct EDBuildablePtg *)arg0 toType:(struct EDBuildablePtg *)arg1;
- (char)shrinkSpanningRef:(struct EDBuildablePtg *)arg0;
- (char)fixTableOfConstantsRef:(struct EDBuildablePtg *)arg0;
- (char)convertRefs:(unsigned int)arg0 toType:(int)arg1;
- (void)copyToFormula:(id)arg0;
- (char)copyToken:(unsigned int)arg0 from:(NSObject *)arg1;
- (BOOL)argTokenIsDurationAtIndex:(unsigned int)arg0;
- (int)argTokenTypeAtIndex:(unsigned int)arg0;
- (char)replaceArgPtgAtIndex:(unsigned int)arg0 withFormula:(EDArrayedFormula *)arg1;
- (char)insertVariableFunction:(unsigned short)arg0 afterIndex:(unsigned int)arg1 numArgs:(unsigned int)arg2;
- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg0 minArgs:(unsigned int)arg1;

@end
