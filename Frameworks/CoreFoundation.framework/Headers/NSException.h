/* Runtime dump - NSException
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSException : NSObject <NSCopying, NSCoding>
{
    NSString * name;
    NSString * reason;
    NSDictionary * userInfo;
    id reserved;
}

@property (readonly, copy) NSString * name;
@property (readonly, copy) NSString * reason;
@property (readonly, copy) NSDictionary * userInfo;
@property (readonly, copy) NSArray * callStackReturnAddresses;
@property (readonly, copy) NSArray * callStackSymbols;

+ (void)sfu_errnoRaise:(id)arg0 format:(NSString *)arg1;
+ (void)tsu_raiseWithError:(NSError *)arg0;
+ (void)errnoRaise:(id)arg0 format:(NSString *)arg1;
+ (void)raiseWithError:(NSError *)arg0;
+ (void)raise:(id)arg0 format:(NSString *)arg1 arguments:(void *)arg2;
+ (void)raise:(id)arg0 format:(NSString *)arg1;
+ (NSException *)exceptionWithName:(NSString *)arg0 reason:(NSString *)arg1 userInfo:(NSDictionary *)arg2;

- (int)sfu_localErrno;
- (NSError *)tsu_error;
- (int)localErrno;
- (NSError *)error;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSException *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSArray *)callStackReturnAddresses;
- (char)_installStackTraceKeyIfNeeded;
- (void)dealloc;
- (NSException *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSException *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSString *)reason;
- (void)raise;
- (NSException *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)userInfo;
- (NSArray *)callStackSymbols;
- (NSException *)initWithName:(NSString *)arg0 reason:(NSString *)arg1 userInfo:(NSDictionary *)arg2;

@end
