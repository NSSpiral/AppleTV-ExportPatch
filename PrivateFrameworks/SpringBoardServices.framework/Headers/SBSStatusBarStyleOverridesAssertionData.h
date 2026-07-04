/* Runtime dump - SBSStatusBarStyleOverridesAssertionData
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding>
{
    char _exclusive;
    char _isExclusive;
    int _statusBarStyleOverrides;
    int _pid;
    NSString * _uniqueIdentifier;
}

@property (nonatomic) int statusBarStyleOverrides;
@property (nonatomic) int pid;
@property (readonly, nonatomic) char isExclusive;
@property (copy, nonatomic) NSString * uniqueIdentifier;
@property (nonatomic) char exclusive;

+ (char)supportsSecureCoding;

- (char)isExclusive;
- (char)isExclusive;
- (void)setExclusive:(char)arg0;
- (void)dealloc;
- (SBSStatusBarStyleOverridesAssertionData *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)uniqueIdentifier;
- (void)setUniqueIdentifier:(NSString *)arg0;
- (int)pid;
- (void)setPid:(int)arg0;
- (SBSStatusBarStyleOverridesAssertionData *)initWithStatusBarStyleOverrides:(int)arg0 forPID:(int)arg1 exclusive:(char)arg2;
- (int)statusBarStyleOverrides;
- (SBSStatusBarStyleOverridesAssertionData *)initWithStatusBarStyleOverrides:(int)arg0 forPID:(int)arg1 exclusive:(char)arg2 uniqueIdentifier:(NSString *)arg3;
- (void)setStatusBarStyleOverrides:(int)arg0;

@end
