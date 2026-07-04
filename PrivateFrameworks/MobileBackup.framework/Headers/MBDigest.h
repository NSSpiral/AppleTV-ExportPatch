/* Runtime dump - MBDigest
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDigest : NSObject

+ (MBDigest *)sha1;
+ (NSData *)sha1ForData:(NSData *)arg0;
+ (NSString *)sha1ForFileAtPath:(NSString *)arg0 error:(id *)arg1;
+ (NSString *)sha1ForString:(NSString *)arg0;

- (void)updateWithBytes:(void *)arg0 length:(void)arg1;
- (void)updateWithString:(NSString *)arg0;
- (void)updateWithData:(NSData *)arg0;
- (void)finalWithBytes:(void *)arg0 length:(unsigned int)arg1;
- (char)final;
- (char)updateWithFile:(NSString *)arg0 error:(id *)arg1;
- (void)updateWithInt64:(long long)arg0;
- (void)updateWithInt32:(int)arg0;
- (void)updateWithDate:(NSDate *)arg0;

@end
