/* Runtime dump - AAUIServerSuppliedProfilePictureCacheEntry
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject
{
    NSDate * _expirationDate;
    char _updating;
    UIImage * _picture;
    NSString * _serverCacheTag;
}

@property (retain, nonatomic) UIImage * picture;
@property (copy, nonatomic) NSString * serverCacheTag;
@property (nonatomic) char updating;
@property (readonly, nonatomic) char expired;

- (char)updating;
- (void)setUpdating:(char)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)expire;
- (NSString *)serverCacheTag;
- (void)setServerCacheTag:(NSString *)arg0;
- (void)setPicture:(UIImage *)arg0;
- (UIImage *)picture;
- (char)expired;

@end
