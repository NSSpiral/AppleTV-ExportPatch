/* Runtime dump - ML3ExportSession
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ExportSession : NSData
{
    ML3MusicLibrary * _library;
    NSOutputStream * _outputStream;
}

@property (readonly, nonatomic) ML3MusicLibrary * library;
@property (readonly, nonatomic) NSOutputStream * outputStream;

- (float)end;
- (void).cxx_destruct;
- (ML3MusicLibrary *)library;
- (ML3ExportSession *)initWithLibrary:(ML3MusicLibrary *)arg0 outputStream:(NSOutputStream *)arg1;
- (id)begin:(unsigned int)arg0;
- (id)exportTrackAdded:(unsigned long long)arg0;
- (id)exportTrackDeleted:(unsigned long long)arg0;
- (id)exportPlaylistAdded:(unsigned long long)arg0;
- (id)exportPlaylistDeleted:(unsigned long long)arg0;
- (NSOutputStream *)outputStream;

@end
