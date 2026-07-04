/* Runtime dump - MFFetchLimits
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFFetchLimits : NSObject
{
    unsigned int _fetchMinBytes;
    unsigned int _fetchMaxBytes;
    unsigned int _minBytesLeft;
}

@property (nonatomic) unsigned int fetchMinBytes;
@property (nonatomic) unsigned int fetchMaxBytes;
@property (nonatomic) unsigned int minBytesLeft;

- (MFFetchLimits *)init;
- (void)setFetchMaxBytes:(unsigned int)arg0;
- (unsigned int)fetchMaxBytes;
- (unsigned int)fetchMinBytes;
- (void)setFetchMinBytes:(unsigned int)arg0;
- (unsigned int)minBytesLeft;
- (void)setMinBytesLeft:(unsigned int)arg0;

@end
