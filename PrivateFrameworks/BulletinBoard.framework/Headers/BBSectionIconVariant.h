/* Runtime dump - BBSectionIconVariant
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding>
{
    char _precomposed;
    int _format;
    NSData * _imageData;
    NSString * _imagePath;
    NSString * _imageName;
    NSString * _bundlePath;
}

@property (nonatomic) int format;
@property (copy, nonatomic) NSData * imageData;
@property (copy, nonatomic) NSString * imagePath;
@property (copy, nonatomic) NSString * imageName;
@property (copy, nonatomic) NSString * bundlePath;
@property (nonatomic) char precomposed;

+ (char)supportsSecureCoding;
+ (NSString *)_variantWithFormat:(int)arg0;
+ (NSString *)variantWithFormat:(int)arg0 imageData:(NSData *)arg1;
+ (NSString *)variantWithFormat:(int)arg0 imagePath:(NSString *)arg1;
+ (NSString *)variantWithFormat:(int)arg0 imageName:(NSString *)arg1 inBundle:(NSObject *)arg2;

- (void)dealloc;
- (BBSectionIconVariant *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)bundlePath;
- (BBSectionIconVariant *)copyWithZone:(struct _NSZone *)arg0;
- (char)isPrecomposed;
- (void)setPrecomposed:(char)arg0;
- (void)setImagePath:(NSString *)arg0;
- (void)setImageName:(NSString *)arg0;
- (void)setBundlePath:(NSString *)arg0;
- (NSData *)imageData;
- (void)setImageData:(NSData *)arg0;
- (int)format;
- (void)setFormat:(int)arg0;
- (NSString *)imageName;
- (NSString *)imagePath;

@end
