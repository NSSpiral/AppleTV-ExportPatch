/* Runtime dump - PBSlideMaster
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBSlideMaster : PBSlideBase

+ (NSObject *)createMasterStyleMap:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)padMissingLevels:(id)arg0;
+ (void)setFont:(UIFont *)arg0 fromCharacterProperties:(NSDictionary *)arg1;
+ (NSObject *)textBodyForPlaceholderType:(int)arg0 slideLayout:(NSObject *)arg1;
+ (int)textTypeFor:(int)arg0 placeholderType:(int)arg1;
+ (void)flattenTextStyle:(NSObject *)arg0 intoTextBox:(id)arg1;
+ (void)readMasterDrawables:(id)arg0 slideHolder:(id)arg1 state:(NSObject *)arg2;
+ (void)readSlideLayout:(NSObject *)arg0 slideHolder:(id)arg1 layoutType:(int)arg2 state:(NSObject *)arg3;
+ (void)flattenBaseMasterStyleType:(int)arg0 masterStyleMap:(NSObject *)arg1;
+ (void)flattenMasterStyleType:(int)arg0 baseType:(int)arg1 masterStyleMap:(NSObject *)arg2;
+ (void)setCannedOtherTextListStyle:(NSObject *)arg0;
+ (void)readSlideMasterStyles:(id)arg0 slideHolder:(id)arg1 state:(NSObject *)arg2;
+ (void)flattenPlaceholderTextStylesIntoLayout:(NSObject *)arg0 layoutType:(int)arg1 masterStyleMap:(NSObject *)arg2;

@end
