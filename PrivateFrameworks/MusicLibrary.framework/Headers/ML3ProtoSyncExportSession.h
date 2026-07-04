/* Runtime dump - ML3ProtoSyncExportSession
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ProtoSyncExportSession : ML3ExportSession
{
    NSString * _libraryUUID;
    int _syncType;
    MSVStreamWriter * _streamWriter;
    struct ? _stats;
    double _sessionStartTime;
}

- (float)end;
- (void).cxx_destruct;
- (id)begin:(unsigned int)arg0;
- (id)exportTrackAdded:(unsigned long long)arg0;
- (id)exportTrackDeleted:(unsigned long long)arg0;
- (id)exportPlaylistAdded:(unsigned long long)arg0;
- (id)exportPlaylistDeleted:(unsigned long long)arg0;
- (NSObject *)_writSyncPackageToStream:(NSObject *)arg0;
- (ML3ProtoSyncExportSession *)initWithLibrary:(ML3MusicLibrary *)arg0 outputStream:(NSOutputStream *)arg1 syncType:(int)arg2;

@end
