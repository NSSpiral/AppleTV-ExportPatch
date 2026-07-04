/* Runtime dump - OAVFormula
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OAVFormula : NSObject

+ (OAVFormula *)readFormula:(struct _xmlNode *)arg0;
+ (struct OADFormulaArg)readArgument:(id)arg0;
+ (void)readFormulasFromManager:(NSObject *)arg0 toGeometry:(NSObject *)arg1;

@end
