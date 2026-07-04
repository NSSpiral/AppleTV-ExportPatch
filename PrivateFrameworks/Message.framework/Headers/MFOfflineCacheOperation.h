/* Runtime dump - MFOfflineCacheOperation
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOfflineCacheOperation : NSObject <NSCoding>
{
    long long _rowid;
}

@property (nonatomic) long long rowid;

- (MFOfflineCacheOperation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MFOfflineCacheOperation *)init;
- (void)setRowid:(long long)arg0;
- (char)hasRowid;
- (long long)rowid;

@end
