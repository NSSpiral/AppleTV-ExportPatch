/* Runtime dump - MPNondurableMediaItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNondurableMediaItem : MPMediaItem
{
    unsigned long long _persistentID;
}

+ (char)canFilterByProperty:(NSObject *)arg0;
+ (MPNondurableMediaItem *)defaultPropertyValues;

- (MPMediaLibrary *)mediaLibrary;
- (MPNondurableMediaItem *)initWithPersistentID:(unsigned long long)arg0;
- (NSDictionary *)valuesForProperties:(NSDictionary *)arg0;
- (void)noteWasPlayedToTime:(double)arg0 skipped:(char)arg1;
- (char)didSkipWithPlayedToTime:(double)arg0;
- (void)incrementPlayCountForPlayingToEnd;
- (char)incrementPlayCountForStopTime:(double)arg0;
- (void)enumerateValuesForProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (void)markNominalAmountHasBeenPlayed;
- (void)incrementSkipCount;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)arg0;
- (double)nominalHasBeenPlayedThreshold;
- (char)isUsableAsRepresentativeItem;
- (void)setValue:(NSObject *)arg0 forKey:(NSString *)arg1;
- (MPNondurableMediaItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;
- (char)existsInLibrary;

@end
