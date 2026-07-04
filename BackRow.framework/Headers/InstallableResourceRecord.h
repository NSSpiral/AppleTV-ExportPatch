/* Runtime dump - InstallableResourceRecord
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface InstallableResourceRecord : NSObject
{
    NSString * name;
    NSString * version;
    NSString * path;
    NSDate * lastAccessed;
    unsigned long long totalBytes;
}

@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSString * version;
@property (copy, nonatomic) NSString * path;
@property (retain, nonatomic) NSDate * lastAccessed;
@property (nonatomic) unsigned long long totalBytes;

+ (NSString *)resourceRecordFromResourcePath:(NSString *)arg0;
+ (NSString *)resourceRecordFromResourcePath:(NSString *)arg0 withVersion:(NSString *)arg1 withLastAccessed:(NSDate *)arg2;

- (void)setLastAccessed:(NSDate *)arg0;
- (NSDate *)lastAccessed;
- (void)save;
- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void)remove;
- (void)setVersion:(NSString *)arg0;
- (NSString *)version;
- (unsigned long long)totalBytes;
- (void)setTotalBytes:(unsigned long long)arg0;

@end
