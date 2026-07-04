/* Runtime dump - WBSection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBSection : NSObject

+ (void)readFrom:(NSObject *)arg0 textRun:(struct WrdSectionTextRun *)arg1 document:(struct WrdSectionProperties *)arg2 index:(NSObject *)arg3 section:(UITableViewSection *)arg4;
+ (void)readHeaderFrom:(NSObject *)arg0 type:(int)arg1 index:(int)arg2 header:(NSString *)arg3;
+ (void)mapPrinterSettings:(struct WrdSectionProperties *)arg0 toSection:(struct WrdBorder *)arg1;
+ (void)mapSectionProperties:(struct WrdSectionProperties *)arg0 toSection:(struct WrdBorder *)arg1;
+ (void)mapSection:(id)arg0 toSectionProperties:(struct WrdSectionProperties *)arg1;

@end
