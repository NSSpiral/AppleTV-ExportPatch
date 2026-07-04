/* Runtime dump - PBParagraphProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBParagraphProperties : NSObject

+ (void)readParagraphProperties:(NSDictionary *)arg0 paragraphProperty:(struct PptParaProperty *)arg1 bulletStyle:(NSObject *)arg2 isMaster:(char)arg3 state:(NSObject *)arg4;
+ (void)readAlign:(id)arg0 pptAlignmentType:(int)arg1;
+ (short)pptTextSpacingWithOADParaSpacing:(id)arg0 defaultPptParaSpacing:(short)arg1;
+ (int)pptAlignmentTypeWithOADTextAlignType:(int)arg0;
+ (int)pptFontAlignWithOADTextFontAlign:(int)arg0;
+ (void)readParagraphProperties:(NSDictionary *)arg0 paragraphPropertyRun:(struct PptParaRun *)arg1 bulletStyle:(NSObject *)arg2 state:(NSObject *)arg3;

@end
