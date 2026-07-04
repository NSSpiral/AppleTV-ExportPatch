/* Runtime dump - BBAccessoryIcon
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary * _imagesForContentSize;
}

@property (copy, nonatomic) NSDictionary * imagesForContentSize;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (BBAccessoryIcon *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (BBAccessoryIcon *)init;
- (BBAccessoryIcon *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)imagesForContentSize;
- (void)setImagesForContentSize:(NSDictionary *)arg0;
- (void)addImage:(UIImage *)arg0 forContentSizeCategory:(NSString *)arg1;
- (NSString *)imageForContentSizeCategory:(NSString *)arg0;

@end
