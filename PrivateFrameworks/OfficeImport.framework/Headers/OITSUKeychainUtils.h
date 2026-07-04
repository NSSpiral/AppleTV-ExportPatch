/* Runtime dump - OITSUKeychainUtils
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUKeychainUtils : NSObject

+ (char)setPassphrase:(NSString *)arg0 forGenericItem:(NSObject *)arg1 service:(NSObject *)arg2 description:(NSString *)arg3 label:(NSString *)arg4 account:(NSObject *)arg5 error:(id *)arg6;
+ (char)lookupGenericItem:(NSObject *)arg0 account:(id *)arg1 passphrase:(id *)arg2 error:(id *)arg3;
+ (char)removeGenericItem:(NSObject *)arg0 error:(id *)arg1;
+ (char)setPassphrase:(NSString *)arg0 forGenericItem:(NSObject *)arg1 service:(NSObject *)arg2 description:(NSString *)arg3 label:(NSString *)arg4 error:(id *)arg5;
+ (char)lookupGenericItem:(NSObject *)arg0 passphrase:(id *)arg1 error:(id *)arg2;

@end
