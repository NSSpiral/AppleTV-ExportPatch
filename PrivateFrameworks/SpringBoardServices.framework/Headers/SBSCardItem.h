/* Runtime dump - SBSCardItem
 * Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSCardItem : NSObject <NSCopying, NSSecureCoding>
{
    char _requiresPasscode;
    NSString * _identifier;
    NSData * _iconData;
    NSString * _title;
    NSString * _body;
    NSString * _bundleName;
    NSData * _attachmentData;
    NSDictionary * _userInfo;
    UIImage * _thumbnail;
}

@property (copy, nonatomic) NSString * identifier;
@property (copy, nonatomic) NSData * iconData;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * body;
@property (nonatomic) char requiresPasscode;
@property (copy, nonatomic) NSString * bundleName;
@property (copy, nonatomic) NSData * attachmentData;
@property (copy, nonatomic) NSDictionary * userInfo;
@property (copy, nonatomic) UIImage * thumbnail;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (SBSCardItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)identifier;
- (NSString *)title;
- (void)setUserInfo:(NSDictionary *)arg0;
- (SBSCardItem *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)userInfo;
- (void)setIdentifier:(NSString *)arg0;
- (NSDate *)sortDate;
- (NSString *)body;
- (UIImage *)thumbnail;
- (void)setThumbnail:(UIImage *)arg0;
- (void)setBody:(NSString *)arg0;
- (NSData *)iconData;
- (void)setBundleName:(NSString *)arg0;
- (void)setRequiresPasscode:(char)arg0;
- (SBSCardItem *)initWithIdentifier:(NSString *)arg0 iconData:(NSData *)arg1 title:(NSString *)arg2 body:(id /* block */)arg3 requiresPasscode:(char)arg4 bundleName:(NSString *)arg5 attachmentData:(NSData *)arg6 userInfo:(NSDictionary *)arg7;
- (SBSCardItem *)initWithIdentifier:(NSString *)arg0 iconData:(NSData *)arg1 title:(NSString *)arg2 body:(id /* block */)arg3 requiresPasscode:(char)arg4 bundleName:(NSString *)arg5 userInfo:(NSDictionary *)arg6;
- (char)requiresPasscode;
- (NSData *)attachmentData;
- (void)setAttachmentData:(NSData *)arg0;
- (SBSCardItem *)initWithIdentifier:(NSString *)arg0 iconData:(NSData *)arg1 title:(NSString *)arg2 body:(id /* block */)arg3 classification:(int)arg4 bundleName:(NSString *)arg5 userInfo:(NSDictionary *)arg6;
- (void)setIconData:(NSData *)arg0;
- (NSString *)bundleName;

@end
