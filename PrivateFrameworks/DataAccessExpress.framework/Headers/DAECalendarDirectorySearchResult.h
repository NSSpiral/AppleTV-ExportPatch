/* Runtime dump - DAECalendarDirectorySearchResult
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAECalendarDirectorySearchResult : NSObject <NSSecureCoding>
{
    NSString * _displayName;
    NSString * _preferredAddress;
}

@property (retain, nonatomic) NSString * displayName;
@property (retain, nonatomic) NSString * preferredAddress;

+ (char)supportsSecureCoding;

- (NSString *)preferredAddress;
- (void)setPreferredAddress:(NSString *)arg0;
- (DAECalendarDirectorySearchResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;

@end
