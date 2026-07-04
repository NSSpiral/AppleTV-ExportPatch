/* Runtime dump - MBFileInfo
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBFileInfo : NSObject <NSCopying, NSCoding>
{
    char _isDirectory;
    NSString * _path;
    int _priority;
    NSDictionary * _extendedAttributes;
}

@property (copy, nonatomic) NSString * path;
@property (nonatomic) char isDirectory;
@property (nonatomic) int priority;
@property (copy, nonatomic) NSDictionary * extendedAttributes;

+ (NSString *)fileInfoWithPath:(NSString *)arg0 extendedAttributes:(NSDictionary *)arg1;

- (void)dealloc;
- (MBFileInfo *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)path;
- (MBFileInfo *)copyWithZone:(struct _NSZone *)arg0;
- (void)setPath:(NSString *)arg0;
- (void)setPriority:(int)arg0;
- (int)priority;
- (char)isDirectory;
- (void)setIsDirectory:(char)arg0;
- (MBFileInfo *)initWithPath:(NSString *)arg0 extendedAttributes:(NSDictionary *)arg1;
- (NSDictionary *)extendedAttributes;
- (void)setExtendedAttributes:(NSDictionary *)arg0;

@end
