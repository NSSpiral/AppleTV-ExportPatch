/* Runtime dump - OABOle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OABOle : NSObject

+ (OABOle *)stringForCLSID:(struct _SsrwOO_GUID)arg0;
+ (char)isBiffCLSID:(id)arg0;
+ (NSObject *)readCLSIDFromStream:(struct SsrwOOStream *)arg0;
+ (NSObject *)readAnsiStringFromStream:(struct SsrwOOStream *)arg0;
+ (NSObject *)read4ByteFromStream:(struct SsrwOOStream *)arg0;
+ (NSObject *)readUnicodeStringFromStream:(struct SsrwOOStream *)arg0;
+ (NSData *)readFromData:(NSData *)arg0 cancel:(char)arg1;
+ (char)readSharedInfoFor:(id)arg0 fromStorage:(struct SsrwOOStorage *)arg1;
+ (char)isChart:(GQHChart *)arg0;
+ (OABOle *)readFromParentStorage:(struct SsrwOOStorage *)arg0 storageName:(NSString *)arg1 cancel:(unsigned short)arg2;
+ (NSObject *)readCompressedFromStream:(struct SsrwOOStream *)arg0 compressedSize:(unsigned long)arg1 uncompressedSize:(unsigned long)arg2 cancel:(char)arg3;
+ (NSObject *)readFromStream:(struct SsrwOOStream *)arg0 size:(unsigned long)arg1 cancel:(char)arg2;

@end
