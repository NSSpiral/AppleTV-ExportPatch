/* Runtime dump - EKPersistentAttachment
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttachment : EKPersistentObject <NSCopying>

@property (readonly, nonatomic) NSString * UUID;
@property (copy, nonatomic) NSURL * URL;
@property (readonly, nonatomic) char isBinary;
@property (copy, nonatomic) NSString * fileName;
@property (copy, nonatomic) NSString * fileFormat;
@property (copy, nonatomic) NSURL * localURL;
@property (copy, nonatomic) NSNumber * fileSize;
@property (copy, nonatomic) NSDictionary * XProperties;

+ (NSMutableDictionary *)relations;

- (NSString *)fileName;
- (NSString *)fileFormat;
- (char)isBinary;
- (void)setFileFormat:(NSString *)arg0;
- (void)setLocalURL:(NSURL *)arg0;
- (NSDictionary *)XProperties;
- (void)setXProperties:(NSDictionary *)arg0;
- (void)setIsBinary:(char)arg0;
- (NSString *)description;
- (EKPersistentAttachment *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)UUID;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (NSURL *)localURL;
- (int)entityType;
- (NSNumber *)fileSize;
- (void)setFileSize:(NSNumber *)arg0;
- (void)setFileName:(NSString *)arg0;

@end
