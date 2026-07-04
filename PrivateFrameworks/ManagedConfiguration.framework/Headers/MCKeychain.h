/* Runtime dump - MCKeychain
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCKeychain : NSObject

+ (NSObject *)stringFromService:(NSObject *)arg0 account:(NSObject *)arg1 label:(NSString *)arg2 description:(NSString *)arg3 group:(NSObject *)arg4 outError:(id *)arg5;
+ (NSObject *)dataFromService:(NSObject *)arg0 account:(NSObject *)arg1 label:(NSString *)arg2 description:(NSString *)arg3 group:(NSObject *)arg4 outError:(id *)arg5;
+ (char)setString:(NSString *)arg0 forService:(struct __SCNetworkService *)arg1 account:(NSObject *)arg2 label:(NSString *)arg3 description:(NSString *)arg4 group:(NSObject *)arg5 outError:(id *)arg6;
+ (char)setString:(NSString *)arg0 forService:(struct __SCNetworkService *)arg1 account:(NSObject *)arg2 label:(NSString *)arg3 description:(NSString *)arg4 access:(void *)arg5 group:(NSObject *)arg6 outError:(id *)arg7;
+ (char)setData:(NSData *)arg0 forService:(struct __SCNetworkService *)arg1 account:(NSObject *)arg2 label:(NSString *)arg3 description:(NSString *)arg4 access:(void *)arg5 group:(NSObject *)arg6 outError:(id *)arg7;
+ (char)setData:(NSData *)arg0 forService:(struct __SCNetworkService *)arg1 account:(NSObject *)arg2 label:(NSString *)arg3 description:(NSString *)arg4 access:(void *)arg5 outError:(id *)arg6;
+ (struct __CFDictionary *)_newQueryWithService:(NSObject *)arg0 account:(NSObject *)arg1 label:(NSString *)arg2 description:(NSString *)arg3 group:(NSObject *)arg4 outError:(id *)arg5;
+ (void *)copyItemWithPersistentID:(NSObject *)arg0;
+ (NSObject *)stringFromService:(NSObject *)arg0 account:(NSObject *)arg1 label:(NSString *)arg2 description:(NSString *)arg3 outError:(id *)arg4;
+ (char)setString:(NSString *)arg0 forService:(struct __SCNetworkService *)arg1 account:(NSObject *)arg2 label:(NSString *)arg3 description:(NSString *)arg4 outError:(id *)arg5;
+ (char)setData:(NSData *)arg0 forService:(struct __SCNetworkService *)arg1 account:(NSObject *)arg2 label:(NSString *)arg3 description:(NSString *)arg4 outError:(id *)arg5;
+ (NSObject *)dataFromService:(NSObject *)arg0 account:(NSObject *)arg1 label:(NSString *)arg2 description:(NSString *)arg3 outError:(id *)arg4;
+ (void)removeItemForService:(NSObject *)arg0 account:(NSObject *)arg1 label:(NSString *)arg2 description:(NSString *)arg3 group:(NSObject *)arg4;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(NSObject *)arg0;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(NSObject *)arg0;
+ (NSObject *)saveItem:(void *)arg0 withLabel:(NSString *)arg1 group:(NSObject *)arg2;
+ (void)removeItemWithPersistentID:(NSObject *)arg0;
+ (char)itemExistsInKeychain:(void *)arg0;

@end
