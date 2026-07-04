/* Runtime dump - ATVMutableBookmark
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMutableBookmark : ATVBookmark

@property (nonatomic) double bookmarkTime;
@property (retain, nonatomic) NSDate * bookmarkTimestamp;
@property (nonatomic) unsigned int playCount;
@property (nonatomic) char hasBeenPlayed;
@property (nonatomic) char hasBeenRented;
@property (nonatomic) char isMarkedAsUnwatched;

- (void)setHasBeenPlayed:(char)arg0;
- (void)setBookmarkTime:(double)arg0;
- (void)setBookmarkTimestamp:(NSDate *)arg0;
- (void)setHasBeenRented:(char)arg0;
- (void)setIsMarkedAsUnwatched:(char)arg0;
- (void)setPlayCount:(unsigned int)arg0;

@end
