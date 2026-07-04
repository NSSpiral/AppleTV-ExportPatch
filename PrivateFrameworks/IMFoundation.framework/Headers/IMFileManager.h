/* Runtime dump - IMFileManager
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMFileManager : NSFileManager

+ (IMFileManager *)defaultManager;
+ (IMFileManager *)defaultHFSFileManager;

- (NSString *)attributesOfItemAtPath:(NSString *)arg0 error:(id *)arg1;
- (NSObject *)pathExtensionForUTIType:(NSObject *)arg0;
- (NSObject *)pathExtensionForMIMEType:(NSObject *)arg0;
- (id)UTITypeOfPathExtension:(id)arg0;
- (id)MIMETypeOfPathExtension:(id)arg0;
- (NSString *)displayNameOfFileWithName:(NSString *)arg0 hfsFlags:(unsigned short)arg1;
- (NSObject *)UTITypeOfMimeType:(NSObject *)arg0;
- (NSString *)MIMETypeOfPath:(NSString *)arg0;
- (NSString *)UTITypeOfPath:(NSString *)arg0;

@end
