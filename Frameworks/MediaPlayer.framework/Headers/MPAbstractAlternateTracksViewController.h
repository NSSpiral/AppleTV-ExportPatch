/* Runtime dump - MPAbstractAlternateTracksViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractAlternateTracksViewController : MPViewController
{
    id _selectedTracks;
    id _previousTracks;
}

- (NSArray *)alternateTracks;
- (void)saveChanges;
- (unsigned int)countOfGroups;
- (NSObject *)arrayForGroup:(int)arg0;
- (unsigned int)indexForGroup:(int)arg0;
- (unsigned int)typeForGroup:(int)arg0;
- (void)addLoadingUI;
- (void)removeLoadingUI;
- (void)_alternateTypesChangedNotification:(NSNotification *)arg0;
- (char)_hasAudioGroup;
- (char)_hasSubtitlesGroup;
- (void)dealloc;
- (void)reloadData;
- (MPAbstractAlternateTracksViewController *)init;

@end
