/* Runtime dump - UserFSItem
 * Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSItem : NSObject
{
    char _isDirectory;
    char _locked;
    UserFSVolume * _volume;
    NSString * _path;
    NSString * _name;
    unsigned long long _length;
    struct timespec _createdDate;
    struct timespec _modifiedDate;
}

@property (retain, nonatomic) UserFSVolume * volume;
@property (copy, nonatomic) NSString * path;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) char isDirectory;
@property (nonatomic) char locked;
@property (nonatomic) unsigned long long length;
@property (nonatomic) struct timespec createdDate;
@property (nonatomic) struct timespec modifiedDate;

+ (UserFSItem *)_itemWithVolume:(UserFSVolume *)arg0 path:(NSString *)arg1 properties:(NSDictionary *)arg2;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (unsigned long long)length;
- (char)isLocked;
- (NSString *)path;
- (void)setLocked:(char)arg0;
- (void)setLength:(unsigned long long)arg0;
- (void)setPath:(NSString *)arg0;
- (void).cxx_destruct;
- (char)isDirectory;
- (struct timespec)createdDate;
- (void)setCreatedDate:(struct timespec)arg0;
- (void)setIsDirectory:(char)arg0;
- (struct timespec)modifiedDate;
- (void)setModifiedDate:(struct timespec)arg0;
- (UserFSVolume *)volume;
- (void)setVolume:(UserFSVolume *)arg0;

@end
