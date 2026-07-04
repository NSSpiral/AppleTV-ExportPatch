/* Runtime dump - EKAttachment
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAttachment : EKObject

@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) char isBinary;
@property (readonly, nonatomic) NSString * fileName;
@property (readonly, nonatomic) NSString * fileFormat;
@property (readonly, nonatomic) NSNumber * fileSize;
@property (readonly, nonatomic) NSString * UUID;
@property (readonly, nonatomic) NSURL * localURL;

- (NSString *)fileName;
- (NSString *)fileFormat;
- (char)isBinary;
- (int)compareFileNames:(id)arg0;
- (EKAttachment *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)UUID;
- (NSURL *)URL;
- (NSURL *)localURL;
- (NSNumber *)fileSize;

@end
