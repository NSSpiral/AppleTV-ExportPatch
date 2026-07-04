/* Runtime dump - MBDigestSHA1
 * Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@interface MBDigestSHA1 : MBDigest
{
    struct CC_SHA1state_st _context;
}

- (void)updateWithBytes:(void *)arg0 length:(void)arg1;
- (MBDigestSHA1 *)init;
- (void)finalWithBytes:(void *)arg0 length:(unsigned int)arg1;
- (char)final;

@end
