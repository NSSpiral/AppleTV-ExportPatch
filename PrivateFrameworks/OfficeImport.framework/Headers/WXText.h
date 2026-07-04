/* Runtime dump - WXText
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXText : NSObject

+ (void)readFrom:(struct _xmlNode *)arg0 state:(struct _xmlNode *)arg1;
+ (void)readFromStream:(struct _xmlTextReader *)arg0 state:(NSObject *)arg1;
+ (void)readFrom:(struct _xmlNode *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readFromStream:(struct _xmlTextReader *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(NSObject *)arg2 state:(NSObject *)arg3;
+ (void)updateTextBoxIdsFromState:(NSObject *)arg0;
+ (void)createChildren:(struct _xmlNode *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)createChildrenFromStream:(struct _xmlTextReader *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(NSObject *)arg2 state:(NSObject *)arg3;
+ (void)readFromString:(NSString *)arg0 to:(NSObject *)arg1;
+ (WXText *)addNewSectionTo:(UITableViewSection *)arg0 state:(NSObject *)arg1;
+ (void)readFromParagraph:(struct _xmlNode *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;
+ (void)readFromTable:(struct _xmlNode *)arg0 baseStyle:(struct _xmlNode *)arg1 to:(struct _xmlNode *)arg2 state:(struct _xmlNode *)arg3;

@end
