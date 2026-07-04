/* Runtime dump - EBHyperlink
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBHyperlink : NSObject

+ (int)edTypeFromXlHyperlinkType:(int)arg0;
+ (EBHyperlink *)edHyperlinkFromXlHLink:(struct XlHLink *)arg0 edResources:(struct XlRef *)arg1;
+ (void)addToolTip:(struct XlHLinkToolTip *)arg0 toEdHyperLink:(struct XlRef *)arg1 edResources:(struct XlString *)arg2;
+ (int)xlTypeFromEDHyperlinkType:(int)arg0;

@end
