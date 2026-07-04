/* Runtime dump - ATVStoreMediaToken
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVStoreMediaToken : NSObject
{
    char _valid;
    NSDate * _expirationDate;
    NSString * _tokenString;
    double _lifetime;
}

@property (readonly, nonatomic) NSDate * expirationDate;
@property (readonly, nonatomic) double lifetime;
@property (readonly, nonatomic) NSString * tokenString;
@property (readonly, nonatomic) char valid;
@property (readonly, nonatomic) char expired;

+ (char)supportsSecureCoding;

- (ATVStoreMediaToken *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (char)isValid;
- (void).cxx_destruct;
- (id)invalidCopy;
- (double)percentageOfLifetimeRemaining;
- (char)willExpireWithin:(double)arg0;
- (ATVStoreMediaToken *)initWithString:(NSString *)arg0 expirationDate:(NSDate *)arg1 lifetime:(double)arg2 valid:(char)arg3;
- (NSString *)tokenString;
- (double)lifetime;
- (ATVStoreMediaToken *)initWithString:(NSString *)arg0 expirationDate:(NSDate *)arg1 lifetime:(double)arg2;
- (char)isExpired;
- (NSDate *)expirationDate;

@end
