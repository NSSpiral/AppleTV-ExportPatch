/* Runtime dump - CKPrettyError
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPrettyError : NSError

+ (NSError *)itemErrorFromError:(NSError *)arg0 forID:(NSObject *)arg1;
+ (NSString *)_errorDomain;
+ (NSError *)dictionaryRepresentationForError:(NSError *)arg0;
+ (NSDictionary *)errorWithDictionaryRepresentation:(NSDictionary *)arg0;
+ (NSError *)descriptionForError:(NSError *)arg0 paths:(char)arg1;
+ (char)isError:(char)arg0 withCode:(int)arg1;
+ (char)isError:(char)arg0 withCodes:(PLBBCodes *)arg1;
+ (NSError *)sanitizedError:(NSError *)arg0;
+ (NSError *)errorWithCode:(int)arg0 userInfo:(NSDictionary *)arg1 error:(NSError *)arg2 format:(NSString *)arg3;
+ (NSError *)errorWithCode:(int)arg0 URL:(NSString *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 error:(NSError *)arg1 URL:(NSString *)arg2 format:(NSString *)arg3;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 format:(NSString *)arg2;
+ (NSString *)errorWithDomain:(NSString *)arg0 code:(int)arg1 path:(NSString *)arg2 format:(NSString *)arg3;
+ (NSError *)errorWithCode:(int)arg0 format:(NSString *)arg1;
+ (NSError *)errorWithCode:(int)arg0 userInfo:(NSDictionary *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 path:(NSString *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 error:(NSError *)arg1 format:(NSString *)arg2;
+ (NSError *)errorWithCode:(int)arg0 userInfo:(NSDictionary *)arg1 error:(NSError *)arg2 path:(NSString *)arg3 URL:(NSString *)arg4 description:(NSString *)arg5;
+ (NSError *)errorWithCode:(int)arg0 error:(NSError *)arg1 path:(NSString *)arg2 format:(NSString *)arg3;
+ (NSError *)secureCodableError:(NSError *)arg0;
+ (NSError *)descriptionForError:(NSError *)arg0;

- (NSString *)CKPartialErrorDescription;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;

@end
