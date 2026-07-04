/* Runtime dump - BBImage
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBImage : NSObject <BBUniquableObject, NSCopying, NSSecureCoding>
{
    NSData * _data;
    NSString * _path;
    NSString * _name;
    NSString * _bundlePath;
}

@property (copy, nonatomic) NSData * data;
@property (copy, nonatomic) NSString * path;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * bundlePath;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)imageWithPath:(NSString *)arg0;
+ (char)supportsSecureCoding;
+ (NSData *)imageWithData:(NSData *)arg0;
+ (NSString *)imageWithName:(NSString *)arg0 inBundle:(NSObject *)arg1;

- (void)dealloc;
- (BBImage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)path;
- (NSString *)bundlePath;
- (BBImage *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (void)setPath:(NSString *)arg0;
- (NSString *)uniqueIdentifier;
- (void)setBundlePath:(NSString *)arg0;
- (BBImage *)initWithData:(NSData *)arg0 path:(NSString *)arg1 name:(NSString *)arg2 bundlePath:(NSString *)arg3;

@end
