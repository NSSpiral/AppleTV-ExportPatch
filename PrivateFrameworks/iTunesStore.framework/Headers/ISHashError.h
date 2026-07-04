/* Runtime dump - ISHashError
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISHashError : NSObject <NSCopying>
{
    NSString * _actualHashString;
    NSString * _expectedHashString;
    long long _rangeEnd;
    long long _rangeStart;
}

@property (copy, nonatomic) NSString * actualHashString;
@property (copy, nonatomic) NSString * expectedHashString;
@property (readonly, nonatomic) NSString * hashFailureHeaderString;
@property (nonatomic) long long rangeEnd;
@property (nonatomic) long long rangeStart;

- (long long)rangeStart;
- (long long)rangeEnd;
- (void)dealloc;
- (ISHashError *)copyWithZone:(struct _NSZone *)arg0;
- (void)setActualHashString:(NSString *)arg0;
- (void)setExpectedHashString:(NSString *)arg0;
- (void)setRangeEnd:(long long)arg0;
- (void)setRangeStart:(long long)arg0;
- (NSString *)hashFailureHeaderString;
- (NSString *)actualHashString;
- (NSString *)expectedHashString;

@end
