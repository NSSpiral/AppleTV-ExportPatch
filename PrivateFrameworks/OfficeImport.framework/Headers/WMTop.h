/* Runtime dump - WMTop
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTop : CMTop

+ (WMTop *)documentFromContents:(id)arg0 isXML:(char)arg1 archiver:(NSObject *)arg2;
+ (void)fillHTMLArchiveForOfficeFile:(NSString *)arg0 xmlFlag:(char)arg1 archiver:(NSObject *)arg2;
+ (void)fillHTMLArchiveForOfficeData:(NSData *)arg0 fileName:(NSString *)arg1 xmlFlag:(char)arg2 archiver:(NSObject *)arg3;

@end
