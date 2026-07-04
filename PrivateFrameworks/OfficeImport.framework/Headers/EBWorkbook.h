/* Runtime dump - EBWorkbook
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EBWorkbook : NSObject

+ (NSObject *)readWithState:(NSObject *)arg0 reader:(NSObject *)arg1;
+ (void)setupProcessors:(id)arg0;
+ (void)readDocumentProperties:(NSDictionary *)arg0 state:(NSObject *)arg1;
+ (void)readDocumentPresentation:(id)arg0 state:(NSObject *)arg1;
+ (struct ChVector<OcText> *)createSheetNamesFromWorkbook:(unsigned int)arg0;
+ (int)xlSheetTypeEnumFromEDSheet:(NSObject *)arg0;

@end
