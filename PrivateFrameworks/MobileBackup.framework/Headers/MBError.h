/* Runtime dump - MBError
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBError : NSObject

+ (NSError *)dictionaryRepresentationForError:(NSError *)arg0;
+ (NSDictionary *)errorWithDictionaryRepresentation:(NSDictionary *)arg0;
+ (NSError *)descriptionForError:(NSError *)arg0 paths:(char)arg1;
+ (char)isError:(char)arg0 withCode:(int)arg1;
+ (char)isError:(char)arg0 withCodes:(int)arg1;
+ (NSError *)sanitizedError:(NSError *)arg0;
+ (NSError *)errorWithCode:(int)arg0 URL:(NSString *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 error:(NSError *)arg1 URL:(NSString *)arg2 format:(NSString *)arg3;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 format:(NSString *)arg2;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 path:(NSString *)arg2 format:(NSString *)arg3;
+ (NSError *)errorWithCode:(int)arg0 format:(NSString *)arg1;
+ (NSError *)errorWithCode:(int)arg0 path:(NSString *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 error:(NSError *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 error:(NSError *)arg1 path:(NSString *)arg2 format:(NSString *)arg3;
+ (NSError *)descriptionForError:(NSError *)arg0;
+ (MBError *)posixErrorWithCode:(int)arg0 path:(NSString *)arg1 format:(NSString *)arg2;
+ (int)codeForNSError:(NSError *)arg0;
+ (int)codeForErrno:(int)arg0;
+ (char)isUnexpectedErrorCode:(int)arg0;
+ (char)isTransientError:(NSError *)arg0;
+ (int)errnoForError:(NSError *)arg0;
+ (char)isNSError:(NSError *)arg0 withCode:(int)arg1;
+ (char)isRetryAfterError:(NSError *)arg0 retryAfterDate:(id *)arg1;
+ (NSString *)posixErrorWithFormat:(NSString *)arg0;
+ (NSString *)posixErrorWithPath:(NSString *)arg0 format:(NSString *)arg1;
+ (MBError *)posixErrorWithCode:(int)arg0 format:(NSString *)arg1;
+ (NSError *)errorForNSError:(NSError *)arg0 path:(NSString *)arg1 format:(NSString *)arg2;
+ (NSURLResponse *)errorForHTTPURLResponse:(NSURLResponse *)arg0 error:(NSError *)arg1;

@end
