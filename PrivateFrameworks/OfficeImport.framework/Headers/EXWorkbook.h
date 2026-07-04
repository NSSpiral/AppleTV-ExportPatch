/* Runtime dump - EXWorkbook
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXWorkbook : NSObject

+ (void)setupProcessors:(id)arg0;
+ (void)readStringsFrom:(NSObject *)arg0 state:(NSObject *)arg1;
+ (NSObject *)edWorkbookFromState:(NSObject *)arg0 package:(TSPDirectoryPackage *)arg1 reader:(NSObject *)arg2 resourcesOnly:(BOOL)arg3 fileName:(NSString *)arg4 temporaryDirectory:(TSUManagedTemporaryDirectory *)arg5;
+ (void)readStylesFrom:(NSObject *)arg0 state:(NSObject *)arg1;
+ (void)readSheetsFrom:(NSObject *)arg0 relationNS:(struct _xmlNs *)arg1 state:(int)arg2;
+ (NSObject *)edWorkbookFromState:(NSObject *)arg0 package:(TSPDirectoryPackage *)arg1 reader:(NSObject *)arg2 fileName:(NSString *)arg3 temporaryDirectory:(TSUManagedTemporaryDirectory *)arg4;
+ (void)setupDefaultTextStyleWithState:(NSObject *)arg0;
+ (void)setDefaultParagraphProperties:(NSDictionary *)arg0;

@end
