/* Runtime dump - ATVBookmark
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVBookmark : NSObject <NSCopying, NSMutableCopying>
{
    char _hasBeenPlayed;
    char _hasBeenRented;
    char _isMarkedAsUnwatched;
    ATVBookmarkKey * _key;
    NSDate * _bookmarkTimestamp;
    unsigned int _playCount;
    double _bookmarkTime;
}

@property (readonly, nonatomic) ATVBookmarkKey * key;
@property (readonly, nonatomic) double bookmarkTime;
@property (readonly, nonatomic) NSDate * bookmarkTimestamp;
@property (readonly, nonatomic) unsigned int playCount;
@property (readonly, nonatomic) char hasBeenPlayed;
@property (readonly, nonatomic) char hasBeenRented;
@property (readonly, nonatomic) char isMarkedAsUnwatched;

- (double)bookmarkTime;
- (char)hasBeenPlayed;
- (ATVBookmark *)init;
- (NSString *)description;
- (ATVBookmarkKey *)key;
- (ATVBookmark *)copyWithZone:(struct _NSZone *)arg0;
- (ATVBookmark *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSDate *)bookmarkTimestamp;
- (char)hasBeenRented;
- (char)isMarkedAsUnwatched;
- (NSObject *)_copyWithResultClass:(Class)arg0;
- (void)_setBookmarkTimeWithoutUpdatingTimestamp:(double)arg0;
- (void)_setBookmarkTimestamp:(NSDate *)arg0;
- (void)_setPlayCount:(unsigned int)arg0;
- (void)_setHasBeenPlayed:(char)arg0;
- (void)_setHasBeenRented:(char)arg0;
- (void)_setIsMarkedAsUnwatched:(char)arg0;
- (char)hasRemoteData;
- (unsigned int)playCount;
- (ATVBookmark *)initWithKey:(ATVBookmarkKey *)arg0;

@end
