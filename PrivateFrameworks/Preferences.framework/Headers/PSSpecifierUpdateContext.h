/* Runtime dump - PSSpecifierUpdateContext
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSpecifierUpdateContext : NSObject <NSCopying>
{
    char _animated;
    char _updateModelOnly;
    NSDictionary * _userInfo;
}

@property (nonatomic) char animated;
@property (nonatomic) char updateModelOnly;
@property (copy, nonatomic) NSDictionary * userInfo;

+ (NSString *)context;
+ (NSDictionary *)contextWithUserInfo:(NSDictionary *)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)setUserInfo:(NSDictionary *)arg0;
- (PSSpecifierUpdateContext *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)userInfo;
- (char)animated;
- (void)setAnimated:(char)arg0;
- (char)updateModelOnly;
- (void)setUpdateModelOnly:(char)arg0;

@end
