/* Runtime dump - OADFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADFormula : NSObject
{
    int mType;
    id mArgs;
    NSString * mName;
}

- (void)dealloc;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)type;
- (void).cxx_construct;
- (struct OADFormulaArg)argAtIndex:(unsigned int)arg0;
- (OADFormula *)initWithType:(int)arg0 arg0:(struct OADFormulaArg)arg1 arg1:(struct OADFormulaArg)arg2 arg2:(struct OADFormulaArg)arg3;

@end
