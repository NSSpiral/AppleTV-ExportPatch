/* Runtime dump - TNFormulaIDWrapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNFormulaIDWrapper : NSObject <NSCopying>
{
    struct ? mID;
}

@property (readonly) struct ? formulaID;

- (struct ?)formulaID;
- (char)isEqualToTNFormulaIDWrapper:(NSObject *)arg0;
- (TNFormulaIDWrapper *)initWithTNChartFormulaID:(struct ?)arg0;
- (struct ?)chartFormulaID;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TNFormulaIDWrapper *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;

@end
