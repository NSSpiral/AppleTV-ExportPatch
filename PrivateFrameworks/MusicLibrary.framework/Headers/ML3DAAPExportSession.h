/* Runtime dump - ML3DAAPExportSession
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DAAPExportSession : ML3ExportSession
{
    unsigned int _currentListingContainerCode;
    unsigned int _currentSongsContainerCode;
    int _updateType;
}

- (float)end;
- (void)_endCurrentListingContainer;
- (void)_endCurrentSongsContainer;
- (void)_setSongsContainer:(unsigned int)arg0;
- (void)_setListingContainer:(unsigned int)arg0;
- (NSObject *)_trackExportItemForPersistendId:(long long)arg0;
- (NSObject *)_playlistExportItemForPersistentId:(long long)arg0;
- (ML3DAAPExportSession *)initWithLibrary:(ML3MusicLibrary *)arg0 outputStream:(NSOutputStream *)arg1 updateType:(int)arg2;
- (id)begin:(unsigned int)arg0;
- (id)exportTrackAdded:(unsigned long long)arg0;
- (id)exportTrackDeleted:(unsigned long long)arg0;
- (id)exportPlaylistAdded:(unsigned long long)arg0;
- (id)exportPlaylistDeleted:(unsigned long long)arg0;

@end
